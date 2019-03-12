`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:34:08 12/20/2017 
// Design Name: 
// Module Name:    XALU 
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
`include "head.v"
module XALU(
	input signed [31:0]  A,
	input signed [31:0]  B,
	input clk,
	input reset,
	input [31:0] instr_d,
	output[31:0] out,
	output busy
	);
	 wire mflo,mfhi,mult,multu,div,divu,mthi,mtlo,madd;
	 assign mfhi=(instr_d[`opcode]==0 && instr_d[`funct]==`MFHI)?1:0;
	 assign mflo=(instr_d[`opcode]==0 && instr_d[`funct]==`MFLO)?1:0;
	 assign mult=(instr_d[`opcode]==0 && instr_d[`funct]==`MULT)?1:0;
	 assign multu=(instr_d[`opcode]==0 && instr_d[`funct]==`MULTU)?1:0;
	 assign div=(instr_d[`opcode]==0 && instr_d[`funct]==`DIV)?1:0;
	 assign divu=(instr_d[`opcode]==0 && instr_d[`funct]==`DIVU)?1:0;
	 assign mthi=(instr_d[`opcode]==0 && instr_d[`funct]==`MTHI)?1:0;
	 assign mtlo=(instr_d[`opcode]==0 && instr_d[`funct]==`MTLO)?1:0;
	 assign madd=(instr_d[`opcode]==`MADD && instr_d[`funct]==0)?1:0;
	 
	 integer i=0;
	 reg [31:0] hi,lo;
	 assign busy=(i>0)?1:0;
	 assign out=(mfhi)? hi:
					(mflo)? lo:0;
	 wire [63:0] mid=A*B;
	 always@(posedge clk)begin
		if(reset) begin 
			hi<=0; 
			lo<=0; 
			i<=0; 
		end
		else begin
			if(mult) begin
				i<=5;
				hi<=5;
				{hi,lo}<=A*B;
			end
			else if(multu)begin
				i<=5;
				{hi,lo}<={1'b0,A}*{1'b0,B};
			end
			else if(div)begin
				i<=10;
				hi<=A%B;
				lo<=A/B;

			end
			else if(divu)begin
				i<=10;
				hi<={1'b0,A}%{1'b0,B};
				lo<={1'b0,A}/{1'b0,B};
			end
			else if(mthi)begin 
				i<=0;
				hi<=A;
				lo<=lo;
			end
			else if(mtlo) begin
				i<=0;
				lo<=A;
				hi<=hi;
			end
			else if(madd) begin
				i<=5;
				{hi,lo}<={hi,lo}+mid;
			end
			else if(i>0) i<=i-1;
			else begin
				lo<=lo;
				hi<=hi;
				i<=i;
			end
			
		 end	
		end
	

endmodule
