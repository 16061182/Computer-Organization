`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:15:24 11/23/2017 
// Design Name: 
// Module Name:    buma 
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
module buma(
	input [3:0] A,
	input [3:0] B,
	output reg [3:0] P,
	output reg O
    );
	
	reg [3:0] a;
	reg [3:0] b;
	reg c;
	reg d;
	integer i=0,j=0,k=0;
	integer flag=0;
	integer isout=0;
	initial begin
		P=-9;//这里P的值被赋成了7，即0111，首位的符号位1被砍去
	end
	always @(*) begin
		c=A[3];
		d=B[3];
		if(c==0&&d==0) begin
			for(i=3;i!=-1;i=i-1) begin
				if(A[i]==0&&B[i]==1&&isout==0) begin
					flag=1;
					isout=1;
				end
				else if(A[i]==1&&B[i]==0&&isout==0) begin
					flag=0;
					isout=1;
				end
			end
			if(flag==1) O=1;
			else O=0;
		end
		
		else if(c==1&&d==0) O=1;
		else if(c==0&&d==1) O=0;
		
		else if(A[3]==1&&B[3]==1) begin
			for(j=3;j!=-1;j=j-1) begin
				a[j]=~A[j];
				b[j]=~B[j];
			end
			a=a+1;
			b=b+1;
			for(k=3;k!=-1;k=k-1) begin
				if(a[k]==1&&b[k]==0&&isout==0) begin
					flag=1;
					isout=1;
				end
				else if(a[k]==0&&b[k]==1&&isout==0) begin
					flag=0;
					isout=1;
				end
			end
			if(flag==1) O=1;
			else O=0;
		end
	end
		
endmodule
