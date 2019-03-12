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
	wire stall_store;
	wire stall_jr;
	
	assign stall_b=
	ir_d[`op]==`beq && (
	(ir_e[`op]==`cal_r&&(ir_e[`func]==`addu_func||ir_e[`func]==`subu_func) && (ir_d[`rs]==ir_e[`rd]||ir_d[`rt]==ir_e[`rd])) ||
	((ir_e[`op]==`ori||ir_e[`op]==`lui) && (ir_d[`rs]==ir_e[`rt]||ir_d[`rt]==ir_e[`rt])) ||
	(ir_e[`op]==`lw && (ir_d[`rs]==ir_e[`rt]||ir_d[`rt]==ir_e[`rt])) ||
	(ir_m[`op]==`lw && (ir_d[`rs]==ir_m[`rt]||ir_d[`rt]==ir_m[`rt]))
	);
	
	assign stall_cal_r=
	(ir_d[`op]==`cal_r&&(ir_d[`func]==`addu_func||ir_d[`func]==`subu_func)) && ir_e[`op]==`lw && (ir_d[`rs]==ir_e[`rt]||ir_d[`rt]==ir_e[`rt]);
	
	assign stall_cal_i=
	(ir_d[`op]==`ori||ir_d[`op]==`lui) && ir_e[`op]==`lw && ir_d[`rs]==ir_e[`rt];
	
	assign stall_load=
	ir_d[`op]==`lw && ir_e[`op]==`lw && ir_d[`rs]==ir_e[`rt];
	
	assign stall_store=
	ir_d[`op]==`sw && ir_e[`op]==`lw && ir_d[`rs]==ir_e[`rt];
	
	assign stall_jr=
	ir_d[`op]==`cal_r&&ir_d[`func]==`jr_func &&(
	(ir_e[`op]==`cal_r&&(ir_e[`func]==`addu_func||ir_e[`func]==`subu_func) && ir_d[`rs]==ir_e[`rd]) ||
	((ir_e[`op]==`ori||ir_e[`op]==`lui) && ir_d[`rs]==ir_e[`rt]) ||
	(ir_e[`op]==`lw && ir_d[`rs]==ir_e[`rt]) ||
	(ir_m[`op]==`lw && ir_d[`rs]==ir_m[`rt])
	);
	
	assign stall=
	stall_b || stall_cal_r || stall_cal_i || stall_load || stall_store || stall_jr;


endmodule
