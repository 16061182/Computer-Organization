`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:34:31 12/31/2017 
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
	
	wire [4:0] a3_w;
	wire stall;
	wire [31:0] ir_d;
	wire [2:0] rsd_sel;
	wire [2:0] rtd_sel;
	wire [2:0] rse_sel;
	wire [2:0] rte_sel;
	wire [2:0] rtm_sel;
	
	
	 datapath DATAPATH (
    .clk(clk), 
    .reset(reset), 
    .a3_w(a3_w), 
    .stall(stall), 
    .rsd_sel(rsd_sel), 
    .rtd_sel(rtd_sel), 
    .rse_sel(rse_sel), 
    .rte_sel(rte_sel), 
    .rtm_sel(rtm_sel), 
    .ir_d(ir_d)
    );
	 
	 hazard HAZARD (
    .clk(clk), 
    .reset(reset), 
    .ir(ir_d), 
    .a3_w(a3_w), 
    .stall(stall), 
    .rsd_sel(rsd_sel), 
    .rtd_sel(rtd_sel), 
    .rse_sel(rse_sel), 
    .rte_sel(rte_sel), 
    .rtm_sel(rtm_sel)
    );


endmodule
