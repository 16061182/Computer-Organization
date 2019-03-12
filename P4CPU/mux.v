`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:13:45 12/09/2017 
// Design Name: 
// Module Name:    mux 
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
module mux_Regdst(
	input [31:0] Instr,//In1和In2都来自于Instr
	input [4:0] In3,
	input [1:0] Select,
	output [4:0] Out
    );
	parameter reg_ra = 31;//ra寄存器的编号
	assign Out=
	(Select==0)?(Instr[20:16]):
	(Select==1)?(Instr[15:11]):
	(Select==2)?(reg_ra):In3;
	/*reg [4:0] out;
	assign Out = out;
	always @* begin
		if(Select == 0) out = Instr[20:16];
		else if(Select == 1) out = Instr[15:11];
		else if(Select == 2) out = reg_ra;
		else if(Select == 3) out = In3;
	end*/
endmodule


module mux_MemtoReg(
	input [31:0] In0,
	input [31:0] In1,
	input [31:0] In2,
	input [31:0] In3,
	input [1:0] Select,
	output [31:0] Out
	);
	assign Out=
	(Select==0)?In0:
	(Select==1)?In1:
	(Select==2)?In2:In3;
	/*reg [31:0] out;
	assign Out = out;
	always @* begin
		if(Select == 0) out = In0;
		else if(Select == 1) out = In1;
		else if(Select == 2) out = In2;
		else if(Select == 3) out = In3;
	end*/
endmodule


module mux_ALUSrc(
	input [31:0] In0,
	input [31:0] In1,
	input Select,
	output [31:0] Out
	);
	assign Out=
	(Select==0)?In0:In1;
	/*reg [31:0] out;
	assign Out = out;
	always @* begin
		if(Select == 0) out = In0;
		else out = In1;
	end*/
endmodule


module mux_Sign(
	input [31:0] In0,
	input [31:0] In1,
	input [31:0] In2,
	input [31:0] In3,
	input [1:0] Select,
	output [31:0] Out
	);
	assign Out=
	(Select==0)?In0:
	(Select==1)?In1:
	(Select==2)?In2:In3;
	/*reg [31:0] out;
	assign Out = out;
	always @* begin
		if(Select == 0) out = In0;
		else if(Select == 1) out = In1;
		else if(Select == 2) out = In2;
		else if(Select == 3) out = In3;
	end*/
endmodule


