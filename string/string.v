`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:35:50 11/07/2017 
// Design Name: 
// Module Name:    string 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module string(
	input clk,
	input clr,
	input [7:0] in,
	output reg out
    );
	
	initial begin
		out = 0;
	end
	parameter state0 = 5'b00001,
				 state1 = 5'b00010,
				 state2 = 5'b00100,
				 state3 = 5'b01000,
				 state4 = 5'b10000;

	integer state = state0;
	
	always @(posedge clk,posedge clr) begin
		if(clr) begin
			state <= state0;
			out <= 0;
		end
		else begin
			case (state)
			state0:
						begin
							if (in >= 48 && in <= 57) state <= state1;
							else if (in == 42 || in == 43) state <= state4;
							else state <= state4;
							if (in >= 48 && in <= 57) out <= 1;
							else out <= 0;
						end
			state1:
						begin
							if (in >= 48 && in <= 57) state <= state4;
							else if (in == 42 || in == 43) state <= state2;
							else state <= state4;
							out <= 0;
						end
			state2:
						begin
							if (in >= 48 && in <= 57) state <= state3;
							else if (in == 42 || in == 43) state <= state4;
							else state <= state4;
							if (in >= 48 && in <= 57) out <= 1;
							else out <= 0;
						end
			state3:
						begin
							if (in >= 48 && in <= 57) state <= state4;
							else if (in == 42 || in == 43) state <= state2;
							else state <= state4;
							out <= 0;
					   end
			state4:
						begin
							state <= state4;
							out <= 0;
						end
			endcase
		end
	end
						
						

endmodule
