`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:09:11 11/08/2017
// Design Name:   homework
// Module Name:   E:/ISEproject/jizuhomework3_3_2/homeworktest.v
// Project Name:  jizuhomework3_3_2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: homework
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module homeworktest;

	// Inputs
	reg clk;

	// Outputs
	wire Q1;
	wire Q2;
	wire Q3;
	wire C;

	// Instantiate the Unit Under Test (UUT)
	homework uut (
		.clk(clk), 
		.Q1(Q1), 
		.Q2(Q2), 
		.Q3(Q3), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
	
	always #5 clk = ~clk;
      
endmodule

