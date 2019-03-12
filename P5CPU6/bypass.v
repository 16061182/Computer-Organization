`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:53:42 12/18/2017 
// Design Name: 
// Module Name:    bypass 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`define op 31:26
`define func 5:0
`define rs 25:21
`define rt 20:16
`define rd 15:11
`define cal_r 6'b000000 //注意jr指令的op也为6'b000000
`define ori 6'b001101
`define lw 6'b100011
`define sw 6'b101011
`define beq 6'b000100
`define lui 6'b001111
`define j 6'b000010
`define jal 6'b000011
`define addu_func 6'b100001
`define subu_func 6'b100011
`define jr_func 6'b001000
module bypass(
	input [31:0] ir_d,
	input [31:0] ir_e,
	input [31:0] ir_m,
	input [31:0] ir_w,
	output [2:0] rsd_sel,
	output [2:0] rtd_sel,
	output [2:0] rse_sel,
	output [2:0] rte_sel,
	output [2:0] rtm_sel
    );
	
	wire beq_d;
	assign beq_d=(ir_d[`op]==`beq)?1:0;
	
	wire jr_d;
	assign jr_d=(ir_d[`op]==`cal_r&&ir_d[`func]==`jr_func)?1:0;
	
	wire lw_e;
	assign lw_e=(ir_e[`op]==`lw)?1:0;
	wire sw_e;
	assign sw_e=(ir_e[`op]==`sw)?1:0;
	
	wire cal_e;
	assign cal_e=((ir_e[`op]==`cal_r&&(ir_e[`func]==`addu_func||ir_e[`func]==`subu_func))||(ir_e[`op]==`ori||ir_e[`op]==`lui))?1:0;
	
	wire cal_r_e;
	assign cal_r_e=(ir_e[`op]==`cal_r&&(ir_e[`func]==`addu_func||ir_e[`func]==`subu_func))?1:0;
	
	wire sw_m;
	assign sw_m=(ir_m[`op]==`sw)?1:0;
	
	wire jal_e;
	assign jal_e=(ir_e[`op]==`jal)?1:0;
	
	wire cal_r_m;
	assign cal_r_m=(ir_m[`op]==`cal_r&&(ir_m[`func]==`addu_func||ir_m[`func]==`subu_func))?1:0;
	wire cal_i_m;
	assign cal_i_m=(ir_m[`op]==`ori||ir_m[`op]==`lui)?1:0;
	wire jal_m;
	assign jal_m=(ir_m[`op]==`jal)?1:0;
	
	wire cal_r_w;
	assign cal_r_w=(ir_w[`op]==`cal_r&&(ir_w[`func]==`addu_func||ir_w[`func]==`subu_func))?1:0;
	wire cal_i_w;
	assign cal_i_w=(ir_w[`op]==`ori||ir_w[`op]==`lui)?1:0;
	wire lw_w;
	assign lw_w=(ir_w[`op]==`lw)?1:0;
	wire jal_w;
	assign jal_w=(ir_w[`op]==`jal)?1:0;
	
	assign rsd_sel=
	((beq_d||jr_d) && jal_e   && ir_d[`rs]==5'b11111)?1:
	((beq_d||jr_d) && cal_r_m && ir_d[`rs]==ir_m[`rd] && ir_d[`rs]!=5'b00000)?2://$0不转发
	((beq_d||jr_d) && cal_i_m && ir_d[`rs]==ir_m[`rt] && ir_d[`rs]!=5'b00000)?2:
	((beq_d||jr_d) && jal_m   && ir_d[`rs]==5'b11111)?3:
	((beq_d||jr_d) && cal_r_w && ir_d[`rs]==ir_w[`rd] && ir_d[`rs]!=5'b00000)?4:
	((beq_d||jr_d) && cal_i_w && ir_d[`rs]==ir_w[`rt] && ir_d[`rs]!=5'b00000)?4:
	((beq_d||jr_d) && lw_w    && ir_d[`rs]==ir_w[`rt] && ir_d[`rs]!=5'b00000)?4:
	((beq_d||jr_d) && jal_w   && ir_d[`rs]==5'b11111)?4:0;
	
	assign rtd_sel=
	(beq_d && jal_e   && ir_d[`rt]==5'b11111)?1:
	(beq_d && cal_r_m && ir_d[`rt]==ir_m[`rd] && ir_d[`rt]!=5'b00000)?2:
	(beq_d && cal_i_m && ir_d[`rt]==ir_m[`rt] && ir_d[`rt]!=5'b00000)?2:
	(beq_d && jal_m   && ir_d[`rt]==5'b11111)?3:
	(beq_d && cal_r_w && ir_d[`rt]==ir_w[`rd] && ir_d[`rt]!=5'b00000)?4:
	(beq_d && cal_i_w && ir_d[`rt]==ir_w[`rt] && ir_d[`rt]!=5'b00000)?4:
	(beq_d && lw_w    && ir_d[`rt]==ir_w[`rt] && ir_d[`rt]!=5'b00000)?4:
	(beq_d && jal_w   && ir_d[`rt]==5'b11111)?4:0;
	
	assign rse_sel=//根据时间不可逆性，转发来源的数据一定在当前阶段之后的阶段，即e级的指令不可能接受来自e级的转发数据
	((cal_e||lw_e||sw_e) && cal_r_m && ir_e[`rs]==ir_m[`rd] && ir_e[`rs]!=5'b00000)?1:
	((cal_e||lw_e||sw_e) && cal_i_m && ir_e[`rs]==ir_m[`rt] && ir_e[`rs]!=5'b00000)?1:
	((cal_e||lw_e||sw_e) && jal_m   && ir_e[`rs]==5'b11111)?2:
	((cal_e||lw_e||sw_e) && cal_r_w && ir_e[`rs]==ir_w[`rd] && ir_e[`rs]!=5'b00000)?3:
	((cal_e||lw_e||sw_e) && cal_i_w && ir_e[`rs]==ir_w[`rt] && ir_e[`rs]!=5'b00000)?3:
	((cal_e||lw_e||sw_e) && lw_w    && ir_e[`rs]==ir_w[`rt] && ir_e[`rs]!=5'b00000)?3:
	((cal_e||lw_e||sw_e) && jal_w   && ir_e[`rs]==5'b11111)?3:0;
	
	assign rte_sel=
	(cal_r_e && cal_r_m && ir_e[`rt]==ir_m[`rd] && ir_e[`rt]!=5'b00000)?1:
	(cal_r_e && cal_i_m && ir_e[`rt]==ir_m[`rt] && ir_e[`rt]!=5'b00000)?1:
	(cal_r_e && jal_m   && ir_e[`rt]==5'b11111)?2:
	(cal_r_e && cal_r_w && ir_e[`rt]==ir_w[`rd] && ir_e[`rt]!=5'b00000)?3:
	(cal_r_e && cal_i_w && ir_e[`rt]==ir_w[`rt] && ir_e[`rt]!=5'b00000)?3:
	(cal_r_e && lw_w    && ir_e[`rt]==ir_w[`rt] && ir_e[`rt]!=5'b00000)?3:
	(cal_r_e && jal_w   && ir_e[`rt]==5'b11111)?3:0;
	
	assign rtm_sel=
	(sw_m && cal_r_w && ir_m[`rt]==ir_w[`rd] && ir_m[`rt]!=5'b00000)?1:
	(sw_m && cal_i_w && ir_m[`rt]==ir_w[`rt] && ir_m[`rt]!=5'b00000)?1:
	(sw_m && lw_w    && ir_m[`rt]==ir_w[`rt] && ir_m[`rt]!=5'b00000)?1:
	(sw_m && jal_w   && ir_m[`rt]==5'b11111)?1:0;

endmodule
