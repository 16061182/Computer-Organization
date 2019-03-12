`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:35:22 12/18/2017 
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
	
	wire [31:0] ir_d;
	wire [31:0] ir_e;
	wire [31:0] ir_m;
	wire [31:0] ir_w;
	wire isbgezal_e;
	wire isbgezal_m;
	wire isbgezal_w;
	wire ismovz_e;
	wire ismovz_m;
	wire ismovz_w;
	wire stall;
	wire [2:0] rsd_sel;
	wire [2:0] rtd_sel;
	wire [2:0] rse_sel;
	wire [2:0] rte_sel;
	wire [2:0] rtm_sel;
	
	datapath DATAPATH (
    .clk(clk), 
    .reset(reset), 
    .stall(stall), 
    .rsd_sel(rsd_sel), 
    .rtd_sel(rtd_sel), 
    .rse_sel(rse_sel), 
    .rte_sel(rte_sel), 
    .rtm_sel(rtm_sel), 
    .ir_d(ir_d), 
    .ir_e(ir_e), 
    .ir_m(ir_m), 
    .ir_w(ir_w),
	 .bgezal_e(isbgezal_e),
	 .bgezal_m(isbgezal_m),
	 .bgezal_w(isbgezal_w),
	 .movz_e(ismovz_e),
	 .movz_m(ismovz_m),
	 .movz_w(ismovz_w)
    );
	 
	hazard HAZARD (
    .ir_d(ir_d), 
    .ir_e(ir_e), 
    .ir_m(ir_m), 
    .ir_w(ir_w), 
    .stall(stall), 
    .rsd_sel(rsd_sel), 
    .rtd_sel(rtd_sel), 
    .rse_sel(rse_sel), 
    .rte_sel(rte_sel), 
    .rtm_sel(rtm_sel),
	 .isbgezal_e(isbgezal_e),
	 .isbgezal_m(isbgezal_m),
	 .isbgezal_w(isbgezal_w),
	 .ismovz_e(ismovz_e),
	 .ismovz_m(ismovz_m),
	 .ismovz_w(ismovz_w)
    );
	 
	


endmodule
