`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:18:10 11/23/2017 
// Design Name: 
// Module Name:    buma2 
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
module buma2(
	input [3:0] A,
	input [3:0] B,
	output [3:0] O1,
	output [3:0] O2
	
    );
	 reg [3:0] out1;
	 reg [3:0] out2;
	 initial begin
		out1=0;
		out2=0;
	 end
	 assign O1=out1;
	 assign O2=out2;
	 always @* begin
		out1=-A;
		out2=-4'd5;
	 end
		
		


endmodule
