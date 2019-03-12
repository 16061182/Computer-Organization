`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:17:46 12/31/2017 
// Design Name: 
// Module Name:    coder 
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
`define op 31:26
`define func 5:0
`define alu 2'b01
`define dm 2'b10
`define pc 2'b11
`define nw 2'b00
module coder(
	input clk,
	input reset,
	input [31:0] ir,
	input stall,
 	output tuse_rs0,
	output tuse_rs1,
	output tuse_rt0,
	output tuse_rt1,
	output tuse_rt2,
	output [4:0] a1_d,
	output [4:0] a2_d,
	output [4:0] a3_d,
	output [4:0] a1_e,
	output [4:0] a2_e,
	output [4:0] a3_e,
	output [4:0] a1_m,
	output [4:0] a2_m,
	output [4:0] a3_m,
	output [4:0] a1_w,
	output [4:0] a2_w,
	output [4:0] a3_w,
	output [1:0] res_e,
	output [1:0] res_m,
	output [1:0] res_w
    );
	
	wire addu,subu,ori,lw,sw,beq,lui,jal,jr;
	//根据新值产生的位置给指令分类
	wire alu_class,dm_class,pc_class;

	assign addu = (ir[`op]==6'b000000&&ir[`func]==6'b100001)?1:0;
	assign subu = (ir[`op]==6'b000000&&ir[`func]==6'b100011)?1:0;
	assign ori = (ir[`op]==6'b001101)?1:0;
	assign lw = (ir[`op]==6'b100011)?1:0;
	assign sw = (ir[`op]==6'b101011)?1:0;
	assign beq = (ir[`op]==6'b000100)?1:0;
	assign lui = (ir[`op]==6'b001111)?1:0;
	assign jal = (ir[`op]==6'b000011)?1:0;
	assign jr = (ir[`op]==6'b000000&&ir[`func]==6'b001000)?1:0;
	assign alu_class = (addu||subu||ori||lui)?1:0;
	assign dm_class = (lw)?1:0;
	assign pc_class = (jal)?1:0;
	
	assign tuse_rs0 = (beq||jr)?1:0;
	assign tuse_rs1 = (addu||subu||ori||lui||lw||sw)?1:0;
	assign tuse_rt0 = (beq)?1:0;
	assign tuse_rt1 = (addu||subu)?1:0;
	assign tuse_rt2 = (sw)?1:0;
	
	wire [1:0] res_d;
	assign res_d=
	alu_class?`alu:
	dm_class?`dm:
	pc_class?`pc:`nw;
	
	assign a1_d=ir[25:21];
	assign a2_d=ir[20:16];
	assign a3_d=
	(addu||subu)?ir[15:11]:
	(jal)?5'b11111:
	(ori||lui||lw)?ir[20:16]:0;
	
	reg [1:0] RES_E;
	reg [4:0] A1_E;
	reg [4:0] A2_E;
	reg [4:0] A3_E;
	
	reg [1:0] RES_M;
	reg [4:0] A1_M;
	reg [4:0] A2_M;
	reg [4:0] A3_M;
	
	reg [1:0] RES_W;
	reg [4:0] A1_W;
	reg [4:0] A2_W;
	reg [4:0] A3_W;
	
	assign res_e = RES_E;
	assign res_m = RES_M;
	assign res_w = RES_W;
	
	assign a1_e = A1_E;
	assign a2_e = A2_E;
	assign a3_e = A3_E;
	
	assign a1_m = A1_M;
	assign a2_m = A2_M;
	assign a3_m = A3_M;
	
	assign a1_w = A1_W;
	assign a2_w = A2_W;
	assign a3_w = A3_W;
	
	always @(posedge clk) begin
		if(reset) begin
			RES_E <= 0;
			A1_E <= 0;
			A2_E <= 0;
			A3_E <= 0;
			
			RES_M <= 0;
			A1_M <= 0;
			A2_M <= 0;
			A3_M <= 0;
			
			RES_W <= 0;
			A1_W <= 0;
			A2_W <= 0;
			A3_W <= 0;
		end
		else begin
			if(stall) begin
				RES_E <= 0;
				A1_E <= 0;
				A2_E <= 0;
				A3_E <= 0;
			end
			else begin
				RES_E <= res_d;
				A1_E <= a1_d;
				A2_E <= a2_d;
				A3_E <= a3_d;
			end
			
			RES_M <= RES_E;
			A1_M <= A1_E;
			A2_M <= A2_E;
			A3_M <= A3_E;
			
			RES_W <= RES_M;
			A1_W <= A1_M;
			A2_W <= A2_M;
			A3_W <= A3_M;
		end
	end
	
endmodule
