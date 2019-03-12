`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:01:03 01/01/2018 
// Design Name: 
// Module Name:    npc 
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
module npc(
	input [2:0] pc_sel,
	input [31:0] ir_d,
	input [31:0] pc4_d,
	input [31:0] rsd_out,//jr
	output [31:0] npc
    );
	wire [31:0] pc;
	assign pc = pc4_d-4;
	assign npc=
	(pc_sel==3)?rsd_out://jr
	(pc_sel==2)?({pc[31:28],ir_d[25:0],2'b00})://jal,j
	(pc_sel==1)?(pc4_d+{{14{ir_d[15]}},ir_d[15:0],2'b00})://beq,bne
	pc4_d;

endmodule
