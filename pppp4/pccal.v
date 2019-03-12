`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:28:54 12/11/2017 
// Design Name: 
// Module Name:    pccal 
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
module pccal(
	input [31:0] pc,
	input [31:0] offset,//没有左移之后的偏移量，使用时需要乘以4（左移两位）
	input [31:0] rdata1,              //添加部分
	input zero,
	input branch0,
	input branch1,
	input branch2,                    //添加部分
	output [31:0] pc_plus_4,
	output [31:0] next_pc
    );
	 
	assign pc_plus_4 = pc + 4;
	assign next_pc=
	(branch2)?rdata1:                 //添加部分
	(branch1)?(offset*4):
	(branch0&&zero)?(pc+4+offset*4):(pc+4);
	
	
	/*reg [31:0] pcplus4;
	reg [31:0] nextpc;
	
	assign pc_plus_4 = pcplus4;
	assign next_pc = nextpc;
	
	always @* begin
		pcplus4 = pc + 4;
		if(branch1) nextpc = offset*4;
		else begin
			if(branch0&&zero) nextpc = pcplus4 + offset*4;
			else nextpc = pcplus4;
		end
	end*/


endmodule
