`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:27:05 11/07/2017
// Design Name:   string
// Module Name:   E:/ISEproject/string/stringtest.v
// Project Name:  string
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module stringtest;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	string uut (
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
		#10;
		in = "+";
		#10;
		in = "2";
		#10;
		in = "*";
		#10;
		in = "2";
		#30;
		
		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
      
	always #5 clk = ~clk;
endmodule

