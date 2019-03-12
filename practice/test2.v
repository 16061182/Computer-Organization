`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:01:08 11/24/2017
// Design Name:   practice
// Module Name:   E:/ISEproject/practice/test2.v
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

module test2;

	// Inputs
	reg in;
	reg Clk;
	reg Clr;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	practice uut (
		.in(in), 
		.Clk(Clk), 
		.Clr(Clr), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Clr = 0;
		in=0;
		#10
		in=1;
		#10
		in=0;
		#10
		in=1;
		#10
		in=1;
		#10
		in=0;
		#10
		in=1;
		#10
		in=1;
		#10
		in=0;
		#10
		in=1;
		#10
		in=1;
		#10
		in=0;
		#10
		in=1;
		#10
		in=1;
		#10
		in=0;
		#10
		in=1;
		
		
		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
   always #5 Clk=~Clk;
endmodule

