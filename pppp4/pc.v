`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:27:50 12/09/2017 
// Design Name: 
// Module Name:    pc 
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
module pc(
	input pc_clk,
	input pc_reset,
	input [31:0] pc_In,
	output [31:0] pc_Out
    );
	 
	 reg [31:0] out;
	 assign pc_Out=out;
	 
	 always @(posedge pc_clk) begin
		if(pc_reset) out <= 32'h00003000;
		else out <= pc_In;
	end


endmodule
