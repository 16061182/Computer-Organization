`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:13:19 12/31/2017 
// Design Name: 
// Module Name:    bypass 
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
module bypass(
	input [4:0] a1_d,
	input [4:0] a2_d,
	input [4:0] a3_d,
	input [4:0] a1_e,
	input [4:0] a2_e,
	input [4:0] a3_e,
	input [4:0] a1_m,
	input [4:0] a2_m,
	input [4:0] a3_m,
	input [4:0] a1_w,
	input [4:0] a2_w,
	input [4:0] a3_w,
	input [1:0] res_e,
	input [1:0] res_m,
	input [1:0] res_w,
	output [2:0] rsd_sel,
	output [2:0] rtd_sel,
	output [2:0] rse_sel,
	output [2:0] rte_sel,
	output [2:0] rtm_sel
    );
	
	assign rsd_sel=
	(a1_d==a3_e&&res_e==`pc&&a3_e!=5'b00000)?4:
	(a1_d==a3_m&&res_m==`alu&&a3_m!=5'b00000)?3:
	(a1_d==a3_m&&res_m==`pc&&a3_m!=5'b00000)?2:
	(a1_d==a3_w&&(res_w==`alu||res_w==`dm||res_w==`pc)&&a3_w!=5'b00000)?1:0;
	
	assign rse_sel=
	(a1_e==a3_m&&res_m==`alu&&a3_m!=5'b00000)?3:
	(a1_e==a3_m&&res_m==`pc&&a3_m!=5'b00000)?2:
	(a1_e==a3_w&&(res_w==`alu||res_w==`dm||res_w==`pc)&&a3_w!=5'b00000)?1:0;
	
	assign rtd_sel=
	(a2_d==a3_e&&res_e==`pc&&a3_e!=5'b00000)?4:
	(a2_d==a3_m&&res_m==`alu&&a3_m!=5'b00000)?3:
	(a2_d==a3_m&&res_m==`pc&&a3_m!=5'b00000)?2:
	(a2_d==a3_w&&(res_w==`alu||res_w==`dm||res_w==`pc)&&a3_w!=5'b00000)?1:0;
	
	assign rte_sel=
	(a2_e==a3_m&&res_m==`alu&&a3_m!=5'b00000)?3:
	(a2_e==a3_m&&res_m==`pc&&a3_m!=5'b00000)?2:
	(a2_e==a3_w&&(res_w==`alu||res_w==`dm||res_w==`pc)&&a3_w!=5'b00000)?1:0;
	
	assign rtm_sel=
	(a2_e==a3_w&&(res_w==`alu||res_w==`dm||res_w==`pc)&&a3_w!=5'b00000)?1:0;
	
	//f_alub_e=
	//(a2_e==a3_m&&res_m==`alu)?`mtoe_alu:
	//(a2_e==a3_w&&res_w==`alu)?`wtoe_alu:
	//(a2_e==a3_w&&res_w==`dm)?`wtoe_dm:0

endmodule
