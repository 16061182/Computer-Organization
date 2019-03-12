`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:44:29 12/09/2017 
// Design Name: 
// Module Name:    file 
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
module file(
	input in1,
	input in2,
	output out0,
	output reg [31:0] out
    );
	 
	 assign out0 = in1 && in2;
	 reg [31:0] memory[5:0];
	 initial begin
		$readmemh("code.txt",memory,0,5);
		out = memory[0];
	end


endmodule
