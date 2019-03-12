`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:45:08 12/18/2017 
// Design Name: 
// Module Name:    npc 
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
module npc(
	input [31:0] ir_d,
	input [31:0] pc4,
	input [31:0] rf_rd1,//jr的地址
	input beq,//相等标志位
	output [31:0] npc
    );
	wire [31:0] pc;
	assign pc = pc4-4;
	assign npc=
	(ir_d[`op]==6'b000000&&ir_d[`func]==6'b001000)?rf_rd1://jr
	(ir_d[`op]==6'b000011||ir_d[`op]==6'b000010)?({pc[31:28],ir_d[25:0],2'b00})://jal、j
	(ir_d[`op]==6'b000100&&beq)?(pc4+{{14{ir_d[15]}},ir_d[15:0],2'b00})://beq
	pc4;//不跳转
endmodule
