`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:57:15 12/31/2017 
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
/////////////////////////////////////////////////////////////////////////////////
`define op 31:26
`define func 5:0
module controller(
	input [31:0] ir,
	input isbeq,
	input isbne,
	input isblez,
	input isbgtz,
	input isbltz,
	input isbgez,
	output [2:0] pc_sel,
	output jump,
	output [2:0] memtoreg,
	output [3:0] aluop,
	output [3:0] xaluop,
	output memwrite,
	output [1:0] alusrc,
	output alusrca,
	output regwrite,
	output [2:0] ext_option,
	output [2:0] be_option
    );
	 
	wire addu,subu,ori,lw,sw,beq,lui,jal,jr,j;
	wire add,sub,sll,srl,sra,sllv,srlv,srav,andr,orr,xorr,norr;
	wire addi,addiu,andi,xori;
	wire slt,slti,sltiu,sltu;
	wire bne,blez,bgtz,bltz,bgez;
	wire lb,lbu,lh,lhu,sb,sh;
	wire mult,multu,div,divu,mfhi,mflo,mthi,mtlo;
	wire jalr;
	
	assign addu = (ir[`op]==6'b000000&&ir[`func]==6'b100001)?1:0;
	assign subu = (ir[`op]==6'b000000&&ir[`func]==6'b100011)?1:0;
	assign ori = (ir[`op]==6'b001101)?1:0;
	assign lw = (ir[`op]==6'b100011)?1:0;
	assign sw = (ir[`op]==6'b101011)?1:0;
	assign beq = (ir[`op]==6'b000100)?1:0;
	assign lui = (ir[`op]==6'b001111)?1:0;
	assign jal = (ir[`op]==6'b000011)?1:0;
	assign jr = (ir[`op]==6'b000000&&ir[`func]==6'b001000)?1:0;
	assign j = (ir[`op]==6'b000010)?1:0;
	assign add = (ir[`op]==6'b000000&&ir[`func]==6'b100000)?1:0;
	assign sub = (ir[`op]==6'b000000&&ir[`func]==6'b100010)?1:0;
	assign sll = (ir[`op]==6'b000000&&ir[`func]==6'b000000)?1:0;
	assign srl = (ir[`op]==6'b000000&&ir[`func]==6'b000010)?1:0;
	assign sra = (ir[`op]==6'b000000&&ir[`func]==6'b000011)?1:0;
	assign sllv = (ir[`op]==6'b000000&&ir[`func]==6'b000100)?1:0;
	assign srlv = (ir[`op]==6'b000000&&ir[`func]==6'b000110)?1:0;
	assign srav = (ir[`op]==6'b000000&&ir[`func]==6'b000111)?1:0;
	assign andr = (ir[`op]==6'b000000&&ir[`func]==6'b100100)?1:0;
	assign orr = (ir[`op]==6'b000000&&ir[`func]==6'b100101)?1:0;
	assign xorr = (ir[`op]==6'b000000&&ir[`func]==6'b100110)?1:0;
	assign norr = (ir[`op]==6'b000000&&ir[`func]==6'b100111)?1:0;
	assign addi = (ir[`op]==6'b001000)?1:0; 
	assign addiu = (ir[`op]==6'b001001)?1:0;
	assign andi = (ir[`op]==6'b001100)?1:0;
	assign xori = (ir[`op]==6'b001110)?1:0;
	assign slt = (ir[`op]==6'b000000&&ir[`func]==6'b101010)?1:0;
	assign slti = (ir[`op]==6'b001010)?1:0;
	assign sltiu = (ir[`op]==6'b001011)?1:0;
	assign sltu = (ir[`op]==6'b000000&&ir[`func]==6'b101011)?1:0;
	assign bne = (ir[`op]==6'b000101)?1:0;
	assign blez = (ir[`op]==6'b000110&&ir[20:16]==5'b00000)?1:0;
	assign bgtz = (ir[`op]==6'b000111&&ir[20:16]==5'b00000)?1:0;
	assign bltz = (ir[`op]==6'b000001&&ir[20:16]==5'b00000)?1:0;
	assign bgez = (ir[`op]==6'b000001&&ir[20:16]==5'b00001)?1:0;
	assign lb = (ir[`op]==6'b100000)?1:0;
	assign lbu = (ir[`op]==6'b100100)?1:0;
	assign lh = (ir[`op]==6'b100001)?1:0;
	assign lhu = (ir[`op]==6'b100101)?1:0;
	assign sb = (ir[`op]==6'b101000)?1:0;
	assign sh = (ir[`op]==6'b101001)?1:0;
	assign mult = (ir[`op]==6'b000000&&ir[`func]==6'b011000);
	assign multu = (ir[`op]==6'b000000&&ir[`func]==6'b011001);
	assign div = (ir[`op]==6'b000000&&ir[`func]==6'b011010);
	assign divu = (ir[`op]==6'b000000&&ir[`func]==6'b011011);
	assign mfhi = (ir[`op]==6'b000000&&ir[`func]==6'b010000);
	assign mflo = (ir[`op]==6'b000000&&ir[`func]==6'b010010);
	assign mthi = (ir[`op]==6'b000000&&ir[`func]==6'b010001);
	assign mtlo = (ir[`op]==6'b000000&&ir[`func]==6'b010011);
	assign jalr = (ir[`op]==6'b000000&&ir[`func]==6'b001001);
	
	 assign pc_sel=
	 (jr||jalr)?3:
	 (jal||j)?2:
	 ((beq&&isbeq)||(bne&&isbne)||(blez&&isblez)||(bgtz&&isbgtz)||(bltz&&isbltz)||(bgez&&isbgez))?1:0;//0代表npc=pc+4
	 
	 assign jump=(jr||jal||j||(beq&&isbeq)||(bne&&isbne)||(blez&&isblez)||(bgtz&&isbgtz)||(bltz&&isbltz)||(bgez&&isbgez)||jalr)?1:0;
	 
	 assign memtoreg=
	 (jal||jalr)?2:
	 (lw||lb||lbu||lh||lhu)?1:0;//0代表wdata为aluout
	 
	 assign aluop=
	 (sltu||sltiu)?11://无符号小于置1
	 (slt||slti)?10://有符号小于置1
	 (norr)?9:
	 (xorr||xori)?8:
	 (sra||srav)?7://算术右移
	 (srl||srlv)?6://逻辑右移
	 (sll||sllv)?5://逻辑左移
	 (lui)?4:
	 (subu||sub)?3:
	 (addu||lw||sw||add||addi||addiu||lb||lbu||lh||lhu||sb||sh)?2:
	 (ori||orr)?1:0;//0代表&运算
	 
	 assign memwrite=
	 (sw||sb||sh)?1:0;
	 
	 assign alusrc=
	 (lw||sw||addi||addiu||slti||sltiu||lb||lbu||lh||lhu||sb||sh)?2:
	 (ori||lui||andi||xori)?1:0;//0代表numb来自rt
	 
	 assign alusrca=
	 (sll||srl||sra)?1:0;
	 
	 assign regwrite=
	 (addu||subu||ori||lw||lui||jal||add||sub||sll||srl||sra||sllv||srlv||srav||andr||orr||xorr||norr||
	 addi||addiu||andi||xori||slt||slti||sltu||sltiu||lb||lbu||lh||lhu||mfhi||mflo||jalr)?1:0;
	 
	 assign ext_option=
	 (lh)?4:
	 (lhu)?3:
	 (lb)?2:
	 (lbu)?1:0;//0代表不扩展
	 
	 assign be_option=
	 (sh)?2:
	 (sb)?1:0;
	 
	 assign xaluop=
	 (mfhi)?8:
	 (mflo)?7:
	 (mult)?6:
	 (multu)?5:
	 (div)?4:
	 (divu)?3:
	 (mthi)?2:
	 (mtlo)?1:0;//0为不执行任何操作

endmodule
