`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:10:59 01/03/2018 
// Design Name: 
// Module Name:    be 
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
module be(
	input [31:0] aluout_m,
	input [2:0] be_option,
	output [3:0] be
    );
	
	wire [1:0] byt;
	assign byt = aluout_m[1:0];
	
	assign be=
	(be_option==2&&byt==0)?(4'b0011):
	(be_option==2&&byt==2)?(4'b1100):
	(be_option==1&&byt==0)?(4'b0001):
	(be_option==1&&byt==1)?(4'b0010):
	(be_option==1&&byt==2)?(4'b0100):
	(be_option==1&&byt==3)?(4'b1000):(4'b1111);
	


endmodule
