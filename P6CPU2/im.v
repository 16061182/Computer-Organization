`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:49 12/31/2017 
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
	reg [31:0] irmemory[4095:0];
	
	initial $readmemh("code.txt",irmemory,0,4095);
	assign ir = irmemory[pc[13:2]-12'hc00];

endmodule
