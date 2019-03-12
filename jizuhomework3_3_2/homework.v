`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:03:00 11/08/2017 
// Design Name: 
// Module Name:    homework 
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
module homework(
	input clk,
	output reg Q1,
	output reg Q2,
	output reg Q3,
	output reg C
    );
	initial begin
		Q1 = 0;
		Q2 = 0;
		Q3 = 0;
		C = 0;
	end
	always @(posedge clk) begin
		Q1 <= ~Q3;
		Q2 <= Q1;
		Q3 <= Q1 && Q2;
		C <= ~Q3 || Q1;
	end


endmodule
