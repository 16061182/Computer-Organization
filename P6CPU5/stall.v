`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:13:29 12/31/2017 
// Design Name: 
// Module Name:    stall 
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
`define alu 2'b01
`define dm 2'b10
`define pc 2'b11
`define nw 2'b00
module stall(
	input [4:0] a1_d,
	input [4:0] a2_d,
	input [4:0] a3_e,
	input [4:0] a3_m,
	input [4:0] a3_w,
	input tuse_rs0,
	input tuse_rs1,
	input tuse_rt0,
	input tuse_rt1,
	input tuse_rt2,
	input [1:0] res_e,
	input [1:0] res_m,
	input [1:0] res_w,
	output stall
    );
	
	wire stall_rs0_ealu;
	wire stall_rs0_edm;
	wire stall_rs1_edm;
	wire stall_rs0_mdm;
	
	wire stall_rt0_ealu;
	wire stall_rt0_edm;
	wire stall_rt1_edm;
	wire stall_rt0_mdm;
	
	wire stall_rs;
	wire stall_rt;
	
	assign stall_rs0_ealu = tuse_rs0 && res_e==`alu && a1_d==a3_e;
	assign stall_rs0_edm = tuse_rs0 && res_e==`dm && a1_d==a3_e;
	assign stall_rs1_edm = tuse_rs1 && res_e==`dm && a1_d==a3_e;
	assign stall_rs0_mdm = tuse_rs0 && res_m==`dm && a1_d==a3_m;
	assign stall_rs = stall_rs0_ealu || stall_rs0_edm || stall_rs1_edm || stall_rs0_mdm;
	
	assign stall_rt0_ealu = tuse_rt0 && res_e==`alu && a2_d==a3_e;
	assign stall_rt0_edm = tuse_rt0 && res_e==`dm && a2_d==a3_e;
	assign stall_rt1_edm = tuse_rt1 && res_e==`dm && a2_d==a3_e;
	assign stall_rt0_mdm = tuse_rt0 && res_m==`dm && a2_d==a3_m;
	assign stall_rt = stall_rt0_ealu || stall_rt0_edm || stall_rt1_edm || stall_rt0_mdm;
	
	assign stall = stall_rs || stall_rt;

endmodule
