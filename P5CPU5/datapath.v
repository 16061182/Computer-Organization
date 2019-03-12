`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:39:03 12/18/2017 
// Design Name: 
// Module Name:    datapath 
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
module datapath(
	input clk,
	input reset,
	input stall,
	input [2:0] rsd_sel,
	input [2:0] rtd_sel,
	input [2:0] rse_sel,
	input [2:0] rte_sel,
	input [2:0] rtm_sel,
	output [31:0] ir_d,
	output [31:0] ir_e,
	output [31:0] ir_m,
	output [31:0] ir_w,
	output bgezal_e,
	output bgezal_m,
	output bgezal_w,
	output movz_e,
	output movz_m,
	output movz_w
    );
	
	wire [31:0] pcin;//Ïà¶Ôpc¶øÑÔ
	wire [31:0] pcout;
	wire [31:0] npc0;
	wire [31:0] npc1;
	wire [31:0] ir;
	wire [31:0] pc4_d;
	wire [31:0] pc8_d;
	wire [31:0] rf_rd1;
	wire [31:0] rf_rd2;
	wire beq;
	wire bgezal;
	wire movz;
	wire [31:0] rsd_out;
	wire [31:0] rtd_out;
	
	wire [31:0] rs_e;
	wire [31:0] rt_e;
	wire [31:0] ext0_e;
	wire [31:0] ext1_e;
	wire [31:0] pc4_e;
	wire [31:0] pc8_e;
	wire [31:0] aludata2;
	wire [31:0] rse_out;
	wire [31:0] rte_out;
	wire [31:0] aluout;
	
	wire [31:0] aluout_m;
	wire [31:0] rt_m;
	wire [31:0] pc4_m;
	wire [31:0] pc8_m;
	wire [31:0] rtm_out;
	wire [31:0] dmout;
	
	wire [31:0] aluout_w;
	wire [31:0] dmout_w;
	wire [31:0] pc4_w;
	wire [31:0] pc8_w;
	wire [4:0] wreg;
	wire [31:0] wdata;
	
	mux_pc MUX_PC (
    .npc0(npc0), 
    .npc1(npc1),
	 .beq(beq),
	 .bgezal(bgezal),
    .ir_d(ir_d), 
    .pcin(pcin)
    );
	
	pc PC (
    .clk(clk), 
    .reset(reset), 
    .stall(stall), 
    .in(pcin), 
    .out(pcout)
    );
	
	ifu IFU (
    .pc(pcout), 
    .pc4(npc0)
    );
	 
	im IM (
    .pc(pcout), 
    .ir(ir)
    );
	
	FtoD FTOD (
    .clk(clk), 
    .reset(reset), 
    .stall(stall), 
    .ir(ir), 
    .pc(pcout), 
    .ir_d(ir_d), 
    .pc4_d(pc4_d), 
    .pc8_d(pc8_d)
    );
	 
	rf RF (
    .clk(clk), 
    .reset(reset), 
    .pc4_w(pc4_w), 
    .ir_d(ir_d), 
	 .ir_w(ir_w),
	 .bgezal_w(bgezal_w),
	 .movz_w(movz_w),
    .wreg(wreg), 
    .wdata(wdata), 
    .rf_rd1(rf_rd1), //O
    .rf_rd2(rf_rd2)  //O
    );
	
	mux_bypass MUX_RSD (
    .in0(rf_rd1), 
    .in1(pc8_e), 
    .in2(aluout_m), 
    .in3(pc8_m), 
    .in4(wdata), 
//    .in5(in5), 
//    .in6(in6), 
//    .in7(in7), 
    .select(rsd_sel), 
    .out(rsd_out)
    );
	 
	mux_bypass MUX_RTD (
    .in0(rf_rd2), 
    .in1(pc8_e), 
    .in2(aluout_m), 
    .in3(pc8_m), 
    .in4(wdata), 
//    .in5(in5), 
//    .in6(in6), 
//    .in7(in7), 
    .select(rtd_sel), 
    .out(rtd_out)
    );
	
	cmp CMP (
    .rf_rd1(rsd_out), 
    .rf_rd2(rtd_out), 
    .beq(beq), //O
	 .bgezal(bgezal),//O
	 .movz(movz)
    );
	 
	npc NPC (
    .ir_d(ir_d), 
    .pc4_d(pc4_d), 
    .rf_rd1(rsd_out), 
    .beq(beq),
	 .bgezal(bgezal),
    .npc(npc1)
    );
	 
	DtoE DTOE (
    .clk(clk), 
    .reset(reset), 
    .stall(stall), 
    .ir(ir_d), 
    .rf_rd1(rsd_out), 
    .rf_rd2(rtd_out), 
    .pc4(pc4_d), 
    .pc8(pc8_d),
	 .bgezal(bgezal),
	 .movz(movz),
    .ir_e(ir_e), 
    .rs_e(rs_e), 
    .rt_e(rt_e), 
    .ext0_e(ext0_e), 
    .ext1_e(ext1_e), 
    .pc4_e(pc4_e), 
    .pc8_e(pc8_e),
	 .bgezal_e(bgezal_e),
	 .movz_e(movz_e)
    );
	 
	mux_bypass MUX_RSE (
    .in0(rs_e), 
    .in1(aluout_m), 
    .in2(pc8_m), 
    .in3(wdata), 
//    .in4(in4), 
//    .in5(in5), 
//    .in6(in6), 
//    .in7(in7), 
    .select(rse_sel), 
    .out(rse_out)
    );
	 
	mux_bypass MUX_RTE (
    .in0(rt_e), 
    .in1(aluout_m), 
    .in2(pc8_m), 
    .in3(wdata), 
//    .in4(in4), 
//    .in5(in5), 
//    .in6(in6), 
//    .in7(in7), 
    .select(rte_sel), 
    .out(rte_out)
    );
	 
	mux_alub MUX_ALUB (
    .in0(rte_out), 
    .ext0_e(ext0_e), 
    .ext1_e(ext1_e), 
//    .in3(in3), 
    .ir_e(ir_e), 
    .out(aludata2)
    );
	 
	alu ALU (
    .numa(rse_out), 
    .numb(aludata2), 
    .ir_e(ir_e),
	 .movz_e(movz_e),
    .aluout(aluout)
    );
	 
	EtoM ETOM (
    .clk(clk), 
    .reset(reset), 
    .ir(ir_e), 
    .aluout(aluout), 
    .rt(rte_out), 
    .pc4(pc4_e), 
    .pc8(pc8_e), 
	 .bgezal(bgezal_e),
	 .movz(movz_e),
    .ir_m(ir_m), 
    .aluout_m(aluout_m), 
    .rt_m(rt_m), 
    .pc4_m(pc4_m), 
    .pc8_m(pc8_m),
	 .bgezal_m(bgezal_m),
	 .movz_m(movz_m)
    );
	
	mux_bypass MUX_RTM (
    .in0(rt_m), 
    .in1(wdata), 
//    .in2(in2), 
//    .in3(in3), 
//    .in4(in4), 
//    .in5(in5), 
//    .in6(in6), 
//    .in7(in7), 
    .select(rtm_sel), 
    .out(rtm_out)
    );
	
	dm DM (
    .clk(clk), 
    .reset(reset), 
    .pc4_m(pc4_m), 
    .ir_m(ir_m), 
    .aluout_m(aluout_m), 
    .rt_m(rtm_out), 
    .dmout(dmout)
    );
	 
	MtoW MTOW (
    .clk(clk), 
    .reset(reset), 
    .ir(ir_m), 
    .aluout(aluout_m), 
    .dmout(dmout), 
    .pc4(pc4_m), 
    .pc8(pc8_m), 
	 .bgezal(bgezal_m),
	 .movz(movz_m),
    .ir_w(ir_w), 
    .aluout_w(aluout_w), 
    .dmout_w(dmout_w), 
    .pc4_w(pc4_w), 
    .pc8_w(pc8_w),
	 .bgezal_w(bgezal_w),
	 .movz_w(movz_w)
    );
	
	mux_rfwa MUX_RFWA (
    .ir_w(ir_w), 
//    .in3(in3), 
	 .bgezal(bgezal_w),
	 .movz(movz_w),
    .out(wreg)
    );
	 
	mux_rfwd MUX_RFWD (
    .ir_w(ir_w), 
    .aluout_w(aluout_w), 
    .dmout_w(dmout_w), 
    .pc8_w(pc8_w), 
//    .in3(in3), 
	 .bgezal(bgezal_w),
    .out(wdata)
    );
	 
	
	
	 
	
	 
	

	 
	
	
	
	
	


endmodule
