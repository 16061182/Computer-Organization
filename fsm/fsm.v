`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:57:24 10/18/2017 
// Design Name: 
// Module Name:    fsm 
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
module fsm(
    input clk,
    input in,
    output reg out = 0
    );
	 
	 integer state = 0;
	 /*state�������ܹ���ȷ��ʾ��ǰ�ۼƶ����1010��ǰ׺�ĳ��ȡ�
	 ����δ����ʱstate=0; ���뵽10ʱ����������state<=2��*/
	 
	 always @(posedge clk) begin
		case (state)
		0:
			begin
				state <= in == 1 ? 1 : 0;
				out <= 0;
			end
		1:
			begin
				state <= in == 1 ? 1 : 2;
				out <= 0;
			end		
		2:
			begin
				state <= in == 1 ? 3 : 0;
				out <= 0;
			end	
		3:
			begin
				state <= in == 1 ? 0 : 4;
				out <= (in == 0);
			end	
		4:
			begin
				state <= in == 1 ? 3 : 0;
				out <= 0;
			end	
		endcase
	 end
endmodule
