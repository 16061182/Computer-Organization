`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:27:23 12/09/2017 
// Design Name: 
// Module Name:    ext 
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
module ext(
	input [31:0] ext_pc,
	input [31:0] ext_instr,
	output [31:0] ext_Out1,
	output [31:0] ext_Out2,
	output [31:0] ext_Out3
    );
	 
	 assign ext_Out1 = {16'b0000000000000000,ext_instr[15:0]};
	 assign ext_Out2 = {{16{ext_instr[15]}},ext_instr[15:0]};
	 assign ext_Out3 = {2'b00,ext_pc[31:28],ext_instr[25:0]};
	 /*reg [31:0] out1;
	 reg [31:0] out2;
	 reg [31:0] out3;
	 
	 assign ext_Out1=out1;
	 assign ext_Out2=out2;
	 assign ext_Out3=out3;
	 
	 always @* begin
		out1 = {16'b0000000000000000,ext_instr[15:0]};
		out2 = {{16{ext_instr[15]}},ext_instr[15:0]};
		out3 = {2'b00,ext_pc[31:28],ext_instr[25:0]};
	end*/


endmodule
