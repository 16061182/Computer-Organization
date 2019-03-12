`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:59:05 01/03/2018 
// Design Name: 
// Module Name:    xalu 
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
module xalu(
	input clk,
	input reset,
	input [31:0] numa,
	input [31:0] numb,
	input [3:0] xaluop_d,
	input [3:0] xaluop_e,
	output xstall,
	output [31:0] xaluout
    );
	
	reg [31:0] hi;
	reg [31:0] lo;
	integer i=0;
	
	assign busy=
	(i>0)?1:0;
	assign xstall=
	(xaluop_d!=0&&busy)?1:0;
	
	assign xaluout=
	(xaluop_e==8)?hi:
	(xaluop_e==7)?lo:0;
	
	always @(posedge clk)begin
		if(reset) begin
			hi <= 0;
			lo <= 0;
			i <= 0;
		end
		else begin
			case(xaluop_e)
			6:begin//mult
				i <= 5;
				{hi,lo} <= $signed(numa)*$signed(numb); end
			5:begin//multu
				i <= 5;
				{hi,lo} <= {1'b0,numa}*{1'b0,numb}; end
			4:begin//div
				i <= 10;
				hi <= $signed(numa)%$signed(numb);
				lo <= $signed(numa)/$signed(numb); end
			3:begin//divu
				i <= 10;
				hi <= {1'b0,numa}%{1'b0,numb};
				lo <= {1'b0,numa}/{1'b0,numb}; end
			2:begin//mthi
				i <= 0;
				hi <= numa; end
			1:begin//mtlo
				i <= 0;
				lo <= numa; end
			0:begin
				if(i>0) i <= i-1; end
			endcase
		end
	end

endmodule
