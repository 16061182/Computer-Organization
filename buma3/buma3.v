`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:34:14 11/23/2017 
// Design Name: 
// Module Name:    buma3 
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
module buma3(
	input [31:0] I1,
	input [31:0] I2,
	output overflow,
	output [31:0] O
    );
	reg [31:0] out;
	reg over;
	initial begin
		out=0;
		over=0;
	end
	assign O=out;
	assign overflow=over;
	integer i;
	always @* begin
		{over,out}=I1+I2;
	end


endmodule
