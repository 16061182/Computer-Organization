`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:44:00 12/18/2017 
// Design Name: 
// Module Name:    rf 
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
`define op 31:26
`define func 5:0
module rf(
	input clk,
	input reset,
	input [31:0] pc4_w,
	input [31:0] ir_d,
	input [31:0] ir_w,
	input bgezal_w,
	input movz_w,
	input [4:0] wreg,
	input [31:0] wdata,
	output [31:0] rf_rd1,
	output [31:0] rf_rd2
    );
	 
	wire regwrite;
	wire [31:0] pc;
	assign regwrite=//addu,subu,ori,lw,lui,jal,isbgezal,srav,ismovz
	(ir_w[`op]==6'b000000&&ir_w[`func]==6'b100001)?1:
	(ir_w[`op]==6'b000000&&ir_w[`func]==6'b100011)?1:
	(ir_w[`op]==6'b001101)?1:
	(ir_w[`op]==6'b100011)?1:
	(ir_w[`op]==6'b001111)?1:
	(ir_w[`op]==6'b000011)?1:
	(ir_w[`op]==6'b000001&&ir_w[20:16]==5'b10001&&bgezal_w)?1:
	(ir_w[`op]==6'b000000&&ir_w[`func]==6'b000111)?1:
	(ir_w[`op]==6'b000000&&ir_w[`func]==6'b001010&&movz_w)?1:0;
	assign pc = pc4_w-4;
	
	reg [31:0] regfile[31:0];
	integer i;
	
	initial begin
		for (i=0;i<32;i=i+1) begin
			regfile[i] = 0;
		end
	end
	
	assign rf_rd1 = regfile[ir_d[25:21]];
	assign rf_rd2 = regfile[ir_d[20:16]];
	
	always @(negedge clk) begin
		if(reset) begin
			for (i=0;i<32;i=i+1) begin
				regfile[i] <= 0;
			end
		end
		else begin
			if(regwrite) begin
				if(wreg!=0) regfile[wreg] <= wdata;
				$display("%d@%h: $%d <= %h", $time, pc, wreg, wdata);
			end
		end
	end

endmodule
