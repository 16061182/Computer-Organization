`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:47:02 01/01/2018 
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
module dm(
	input clk,
	input reset,
	input memwrite,
	input [31:0] pc4_m,
	input [31:0] aluout_m,
	input [31:0] rtm_out,
	output [31:0] dmout
    );
	
	reg [31:0] datamemory[4095:0];
	assign dmout = datamemory[aluout_m[13:2]];
	
	integer i;
	wire [31:0] pc;
	assign pc = pc4_m-4;
	
	always @(posedge clk) begin
		if(reset) begin
			for(i=0;i<4096;i=i+1) begin
				datamemory[i] <= 0;
			end
		end
		else begin
			if(memwrite) begin
				datamemory[aluout_m[13:2]] <= rtm_out;
				$display("%d@%h:*%h<=%h",$time,pc,aluout_m,rtm_out);
			end
		end
	end


endmodule
