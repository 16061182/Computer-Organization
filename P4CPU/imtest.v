`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:09:06 12/12/2017
// Design Name:   im
// Module Name:   E:/ISEproject/P4CPU/imtest.v
// Project Name:  P4CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: im
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module imtest;

	// Inputs
	reg [31:0] im_pc;

	// Outputs
	wire [31:0] im_Instr;

	// Instantiate the Unit Under Test (UUT)
	im uut (
		.im_pc(im_pc), 
		.im_Instr(im_Instr)
	);

	initial begin
		// Initialize Inputs
		im_pc = 32'h00003004;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

