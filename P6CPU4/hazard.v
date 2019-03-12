`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:11:13 12/31/2017 
// Design Name: 
// Module Name:    hazard 
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
module hazard(
	input clk,
	input reset,
	input [31:0] ir,
	output [4:0] a3_w,
	output stall,
	output [2:0] rsd_sel,
	output [2:0] rtd_sel,
	output [2:0] rse_sel,
	output [2:0] rte_sel,
	output [2:0] rtm_sel
    );
	
	wire tuse_rs0;
	wire tuse_rs1;
	wire tuse_rt0;
	wire tuse_rt1;
	wire tuse_rt2;
	wire [4:0] a1_d;
	wire [4:0] a2_d;
	wire [4:0] a3_d;
	wire [4:0] a1_e;
	wire [4:0] a2_e;
	wire [4:0] a3_e;
	wire [4:0] a1_m;
	wire [4:0] a2_m;
	wire [4:0] a3_m;
	wire [4:0] a1_w;
	wire [4:0] a2_w;
	//wire [4:0] a3_w;
	wire [1:0] res_e;
	wire [1:0] res_m;
	wire [1:0] res_w;
	
	coder CODER (
    .clk(clk), 
    .reset(reset), 
	 .stall(stall),
    .ir(ir), 
    .tuse_rs0(tuse_rs0), 
    .tuse_rs1(tuse_rs1), 
    .tuse_rt0(tuse_rt0), 
    .tuse_rt1(tuse_rt1), 
    .tuse_rt2(tuse_rt2), 
    .a1_d(a1_d), 
    .a2_d(a2_d), 
    .a3_d(a3_d), 
    .a1_e(a1_e), 
    .a2_e(a2_e), 
    .a3_e(a3_e), 
    .a1_m(a1_m), 
    .a2_m(a2_m), 
    .a3_m(a3_m), 
    .a1_w(a1_w), 
    .a2_w(a2_w), 
    .a3_w(a3_w), 
    .res_e(res_e),   
    .res_m(res_m),  
    .res_w(res_w)
    );
	 
	 stall STALL (
	 .a1_d(a1_d),
	 .a2_d(a2_d),
    .a3_e(a3_e), 
    .a3_m(a3_m), 
    .a3_w(a3_w), 
    .tuse_rs0(tuse_rs0), 
    .tuse_rs1(tuse_rs1), 
    .tuse_rt0(tuse_rt0), 
    .tuse_rt1(tuse_rt1), 
    .tuse_rt2(tuse_rt2), 
    .res_e(res_e), 
    .res_m(res_m), 
    .res_w(res_w), 
    .stall(stall)
    );
	 
	 bypass BYPASS (
    .a1_d(a1_d), 
    .a2_d(a2_d), 
    .a3_d(a3_d), 
    .a1_e(a1_e), 
    .a2_e(a2_e), 
    .a3_e(a3_e), 
    .a1_m(a1_m), 
    .a2_m(a2_m), 
    .a3_m(a3_m), 
    .a1_w(a1_w), 
    .a2_w(a2_w), 
    .a3_w(a3_w), 
    .res_e(res_e), 
    .res_m(res_m), 
    .res_w(res_w), 
    .rsd_sel(rsd_sel), 
    .rtd_sel(rtd_sel), 
    .rse_sel(rse_sel), 
    .rte_sel(rte_sel), 
    .rtm_sel(rtm_sel)
    );
	 
	 
endmodule
