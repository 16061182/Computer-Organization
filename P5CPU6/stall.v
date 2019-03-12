`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:53:55 12/18/2017 
// Design Name: 
// Module Name:    stall 
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

module stall(
	input [31:0] ir_d,
	input [31:0] ir_e,
	input [31:0] ir_m,
	output stall
    );
	 
	wire stall_b;
	wire stall_cal_r;
	wire stall_cal_i;
	wire stall_load;
	wire stall_store_rs;
	wire stall_store_rt;
	wire stall_jr;
	
	wire beq_d;
	assign beq_d=(ir_d[`op]==`beq)?1:0;
	
	wire cal_r_d;
	assign cal_r_d=(ir_d[`op]==`cal_r&&(ir_d[`func]==`addu_func||ir_d[`func]==`subu_func))?1:0;

	wire cal_i_d;
	assign cal_i_d=(ir_d[`op]==`ori||ir_d[`op]==`lui)?1:0;
	
	wire lw_d;
	assign lw_d=(ir_d[`op]==`lw)?1:0;
	
	wire sw_d;
	assign sw_d=(ir_d[`op]==`sw)?1:0;
	
	wire jr_d;
	assign jr_d=(ir_d[`op]==`cal_r&&ir_d[`func]==`jr_func)?1:0;
	
	wire cal_r_e;
	assign cal_r_e=(ir_e[`op]==`cal_r&&(ir_e[`func]==`addu_func||ir_e[`func]==`subu_func))?1:0;
	
	wire cal_i_e;
	assign cal_i_e=(ir_e[`op]==`ori||ir_e[`op]==`lui)?1:0;
	
	wire lw_e;
	assign lw_e=(ir_e[`op]==`lw)?1:0;
	
	wire cal_r_m;
	assign cal_r_m=(ir_m[`op]==`cal_r&&(ir_m[`func]==`addu_func||ir_m[`func]==`subu_func))?1:0;
	
	wire cal_i_m;
	assign cal_i_m=(ir_m[`op]==`ori||ir_m[`op]==`lui)?1:0;
	
	wire lw_m;
	assign lw_m=(ir_m[`op]==`lw)?1:0;
	
	wire jal_m;
	assign jal_m=(ir_m[`op]==`jal)?1:0;
	
	assign stall_b=
	beq_d && (
	(cal_r_e && (ir_d[`rs]==ir_e[`rd]||ir_d[`rt]==ir_e[`rd])) ||
	(cal_i_e && (ir_d[`rs]==ir_e[`rt]||ir_d[`rt]==ir_e[`rt])) ||
	(lw_e && (ir_d[`rs]==ir_e[`rt]||ir_d[`rt]==ir_e[`rt])) ||
	(lw_m && (ir_d[`rs]==ir_m[`rt]||ir_d[`rt]==ir_m[`rt]))
	);
	
	assign stall_cal_r=
	cal_r_d && lw_e && (ir_d[`rs]==ir_e[`rt]||ir_d[`rt]==ir_e[`rt]);
	
	assign stall_cal_i=
	cal_i_d && lw_e && ir_d[`rs]==ir_e[`rt];
	
	assign stall_load=
	lw_d && lw_e && ir_d[`rs]==ir_e[`rt];
	
	assign stall_store_rs=
	sw_d && lw_e && ir_d[`rs]==ir_e[`rt];
	
	assign stall_store_rt=
	sw_d &&( 
	lw_m && ir_d[`rt]==ir_m[`rt] ||
	cal_r_m && ir_d[`rt]==ir_m[`rd] ||
	cal_i_m && ir_d[`rt]==ir_m[`rt] ||
	jal_m && ir_d[`rt]==5'b11111
	);
	
	assign stall_jr=
	jr_d &&(
	(cal_r_e && ir_d[`rs]==ir_e[`rd]) ||
	(cal_i_e && ir_d[`rs]==ir_e[`rt]) ||
	(lw_e && ir_d[`rs]==ir_e[`rt]) ||
	(lw_m && ir_d[`rs]==ir_m[`rt])
	);
	
	assign stall=
	stall_b || stall_cal_r || stall_cal_i || stall_load || stall_store_rs || stall_store_rt || stall_jr;


endmodule
