`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:20:40 12/09/2017 
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
	input [31:0] im_pc,
	output [31:0] im_Instr
    );
	 
	 reg [31:0] instrmemory[1023:0];
	 
	 initial $readmemh("code.txt",instrmemory,0,1023);
	 assign im_Instr = instrmemory[im_pc[11:2]];
	 //always @* begin
	//	 $display("%h",im_Instr);
	 //end

	 


endmodule
