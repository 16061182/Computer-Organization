`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:34:18 12/31/2017 
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
	input [4:0] a3_w,
	input stall,
	input [2:0] rsd_sel,
	input [2:0] rtd_sel,
	input [2:0] rse_sel,
	input [2:0] rte_sel,
	input [2:0] rtm_sel,
	output [31:0] ir_d
    );
	
	wire [31:0] pcin;
	wire [31:0] pcout;
	wire [31:0] npc0;
	wire [31:0] npc1;
	wire [31:0] ir;
	wire [31:0] pc4_d;
	wire [31:0] pc8_d;
	
	wire isbeq;
	wire [2:0] pc_sel_d;
	wire jump_d;
	wire [31:0] rf_rd1;
	wire [31:0] rf_rd2;
	wire [31:0] rsd_out;
	wire [31:0] rtd_out;
	
	wire [3:0] aluop_e;
	wire [1:0] alusrc_e;
	wire [31:0] ir_e;
	wire [31:0] rs_e;
	wire [31:0] rt_e;
	wire [31:0] ext0_e;
	wire [31:0] ext1_e;
	wire [31:0] pc4_e;
	wire [31:0] pc8_e;
	wire [31:0] rse_out;
	wire [31:0] rte_out;
	wire [31:0] aluout;
	wire [31:0] alub;
	
	wire memwrite_m;
	wire [31:0] ir_m;
	wire [31:0] aluout_m;
	wire [31:0] rt_m;
	wire [31:0] pc4_m;
	wire [31:0] pc8_m;
	wire [31:0] rtm_out;
	wire [31:0] dmout;
	
	wire [2:0] memtoreg_w;
	wire regwrite_w;
	wire [31:0] ir_w;
	wire [31:0] aluout_w;
	wire [31:0] dmout_w;
	wire [31:0] pc4_w;
	wire [31:0] pc8_w;
	wire [31:0] wdata;
	
	
	
	
	 mux_pc MUX_PC (
    .in0(npc0), 
    .in1(npc1), 
    .jump(jump_d), 
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
    .pc4(npc0), 
    .ir_d(ir_d), 
    .pc4_d(pc4_d), 
    .pc8_d(pc8_d)
    );
	 
	 controller CONTROLLER_D (
    .ir(ir_d), //IN
    .isbeq(isbeq), //IN
    .pc_sel(pc_sel_d), 
    .jump(jump_d)
    );
	 
	 mux_bypass MUX_RSD (
    .in0(rf_rd1), 
    .in1(wdata), 
    .in2(pc8_m), 
    .in3(aluout_m), 
    .in4(pc8_e), 
    //.in5(in5), 
    //.in6(in6), 
    //.in7(in7), 
    .select(rsd_sel), 
    .out(rsd_out)
    );
	 
	 mux_bypass MUX_RTD (
    .in0(rf_rd2), 
    .in1(wdata), 
    .in2(pc8_m), 
    .in3(aluout_m), 
    .in4(pc8_e), 
    //.in5(in5), 
    //.in6(in6), 
    //.in7(in7), 
    .select(rtd_sel), 
    .out(rtd_out)
    );
	 
	 npc NPC (
    .pc_sel(pc_sel_d), 
    .ir_d(ir_d), 
    .pc4_d(pc4_d), 
    .rsd_out(rsd_out), 
    .npc(npc1)
    );
	 
	 rf RF (
    .clk(clk), 
    .reset(reset), 
    .pc4_w(pc4_w), 
    .ir_d(ir_d), 
    .regwrite(regwrite_w), 
    .wreg(a3_w), 
    .wdata(wdata), 
    .rf_rd1(rf_rd1), 
    .rf_rd2(rf_rd2)
    );
	 
	 cmp CMP (
    .rsd_out(rsd_out), 
    .rtd_out(rtd_out), 
    .isbeq(isbeq)
    );
	 
	 DtoE DTOE (
    .clk(clk), 
    .reset(reset), 
    .stall(stall), 
    .ir(ir_d), 
    .rsd_out(rsd_out), 
    .rtd_out(rtd_out), 
    .pc4(pc4_d), 
    .pc8(pc8_d), 
    .ir_e(ir_e), 
    .rs_e(rs_e), 
    .rt_e(rt_e), 
    .ext0_e(ext0_e), 
    .ext1_e(ext1_e), 
    .pc4_e(pc4_e), 
    .pc8_e(pc8_e)
    );
	 
	 controller CONTROLLER_E (
    .ir(ir_e),  
    .aluop(aluop_e),  
    .alusrc(alusrc_e)
    );
	 
	 mux_bypass MUX_RSE (
    .in0(rs_e), 
    .in1(wdata), 
    .in2(pc8_m), 
    .in3(aluout_m), 
    //.in4(pc8_e), 
    //.in5(in5), 
    //.in6(in6), 
    //.in7(in7), 
    .select(rse_sel), 
    .out(rse_out)
    );
	 
	 mux_bypass MUX_RTE (
    .in0(rt_e), 
    .in1(wdata), 
    .in2(pc8_m), 
    .in3(aluout_m), 
    //.in4(pc8_e), 
    //.in5(in5), 
    //.in6(in6), 
    //.in7(in7), 
    .select(rte_sel), 
    .out(rte_out)
    );
	 
	 alu ALU (
    .numa(rse_out), 
    .numb(alub), 
    .aluop(aluop_e), 
    .aluout(aluout)
    );
	 
	 mux_alub MUX_ALUB (
    .in0(rte_out), 
    .in1(ext0_e), 
    .in2(ext1_e), 
    .alusrc(alusrc_e), 
    .numb(alub)
    );
	 
	 EtoM ETOM (
    .clk(clk), 
    .reset(reset), 
    .ir(ir_e), 
    .aluout(aluout), 
    .rte_out(rte_out), 
    .pc4(pc4_e), 
    .pc8(pc8_e), 
    .ir_m(ir_m), 
    .aluout_m(aluout_m), 
    .rt_m(rt_m), 
    .pc4_m(pc4_m), 
    .pc8_m(pc8_m)
    );
	 
	 controller CONTROLLER_M (
    .ir(ir_m), 
    .memwrite(memwrite_m)
    );
	 
	 mux_bypass MUX_RTM (
    .in0(rt_m), 
    .in1(wdata), 
    //.in2(pc8_m), 
    //.in3(aluout_m), 
    //.in4(pc8_e), 
    //.in5(in5), 
    //.in6(in6), 
    //.in7(in7), 
    .select(rtm_sel), 
    .out(rtm_out)
    );
	 
	 dm DM (
    .clk(clk), 
    .reset(reset), 
    .memwrite(memwrite_m), 
    .pc4_m(pc4_m), 
    .aluout_m(aluout_m), 
    .rtm_out(rtm_out), 
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
    .ir_w(ir_w), 
    .aluout_w(aluout_w), 
    .dmout_w(dmout_w), 
    .pc4_w(pc4_w), 
    .pc8_w(pc8_w)
    );
	 
	 controller CONTROLLER_W (
    .ir(ir_w), 
    .memtoreg(memtoreg_w),
	 .regwrite(regwrite_w)
    );
	 
	 mux_rfwd MUX_RFWD (
    .in0(aluout_w), 
    .in1(dmout_w), 
    .in2(pc8_w), 
    .memtoreg(memtoreg_w), 
    .wdata(wdata)
    );
	 

endmodule