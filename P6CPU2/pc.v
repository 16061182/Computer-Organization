`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:34:49 12/31/2017 
// Design Name: 
// Module Name:    pc 
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
module pc(
	input clk,
	input reset,
	input stall,
	input [31:0] in,
	input [31:0] out
    );
	
	reg [31:0] OUT;
	assign out = OUT;
	
	always @(posedge clk) begin
		if(reset) OUT <= 32'h00003000;
		else begin
			if(!stall) OUT <= in;
		end
	end


endmodule
