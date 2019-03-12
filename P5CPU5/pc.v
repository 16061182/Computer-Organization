`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:41:56 12/18/2017 
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
	input stall,//ÔÝÍ£»úÖÆ
	input [31:0] in,
	input [31:0] out
    );
	
	reg [31:0] OUT;
	assign out = OUT;
	
	always @(posedge clk) begin
		if(reset) OUT <= 32'h00003000;
		else begin
			if(stall);//¶³½á
			else OUT <= in;
		end
	end

endmodule
