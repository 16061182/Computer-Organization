`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:45:23 11/23/2017
// Design Name:   buma3
// Module Name:   E:/ISEproject/buma3/buma3test1.v
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

module buma3test1;

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
		I1 = 32'b11111111111111111111111111111111;
		I2 = 32'b00000000000000000000000000000001;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

