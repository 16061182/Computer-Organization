`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:01:59 12/12/2017
// Design Name:   pc
// Module Name:   E:/ISEproject/P4CPU/pctest1.v
// Project Name:  P4CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pc
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module pctest1;

	// Inputs
	reg pc_clk;
	reg pc_reset;
	reg [31:0] pc_In;

	// Outputs
	wire [31:0] pc_Out;

	// Instantiate the Unit Under Test (UUT)
	pc uut (
		.pc_clk(pc_clk), 
		.pc_reset(pc_reset), 
		.pc_In(pc_In), 
		.pc_Out(pc_Out)
	);

	initial begin
		// Initialize Inputs
		pc_clk = 0;
		pc_reset = 1;
		pc_In = 0;
		#5
		pc_reset = 0;
		pc_In = 300;
		#10
		pc_reset = 1;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
	
	always #5 pc_clk = ~pc_clk;
      
endmodule

