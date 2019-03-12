`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:19:05 12/09/2017 
// Design Name: 
// Module Name:    controller 
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
module controller(
	input [5:0] Option,
	input [5:0] Function,
	output [1:0] Regdst,
	output Branch0,
	output Branch1,
	output Branch2,
	output Branch3,
	output MemRead,
	output [1:0] MemtoReg,
	output [2:0] ALUOp,
	output MemWrite,
	output ALUSrc,
	output Regwrite,
	output [1:0] Sign
    );
	 
	 assign Regdst[1]=//jal
	 (Option==6'b000011)?1:0;
	 
	 assign Regdst[0]=//addu,subu,srav
	 (Option==6'b000000&&Function==6'b100001)?1:
	 (Option==6'b000000&&Function==6'b100011)?1:
	 (Option==6'b000000&&Function==6'b000111)?1:0;
	 
	 assign Branch0=//beq
	 (Option==6'b000100)?1:0;
	 
	 assign Branch1=//jal
	 (Option==6'b000011)?1:0;
	 
	 assign Branch2=//jr                                         //Ìí¼Ó²¿·Ö
	 (Option==6'b000000&&Function==6'b001000)?1:0;
	 
	 assign Branch3=//bgez
	 (Option==6'b000001)?1:0;
	 
	 
	 assign MemRead=//lw,lh
	 (Option==6'b100011)?1:
	 (Option==6'b100001)?1:0;
	 
	 assign MemtoReg[1]=//jal,lh
	 (Option==6'b000011)?1:
	 (Option==6'b100001)?1:0;
	 
	 assign MemtoReg[0]=//lw,lh
	 (Option==6'b100011)?1:
	 (Option==6'b100001)?1:0;
	 
	 assign ALUOp[2]=//lui,srav
	 (Option==6'b001111)?1:
	 (Option==6'b000000&&Function==6'b000111)?1:0;
	 
	 assign ALUOp[1]=//addu,subu,lw,sw,beq,lh
	 (Option==6'b000000&&Function==6'b100001)?1:
	 (Option==6'b000000&&Function==6'b100011)?1:
	 (Option==6'b100011)?1:
	 (Option==6'b101011)?1:
	 (Option==6'b000100)?1:
	 (Option==6'b100001)?1:0;
	 
	 assign ALUOp[0]=//subu,ori,beq,srav
	 (Option==6'b000000&&Function==6'b100011)?1:
	 (Option==6'b001101)?1:
	 (Option==6'b000100)?1:
	 (Option==6'b000000&&Function==6'b000111)?1:0;
	 
	 assign MemWrite=//sw
	 (Option==6'b101011)?1:0;
	 
	 assign ALUSrc=//ori,lw,sw,lui,lh
	 (Option==6'b001101)?1:
	 (Option==6'b100011)?1:
	 (Option==6'b101011)?1:
	 (Option==6'b001111)?1:
	 (Option==6'b100001)?1:0;
	 
	 assign Regwrite=//addu,subu,ori,lw,lui,jal,srav,lh
	 (Option==6'b000000&&Function==6'b100001)?1:
	 (Option==6'b000000&&Function==6'b100011)?1:
	 (Option==6'b001101)?1:
	 (Option==6'b100011)?1:
	 (Option==6'b001111)?1:
	 (Option==6'b000011)?1:
	 (Option==6'b000000&&Function==6'b000111)?1:
	 (Option==6'b100001)?1:0;
	 
	 assign Sign[1]=//jal
	 (Option==6'b000011)?1:0;
	 
	 assign Sign[0]=//lw,sw,beq,bgez,lh
	 (Option==6'b100011)?1:
	 (Option==6'b101011)?1:
	 (Option==6'b000100)?1:
	 (Option==6'b000001)?1:
	 (Option==6'b100001)?1:0;
	 
	 
	 /*reg regdst1,regdst0;
	 reg branch0;
	 reg branch1;
	 reg memread;
	 reg memtoreg1,memtoreg0;
	 reg aluop2,aluop1,aluop0;
	 reg memwrite;
	 reg alusrc;
	 reg regwrite;
	 reg sign1,sign0;
	 
	 
	 reg addu;
	 reg subu;
	 reg ori;
	 reg lw;
	 reg sw;
	 reg beq;
	 reg lui;
	 reg jal;
	 
	 assign Regdst[1] = regdst1;
	 assign Regdst[0] = regdst0;
	 assign Branch0 = branch0;
	 assign Branch1 = branch1;
	 assign MemRead = memread;
	 assign MemtoReg[1] = memtoreg1;
	 assign MemtoReg[0] = memtoreg0;
	 assign ALUOp[2] = aluop2;
	 assign ALUOp[1] = aluop1;
	 assign ALUOp[0] = aluop0;
	 assign MemWrite = memwrite;
	 assign ALUSrc = alusrc;
	 assign Regwrite = regwrite;
	 assign Sign[1] = sign1;
	 assign Sign[0] = sign0;
	 
	 always @* begin
		
		addu = 0;
		subu = 0;
		ori = 0;
		lw = 0;
		sw = 0;
		beq = 0;
		lui = 0;
		jal = 0;
		
		if(Option == 6'b000000) begin
			if(Function == 6'b100001) addu = 1;
			else if(Function == 6'b100011) subu = 1;
		end
		else if(Option == 6'b001101) ori = 1;
		else if(Option == 6'b100011) lw = 1;
		else if(Option == 6'b101011) sw = 1;
		else if(Option == 6'b000100) beq = 1;
		else if(Option == 6'b001111) lui = 1;
		else if(Option == 6'b000011) jal = 1;
		
		if(jal) regdst1 = 1;		else regdst1 = 0;
		if(addu||subu) regdst0 = 1;		else regdst0 = 0;
		if(beq) branch0 = 1; 	else branch0 = 0;
		if(jal) branch1 = 1; 	else branch1 = 0;
		if(lw) memread = 1;		else memread = 0;
		if(jal) memtoreg1 = 1; 	else memtoreg1 = 0;
		if(lw) memtoreg0 = 1; 	else memtoreg0 = 0;
		if(lui) aluop2 = 1; 		else aluop2 = 0;
		if(addu||subu||lw||sw||beq) aluop1 = 1; 	else aluop1 = 0;
		if(subu||ori||beq) aluop0 = 1; 				else aluop0 = 0;
		if(sw) memwrite = 1; 						else memwrite = 0;
		if(ori||lw||sw||lui) alusrc = 1; 			else alusrc = 0;
		if(addu||subu||ori||lw||lui||jal) regwrite = 1; 	else regwrite = 0;
		if(jal) sign1 = 1; 							else sign1 = 0;
		if(lw||sw||beq) sign0 = 1; 					else sign0 = 0;
	end*/
		
		


endmodule
