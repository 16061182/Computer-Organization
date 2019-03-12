`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:25:28 11/23/2017
// Design Name:   buma2
// Module Name:   E:/ISEproject/buma2/buma2test.v
// Project Name:  buma2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: buma2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module buma2test;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;

	// Outputs
	wire [3:0] O1;
	wire [3:0] O2;

	// Instantiate the Unit Under Test (UUT)
	buma2 uut (
		.A(A), 
		.B(B), 
		.O1(O1), 
		.O2(O2)
	);

	initial begin
		// Initialize Inputs
		A = 4'd5;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

