`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:22:45 11/23/2017
// Design Name:   practice
// Module Name:   E:/ISEproject/practice/test.v
// Project Name:  practice
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: practice
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;

	// Outputs
	wire O;

	// Instantiate the Unit Under Test (UUT)
	practice uut (
		.A(A), 
		.B(B), 
		.O(O)
	);

	initial begin
		// Initialize Inputs
		A = 4'b0000;
		B = 4'b0000;
		#10
		A = 4'b0010;
		B = 4'b0011;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

