`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:44:15 12/18/2017 
// Design Name: 
// Module Name:    cmp 
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
module cmp(
	input [31:0] rf_rd1,
	input [31:0] rf_rd2,
	output bgez,
	output beq
    );
	assign beq=
	(rf_rd1 == rf_rd2)?1:0;
	
	assign bgez=
	($signed(rf_rd1)>=0)?1:0;


endmodule
