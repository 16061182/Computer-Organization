`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:54:36 11/14/2017
// Design Name:   calculate
// Module Name:   E:/ISEproject/calculate/calculatetest.v
// Project Name:  calculate
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: calculate
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module calculatetest;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	calculate uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		in = "1";
		#10
		in = "+";
		#10
		in = "2";
		#10
		in = "*";
		#10
		in = "3";
		#10
		in = "+";
		#10
		in = "2";
		#10
		in = "*";
		#10
		in = "4";

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
   always #5 clk = ~clk;
endmodule

