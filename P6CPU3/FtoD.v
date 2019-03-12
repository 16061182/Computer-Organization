`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:49:36 12/31/2017 
// Design Name: 
// Module Name:    FtoD 
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
module FtoD(
	input clk,
	input reset,
	input stall,
	input [31:0] ir,
	input [31:0] pc4,
	output [31:0] ir_d,
	output [31:0] pc4_d,
	output [31:0] pc8_d
    );
	
	reg [31:0] IR_D;
	reg [31:0] PC4_D;
	reg [31:0] PC8_D;
	
	assign ir_d = IR_D;
	assign pc4_d = PC4_D;
	assign pc8_d = PC8_D;
	
	always @(posedge clk) begin
		if(reset) begin
			IR_D <= 0;
			PC4_D <= 0;
			PC8_D <= 0;
		end
		else begin
			if(!stall) begin
				IR_D <= ir;
				PC4_D <= pc4;
				PC8_D <= pc4 + 4;
			end
		end
	end


endmodule
