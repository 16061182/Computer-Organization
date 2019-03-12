`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:48:53 12/18/2017 
// Design Name: 
// Module Name:    dm 
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
module dm(
	input clk,
	input reset,
	input [31:0] pc4_m,
	input [31:0] ir_m,
	input [31:0] aluout_m,
	input [31:0] rt_m,
	output [31:0] dmout
    );
	
	reg [31:0] datamemory[1023:0];
	assign dmout = datamemory[aluout_m[11:2]];
	
	integer i;
	wire [31:0] pc;
	assign pc = pc4_m-4;
	
	wire memwrite;
	assign memwrite=//sw
	(ir_m[`op]==6'b101011)?1:0;
	
	always @(posedge clk) begin
		if(reset) begin
			for(i=0;i<1024;i=i+1) begin
				datamemory[i] <= 0;
			end
		end
		else begin
			if(memwrite) begin
				datamemory[aluout_m[11:2]] <= rt_m;
				$display("%d@%h:*%h<=%h",$time,pc,aluout_m,rt_m);
			end
		end
	end
endmodule
