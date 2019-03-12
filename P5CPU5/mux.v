`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:49:54 12/18/2017 
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

module mux_bypass(//转发选择器:mux_rsd,mux_rtd,mux_rse,mux_rte,mux_rtm的通用模块
	input [31:0] in0,//
	input [31:0] in1,//
	input [31:0] in2,//
	input [31:0] in3,//
	input [31:0] in4,//
	input [31:0] in5,
	input [31:0] in6,
	input [31:0] in7,
	input [2:0] select,
	output [31:0] out
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

module mux_alub(
	input [31:0] in0,//转发选择器的结果
	input [31:0] ext0_e,
	input [31:0] ext1_e,
	input [31:0] in3,
	input [31:0] ir_e,
	output [31:0] out
	);
	
	wire [1:0] alusrc;
	assign alusrc[1]=//lw,sw//符号扩展
	(ir_e[31:26]==6'b100011)?1:
	(ir_e[31:26]==6'b101011)?1:0;
	assign alusrc[0]=//ori,lui//无符号扩展
	(ir_e[31:26]==6'b001101)?1:
	(ir_e[31:26]==6'b001111)?1:0;
	
	assign out=
	(alusrc==2'b10)?ext1_e:
	(alusrc==2'b01)?ext0_e:
	(alusrc==2'b00)?in0:in3;
endmodule

module mux_rfwa(
	input [31:0] ir_w,
	input bgezal,
//	input [4:0] in0,//IR_W[rt]
//	input [4:0] in1,//IR_W[rd] //in2固定为31
	input movz,
	input [4:0] in3,
	output [4:0] out
	);
	
	wire [1:0] regdst;
	assign regdst[1]=//jal,bgezal
	(ir_w[31:26]==6'b000011)?1:
	(ir_w[31:26]==6'b000001&&ir_w[20:16]==5'b10001&&bgezal)?1:0;
	assign regdst[0]=//addu,subu,srav,ismovz
	(ir_w[31:26]==6'b000000&&ir_w[5:0]==6'b100001)?1:
	(ir_w[31:26]==6'b000000&&ir_w[5:0]==6'b100011)?1:
	(ir_w[31:26]==6'b000000&&ir_w[5:0]==6'b000111)?1:
	(ir_w[31:26]==6'b000000&&ir_w[5:0]==6'b001010&&movz)?1:0;
	parameter reg_ra = 31;
	
	assign out=
	(regdst==2'b10)?reg_ra:
	(regdst==2'b01)?ir_w[15:11]:
	(regdst==2'b00)?ir_w[20:16]:in3;
endmodule

module mux_rfwd(
	input [31:0] ir_w,
	input [31:0] aluout_w,
	input [31:0] dmout_w,
	input [31:0] pc8_w,
	input [31:0] in3,
	input bgezal,
	output [31:0] out
	);
	
	wire [1:0] memtoreg;
	assign memtoreg[1]=//jal,bgezal
	(ir_w[31:26]==6'b000011)?1:
	(ir_w[31:26]==6'b000001&&ir_w[20:16]==5'b10001&&bgezal)?1:0;
	assign memtoreg[0]=//lw
	(ir_w[31:26]==6'b100011)?1:0;
	
	assign out=
	(memtoreg==2'b10)?pc8_w:
	(memtoreg==2'b01)?dmout_w:
	(memtoreg==2'b00)?aluout_w:in3;
endmodule

module mux_pc(
	input [31:0] npc0,
	input [31:0] npc1,
	input beq,
	input bgezal,
	input [31:0] ir_d,
	output [31:0] pcin
	);
	
	wire jump;
	assign jump=//beq,jal,jr,j,bgezal
	(ir_d[31:26]==6'b000100&&beq)?1:
	(ir_d[31:26]==6'b000011)?1:
	(ir_d[31:26]==6'b000000&&ir_d[5:0]==6'b001000)?1:
	(ir_d[31:26]==6'b000010)?1:
	(ir_d[31:26]==6'b000001&&ir_d[20:16]==5'b10001&&bgezal)?1:0;
	
	assign pcin=
	(jump==1)?npc1:npc0;
endmodule
	











