`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:44:59 11/23/2017
// Design Name:   buma3
// Module Name:   E:/ISEproject/buma3/buma3test.v
// Project Name:  buma3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: buma3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module buma3test;

	// Inputs
	reg [31:0] I1;
	reg [31:0] I2;

	// Outputs
	wire overflow;
	wire [31:0] O;

	// Instantiate the Unit Under Test (UUT)
	buma3 uut (
		.I1(I1), 
		.I2(I2), 
		.overflow(overflow), 
		.O(O)
	);

	initial begin
		// Initialize Inputs
		I1 = 0;
		I2 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

