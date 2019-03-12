`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:54:09 12/13/2017
// Design Name:   controller
// Module Name:   E:/ISEproject/P4CPU/controllertest2.v
// Project Name:  P4CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module controllertest2;

	// Inputs
	reg [5:0] Option;
	reg [5:0] Function;

	// Outputs
	wire [1:0] Regdst;
	wire Branch0;
	wire Branch1;
	wire MemRead;
	wire [1:0] MemtoReg;
	wire [2:0] ALUOp;
	wire MemWrite;
	wire ALUSrc;
	wire Regwrite;
	wire [1:0] Sign;

	// Instantiate the Unit Under Test (UUT)
	controller uut (
		.Option(Option), 
		.Function(Function), 
		.Regdst(Regdst), 
		.Branch0(Branch0), 
		.Branch1(Branch1), 
		.MemRead(MemRead), 
		.MemtoReg(MemtoReg), 
		.ALUOp(ALUOp), 
		.MemWrite(MemWrite), 
		.ALUSrc(ALUSrc), 
		.Regwrite(Regwrite), 
		.Sign(Sign)
	);

	initial begin
		// Initialize Inputs
		Option = 6'b000000;
		Function = 6'b100001;
		#10
		Option = 6'b000000;
		Function = 6'b100011;
		#10
		Option = 6'b001101;
		#10
		Option = 6'b100011;
		#10
		Option = 6'b101011;
		#10
		Option = 6'b000100;
		#10
		Option = 6'b001111;
		#10
		Option = 6'b000011;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
      
endmodule

