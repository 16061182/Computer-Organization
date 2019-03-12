`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:42:07 12/18/2017 
// Design Name: 
// Module Name:    im 
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
module im(
	input [31:0] pc,
	output [31:0] ir
    );
	reg [31:0] irmemory[1023:0];
	
	initial $readmemh("code.txt",irmemory,0,1023);
	assign ir = irmemory[pc[11:2]];


endmodule
