`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:47:42 12/18/2017 
// Design Name: 
// Module Name:    DtoE 
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
module DtoE(
	input clk,
	input reset,
	input stall,//ÔÝÍ£»úÖÆ
	input [31:0] ir,
	input [31:0] rf_rd1,
	input [31:0] rf_rd2,
	input [31:0] pc4,
	input [31:0] pc8,
	input bgezal,
	input movz,
	output [31:0] ir_e,
	output [31:0] rs_e,
	output [31:0] rt_e,
	output [31:0] ext0_e,
	output [31:0] ext1_e,
	output [31:0] pc4_e,
	output [31:0] pc8_e,
	output bgezal_e,
	output movz_e
    );
	
	reg [31:0] IR_E;
	reg [31:0] RS_E;
	reg [31:0] RT_E;
	reg [31:0] EXT0_E;
	reg [31:0] EXT1_E;
	reg [31:0] PC4_E;
	reg [31:0] PC8_E;
	reg BGEZAL_E;
	reg MOVZ_E;
	
	assign ir_e = IR_E;
	assign rs_e = RS_E;
	assign rt_e = RT_E;
	assign ext0_e = EXT0_E;
	assign ext1_e = EXT1_E;
	assign pc4_e = PC4_E;
	assign pc8_e = PC8_E;
	assign bgezal_e = BGEZAL_E;
	assign movz_e = MOVZ_E;
	
	always @(posedge clk) begin
		if (reset) begin
			IR_E <= 0;
			RS_E <= 0;
			RT_E <= 0;
			EXT0_E <= 0;
			EXT1_E <= 0;
			PC4_E <= 0;
			PC8_E <= 0;
			BGEZAL_E <= 0;
			MOVZ_E <= 0;
		end
		else begin
			if(stall) begin//ÇåÁã
				IR_E <= 0;
				RS_E <= 0;
				RT_E <= 0;
				EXT0_E <= 0;
				EXT1_E <= 0;
				PC4_E <= 0;
				PC8_E <= 0;
				BGEZAL_E <= 0;
				MOVZ_E <= 0;
			end
			else begin
				IR_E <= ir;
				RS_E <= rf_rd1;
				RT_E <= rf_rd2;
				EXT0_E <= {16'b0000000000000000,ir[15:0]};
				EXT1_E <= {{16{ir[15]}},ir[15:0]};
				PC4_E <= pc4;
				PC8_E <= pc8;
				BGEZAL_E <= bgezal;
				MOVZ_E <= movz;
			end
		end	
	end
endmodule
