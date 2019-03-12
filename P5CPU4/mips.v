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
    .ir_w(ir_w)
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
    .rtm_sel(rtm_sel)
    );
	 
	


endmodule
