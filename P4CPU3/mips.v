`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:16:57 12/09/2017 
// Design Name: 
// Module Name:    mips 
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
module mips(
	input clk,
	input reset
    );
	 
	wire [1:0] Regdst;
	wire Branch0;
	wire Branch1;
	wire Branch2;
	wire Branch3;
	wire MemRead;
	wire [1:0] MemtoReg;
	wire [2:0] ALUOp;
	wire MemWrite;
	wire ALUSrc;
	wire Regwrite;
	wire [1:0] Sign;
	wire [5:0] Option;
	wire [5:0] Function;
	 
	 datapath DATAPATH (
    .clk(clk), 
    .reset(reset), 
    .Regdst(Regdst), 
    .Branch0(Branch0), 
    .Branch1(Branch1),
	 .Branch2(Branch2),
	 .Branch3(Branch3),
    .MemRead(MemRead), 
    .MemtoReg(MemtoReg), 
    .ALUOp(ALUOp), 
    .MemWrite(MemWrite), 
    .ALUSrc(ALUSrc), 
    .Regwrite(Regwrite), 
    .Sign(Sign), 
    .Option(Option), 
    .Function(Function)
    );
	 
	 controller CONTROLLER (
    .Option(Option), 
    .Function(Function), 
    .Regdst(Regdst), 
    .Branch0(Branch0), 
    .Branch1(Branch1),
	 .Branch2(Branch2),
	 .Branch3(Branch3),
    .MemRead(MemRead), 
    .MemtoReg(MemtoReg), 
    .ALUOp(ALUOp), 
    .MemWrite(MemWrite), 
    .ALUSrc(ALUSrc), 
    .Regwrite(Regwrite), 
    .Sign(Sign)
    );
	
	

endmodule
