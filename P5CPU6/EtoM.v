`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:48:32 12/18/2017 
// Design Name: 
// Module Name:    EtoM 
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
module EtoM(
	input clk,
	input reset,
	input [31:0] ir,
	input [31:0] aluout,
	input [31:0] rt,
	input [31:0] pc4,
	input [31:0] pc8,
	output [31:0] ir_m,
	output [31:0] aluout_m,
	output [31:0] rt_m,
	output [31:0] pc4_m,
	output [31:0] pc8_m
    );
	
	reg [31:0] IR_M;
	reg [31:0] ALUOUT_M;
	reg [31:0] RT_M;
	reg [31:0] PC4_M;
	reg [31:0] PC8_M;

	assign ir_m = IR_M;
	assign aluout_m = ALUOUT_M;
	assign rt_m = RT_M;
	assign pc4_m = PC4_M;
	assign pc8_m = PC8_M;
	
	always @(posedge clk) begin
		if(reset) begin
			IR_M <= 0;
			ALUOUT_M <= 0;
			RT_M <= 0;
			PC4_M <= 0;
			PC8_M <= 0;
		end
		else begin 
			IR_M <= ir;
			ALUOUT_M <= aluout; 
			RT_M <= rt;
			PC4_M <= pc4;
			PC8_M <= pc8;
		end
	end
endmodule
