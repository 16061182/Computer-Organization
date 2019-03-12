`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:28:54 11/23/2017
// Design Name:   buma
// Module Name:   E:/ISEproject/buma/bumatest.v
// Project Name:  buma
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: buma
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module bumatest;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;

	// Outputs
	wire O;

	// Instantiate the Unit Under Test (UUT)
	buma uut (
		.A(A), 
		.B(B), 
		.O(O)
	);

	initial begin
		// Initialize Inputs
		A = 4'b0001;
		B = 4'b0101;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

