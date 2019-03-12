`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:24:14 11/23/2017
// Design Name:   buma1
// Module Name:   E:/ISEproject/buma1/buma1test.v
// Project Name:  buma1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: buma1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module buma1test;

	// Inputs
	reg [7:0] A;

	// Outputs
	wire [7:0] B;

	// Instantiate the Unit Under Test (UUT)
	buma1 uut (
		.A(A), 
		.B(B)
	);

	initial begin
		// Initialize Inputs
		A = 8'b10110111;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

