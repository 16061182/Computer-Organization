`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:31:08 11/14/2017
// Design Name:   string2
// Module Name:   E:/ISEproject/string2/string2test.v
// Project Name:  string2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module string2test;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	string2 uut (
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
		in = "(";
		#10
		in = "2";
		#10
		in = "+";
		#10
		in = "6";
	   #10
		in = ")";
		#10
		in = "*";
		#10
		in = "3";
		

		// Wait 100 ns for global reset to finish       
		// Add stimulus here

	end
   
	always #5 clk = ~clk;
endmodule

