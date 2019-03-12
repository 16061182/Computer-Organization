`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:25:54 12/09/2017 
// Design Name: 
// Module Name:    alu 
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
module alu(
	input [31:0] alu_Data1,
	input [31:0] alu_Data2,
	input [2:0] alu_ALUOp,
	output alu_Zero,
	output alu_Isbgez,
	output [31:0] alu_Out
    );
	
	assign alu_Zero=
	(alu_Data1==alu_Data2)?1:0;
	
	assign alu_Isbgez=
	(alu_Data1[31]==0)?1:0;
	
	assign alu_Out=
	(alu_ALUOp==0)?(alu_Data1 & alu_Data2):
	(alu_ALUOp==1)?(alu_Data1 | alu_Data2):
	(alu_ALUOp==2)?(alu_Data1 + alu_Data2):
	(alu_ALUOp==3)?(alu_Data1 - alu_Data2):
	(alu_ALUOp==4)?({alu_Data2[15:0],16'b0000000000000000}):
	(alu_ALUOp==5)?($signed(alu_Data2)>>>alu_Data1):0;
	
	/*always @* begin
		//$display("%d",alu_Out);
		$display("Data1:%d",alu_Data1);
		$display("Data2:%d",alu_Data2);
	end*/
	/*reg zero;
	reg [31:0] out;
	assign alu_Zero = zero;
	assign alu_Out = out;
	
	always @* begin
		case (alu_ALUOp)
		0 : out = alu_Data1 & alu_Data2;
		1 : out = alu_Data1 | alu_Data2;
		2 : out = alu_Data1 + alu_Data2;
		3 : out = alu_Data1 - alu_Data2;
		4 : out = {alu_Data2[15:0],16'b0000000000000000};
		endcase
		if(alu_Data1 == alu_Data2) zero = 1;
		else zero = 0;
	end*/
	
	
endmodule
