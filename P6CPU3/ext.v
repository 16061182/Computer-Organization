`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:24:33 01/03/2018 
// Design Name: 
// Module Name:    ext 
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
module ext(
	input [31:0] dmout_w,
	input [31:0] aluout_w,
	input [2:0] ext_option,
	output [31:0] extout
    );
	
	wire [1:0] byt;
	assign byt = aluout_w[1:0];
	
	assign extout=
	(ext_option==4&&byt==0)?({{16{dmout_w[15]}},dmout_w[15:0]}):
	(ext_option==4&&byt==2)?({{16{dmout_w[31]}},dmout_w[31:16]}):
	(ext_option==3&&byt==0)?({{16{1'b0}},dmout_w[15:0]}):
	(ext_option==3&&byt==2)?({{16{1'b0}},dmout_w[31:16]}):
	(ext_option==2&&byt==0)?({{24{dmout_w[7]}},dmout_w[7:0]}):
	(ext_option==2&&byt==1)?({{24{dmout_w[15]}},dmout_w[15:8]}):
	(ext_option==2&&byt==2)?({{24{dmout_w[23]}},dmout_w[23:16]}):
	(ext_option==2&&byt==3)?({{24{dmout_w[31]}},dmout_w[31:24]}):
	(ext_option==1&&byt==0)?({{24{1'b0}},dmout_w[7:0]}):
	(ext_option==1&&byt==1)?({{24{1'b0}},dmout_w[15:8]}):
	(ext_option==1&&byt==2)?({{24{1'b0}},dmout_w[23:16]}):
	(ext_option==1&&byt==3)?({{24{1'b0}},dmout_w[31:24]}):dmout_w;


endmodule
