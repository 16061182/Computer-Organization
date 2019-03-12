`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:18:48 11/23/2017 
// Design Name: 
// Module Name:    buma1 
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
module buma1(
	input [7:0] A,
	output [7:0] B
    );
	reg [7:0] temp=0;
	assign B=temp;
	integer i;
	always @* begin
		for(i=0;i<8;i=i+1) begin
			temp[i]=A[7-i];
		end
	end


endmodule
