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
	output [2:0] pc_sel,
	output jump,
	output [2:0] memtoreg,
	output [3:0] aluop,
	output memwrite,
	output [1:0] alusrc,
	output regwrite
    );
	 
	wire addu,subu,ori,lw,sw,beq,lui,jal,jr,j;
	
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
	
	 assign pc_sel=
	 (jr)?3:
	 (jal||j)?2:
	 (beq&&isbeq)?1:0;//0代表npc=pc+4
	 
	 assign jump=(jr||jal||j||(beq&&isbeq))?1:0;
	 
	 assign memtoreg=
	 (jal)?2:
	 (lw)?1:0;//0代表wdata为aluout
	 
	 assign aluop=
	 (lui)?4:
	 (subu)?3:
	 (addu||lw||sw)?2:
	 (ori)?1:0;//0代表&运算
	 
	 assign memwrite=
	 (sw)?1:0;
	 
	 assign alusrc=
	 (lw||sw)?2:
	 (ori||lui)?1:0;//0代表numb来自rt
	 
	 assign regwrite=(addu||subu||ori||lw||lui||jal)?1:0;

endmodule
