`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:02:33 01/01/2018 
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
module alu(
	input [31:0] numa,
	input [31:0] numb,
	input [3:0] aluop,
	output [31:0] aluout
    );
	 
	assign aluout=
	(aluop == 0)?(numa & numb):
	(aluop == 1)?(numa | numb):
	(aluop == 2)?(numa + numb):
	(aluop == 3)?(numa - numb):
	(aluop == 4)?({numb[15:0],16'b0000000000000000}):
	(aluop == 5)?(numb << numa[4:0]):
	(aluop == 6)?(numb >> numa[4:0]):
	(aluop == 7)?($signed($signed(numb) >>> numa[4:0])):
	(aluop == 8)?(numa ^ numb):
	(aluop == 9)?(~(numa | numb)):
	((aluop == 10)&&($signed(numa)<$signed(numb)))?1:
	((aluop == 11)&&($unsigned(numa)<$unsigned(numb)))?1:0;

endmodule
