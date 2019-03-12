`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:55:04 01/01/2018 
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
module mux_pc(
	input [31:0] in0,
	input [31:0] in1,
	input jump,
	output [31:0] pcin
    );
	assign pcin=(jump==1)?in1:in0;
endmodule

module mux_alub(
	input [31:0] in0,
	input [31:0] in1,//ÎÞ·ûºÅÀ©Õ¹
	input [31:0] in2,//·ûºÅÀ©Õ¹
	input [1:0] alusrc,
	output [31:0] numb
	);
	assign numb=
	(alusrc==2)?in2:
	(alusrc==1)?in1:in0;
endmodule

module mux_alua(
	input [31:0] in0,
	input [31:0] in1,//sll,srl
	input alusrca,
	output [31:0] numa
	);
	assign numa=(alusrca==1)?in1:in0;
endmodule

module mux_rfwd(
	input [31:0] in0,
	input [31:0] in1,//dmout
	input [31:0] in2,//pc+8
	input [2:0] memtoreg,
	output [31:0] wdata
	);
	assign wdata=
	(memtoreg==2)?in2:
	(memtoreg==1)?in1:in0;
endmodule

module mux_bypass(
	input [31:0] in0,
	input [31:0] in1,
	input [31:0] in2,
	input [31:0] in3,
	input [31:0] in4,
	input [31:0] in5,
	input [31:0] in6,
	input [31:0] in7,
	input [2:0] select,
	input [31:0] out
	);
	assign out=
	(select==0)?in0:
	(select==1)?in1:
	(select==2)?in2:
	(select==3)?in3:
	(select==4)?in4:
	(select==5)?in5:
	(select==6)?in6:in7;
endmodule

module mux_aluout(
	input [31:0] aluout,
	input [31:0] xaluout,
	input [3:0] xaluop,
	output [31:0] out
	);
	assign out=
	(xaluop==8||xaluop==7)?xaluout:aluout;
endmodule 