`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:10:27 10/18/2017
// Design Name:   fsm
// Module Name:   E:/ISEproject/fsm/fsmtest2.v
// Project Name:  fsm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fsmtest2;

	// Inputs
	reg clk;
	reg in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	fsm uut (
		.clk(clk), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		in = 0;

		// Wait 100 ns for global reset to finish
		#10
		#5
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
		in=0;
		
        
		// Add stimulus here

	end
	
	always #5 clk=~clk;
      
endmodule

