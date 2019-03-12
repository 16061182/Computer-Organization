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
	input [3:0] be,
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
				case (be)
				4'b1111: begin datamemory[aluout_m[13:2]] <= rtm_out; 
							$display("%d@%h: *%h <= %h",$time,pc,aluout_m,rtm_out); end
				4'b0011: begin datamemory[aluout_m[13:2]][15:0] <= rtm_out[15:0]; 
							$display("%d@%h: *%h <= %h",$time,pc,{aluout_m[31:2],2'b00},{datamemory[aluout_m[13:2]][31:16],rtm_out[15:0]}); end
				4'b1100: begin datamemory[aluout_m[13:2]][31:16] <= rtm_out[15:0];
							$display("%d@%h: *%h <= %h",$time,pc,{aluout_m[31:2],2'b00},{rtm_out[15:0],datamemory[aluout_m[13:2]][15:0]}); end
				4'b0001: begin datamemory[aluout_m[13:2]][7:0] <= rtm_out[7:0];
							$display("%d@%h: *%h <= %h",$time,pc,{aluout_m[31:2],2'b00},{datamemory[aluout_m[13:2]][31:8],rtm_out[7:0]}); end
				4'b0010: begin datamemory[aluout_m[13:2]][15:8] <= rtm_out[7:0];
							$display("%d@%h: *%h <= %h",$time,pc,{aluout_m[31:2],2'b00},{datamemory[aluout_m[13:2]][31:16],rtm_out[7:0],datamemory[aluout_m[13:2]][7:0]}); end
				4'b0100: begin datamemory[aluout_m[13:2]][23:16] <= rtm_out[7:0];
							$display("%d@%h: *%h <= %h",$time,pc,{aluout_m[31:2],2'b00},{datamemory[aluout_m[13:2]][31:24],rtm_out[7:0],datamemory[aluout_m[13:2]][15:0]}); end
				4'b1000: begin datamemory[aluout_m[13:2]][31:24] <= rtm_out[7:0];
							$display("%d@%h: *%h <= %h",$time,pc,{aluout_m[31:2],2'b00},{rtm_out[7:0],datamemory[aluout_m[13:2]][23:0]}); end
				endcase
				//$display("%d@%h:*%h<=%h",$time,pc,aluout_m,rtm_out);
			end
		end
	end


endmodule
