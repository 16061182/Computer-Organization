`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:56:52 01/01/2018 
// Design Name: 
// Module Name:    cmp 
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
module cmp(
	input [31:0] rsd_out,
	input [31:0] rtd_out,
	output isbeq,
	output isbne,
	output isblez,
	output isbgtz,
	output isbltz,
	output isbgez
    );
	
	assign isbeq=
	(rsd_out==rtd_out)?1:0;
	
	assign isbne=
	(rsd_out!=rtd_out)?1:0;
	
	assign isblez=
	($signed(rsd_out) <= 0)?1:0;
	
	assign isbgtz=
	($signed(rsd_out) > 0)?1:0;

	assign isbltz=
	($signed(rsd_out) < 0)?1:0;
	
	assign isbgez=
	($signed(rsd_out) >= 0)?1:0;
	
endmodule
