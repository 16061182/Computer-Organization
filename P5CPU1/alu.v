`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:48:13 12/18/2017 
// Design Name: 
// Module Name:    alu 
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
module alu(
	input [31:0] numa,
	input [31:0] numb,
	input [31:0] ir_e,
	input [31:0] aluout
    );
	 
	wire [2:0] aluop;
	
	assign aluop[2]=//lui
	(ir_e[`op]==6'b001111)?1:0;
	
	assign aluop[1]=//addu,subu,lw,sw
	(ir_e[`op]==6'b000000&&ir_e[`func]==6'b100001)?1:
	(ir_e[`op]==6'b000000&&ir_e[`func]==6'b100011)?1:
	(ir_e[`op]==6'b100011)?1:
	(ir_e[`op]==6'b101011)?1:0;
	
	assign aluop[0]=//subu,ori
	(ir_e[`op]==6'b000000&&ir_e[`func]==6'b100011)?1:
	(ir_e[`op]==6'b001101)?1:0;
	
	assign aluout=
	(aluop == 0)?(numa & numb):
	(aluop == 1)?(numa | numb):
	(aluop == 2)?(numa + numb):
	(aluop == 3)?(numa - numb):
	(aluop == 4)?({numb[15:0],16'b0000000000000000}):0;

endmodule
