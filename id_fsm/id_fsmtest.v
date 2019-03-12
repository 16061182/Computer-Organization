`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:44:57 10/18/2017
// Design Name:   id_fsm
// Module Name:   E:/ISEproject/id_fsm/id_fsmtest.v
// Project Name:  id_fsm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: id_fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module id_fsmtest;

	// Inputs
	reg [7:0] char;
	reg clk;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	id_fsm uut (
		.char(char), 
		.clk(clk), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		char = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		char = "a";
		#10;
		char = "b";
		#10;
		char = "c";
		#10;
		char = "d";
		#10;
		char = "1";
		#10;
		char = "2";
		#10;
		char = "3";
		#10;
		char = "4";
		#10;
		char = "/";
		
        
		// Add stimulus here

	end
   
	always #5 clk=~clk;
endmodule

