`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:02:39 12/31/2017 
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
module rf(
	input clk,
	input reset,
	input [31:0] pc4_w,
	input [31:0] ir_d,
	input regwrite,
	input [4:0] wreg,
	input [31:0] wdata,
	output [31:0] rf_rd1,
	output [31:0] rf_rd2
    );
	
	wire [31:0] pc;
	assign pc = pc4_w - 4;
	
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
			for(i=0;i<32;i=i+1) begin
					regfile[i] <= 0;
			end
		end
		else begin
			if(regwrite) begin
				if(wreg!=0) begin
					regfile[wreg] <= wdata;
					$display("%d@%h: $%d <= %h", $time, pc, wreg, wdata);
				end
			end
		end
	end
		

endmodule
