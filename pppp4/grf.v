`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:25:38 12/09/2017 
// Design Name: 
// Module Name:    grf 
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
module grf(
	input [31:0] grf_pc,
	input [31:0] grf_instr,
	input [4:0] grf_Wreg,
	input [31:0] grf_Wdata,
	input grf_RegWrite,
	input grf_clk,
	input grf_reset,
	output [31:0] grf_Rdata1,
	output [31:0] grf_Rdata2
	);
	
	reg [31:0] regfile[31:0];
	integer i;
	
	initial begin
		for (i = 0;i < 32;i = i+1) begin
			regfile[i] = 0;
		end
	end
	
	assign grf_Rdata1 = regfile[grf_instr[25:21]];
	assign grf_Rdata2 = regfile[grf_instr[20:16]];
	
	always @(posedge grf_clk) begin
		if (grf_reset) begin
			for (i = 0;i < 32;i = i+1) begin
				regfile[i] <= 0;
			end
		end
		else begin
			/*rdata1 <= regfile[grf_instr[25:21]];
			rdata2 <= regfile[grf_instr[20:16]];
			$display("rdata1:%d",rdata1);
			$display("rdata2:%d",rdata2);*/
			if(grf_RegWrite) begin
				if(grf_Wreg!=0) regfile[grf_Wreg] <= grf_Wdata;
				$display("@%h: $%d <= %h", grf_pc, grf_Wreg, grf_Wdata);
			end
			
		end
	end
	


endmodule
