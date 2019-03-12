`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:40:57 12/18/2017 
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
	input [31:0] ir_d,
	input [31:0] ir_e,
	input [31:0] ir_m,
	input [31:0] ir_w,
	input isbgezal_e,
	input isbgezal_m,
	input isbgezal_w,
	input ismovz_e,
	input ismovz_m,
	input ismovz_w,
	output stall,
	output [2:0] rsd_sel,
	output [2:0] rtd_sel,
	output [2:0] rse_sel,
	output [2:0] rte_sel,
	output [2:0] rtm_sel
    );
	
	stall STALL (
    .ir_d(ir_d), 
    .ir_e(ir_e), 
    .ir_m(ir_m),
	 .isbgezal_m(isbgezal_m),
	 .ismovz_e(ismovz_e),
	 .ismovz_m(ismovz_m),
    .stall(stall)
    );
	 
	bypass BYPASS (
    .ir_d(ir_d), 
    .ir_e(ir_e), 
    .ir_m(ir_m), 
    .ir_w(ir_w), 
	 .isbgezal_e(isbgezal_e),
	 .isbgezal_m(isbgezal_m),
	 .isbgezal_w(isbgezal_w),
	 .ismovz_e(ismovz_e),
	 .ismovz_m(ismovz_m),
	 .ismovz_w(ismovz_w),
    .rsd_sel(rsd_sel), 
    .rtd_sel(rtd_sel), 
    .rse_sel(rse_sel), 
    .rte_sel(rte_sel), 
    .rtm_sel(rtm_sel)
    );


endmodule
