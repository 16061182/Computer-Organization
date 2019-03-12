`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:45:55 11/14/2017 
// Design Name: 
// Module Name:    calculate 
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
module calculate(
	input clk,
	input clr,
	input [7:0] in,
	output reg [31:0] out = 0
    );
	integer state = 0;
	reg [31:0] a = 0;
	reg [31:0] b = 0;
	reg [31:0] c = 0;
	reg [31:0] d = "+";
	always @(posedge clk,posedge clr) begin
		if (clr) begin
			state <= 0;
			out <= 0;
			a <= 0;
			b <= 0;
			c <= 0;
			d <= "+";
		end
		else begin
			case (state)
			0:
				begin
					if (in >= 48 && in <= 57) begin
						a <= a + (in - 48);
						state <= 1;
						out <= (a + (in - 48) + b);
					end
					else begin
						state <= 3;
						out <= 0;
					end
					c <= (in - 48);
				end
			1:
				begin
					if (in == "+") begin
						state <= 0;
						if (d == "+") begin
							a <= a;
							b <= b;
						end
						else if (d == "*") begin
							a <= a + b;
							b <= 0;
						end
					end
					else if (in == "*") begin
						state <= 2;
						if (d == "+") begin
							a <= a - c;
							b <= c;
						end
						else if (d == "*") begin
							a <= a;
							b <= b;
						end
					end
					else state <= 3;
					out <= 0;
					d <= in;
				end
			2: 
				begin
					if (in >= 48 && in <= 57) begin
						b <= b * (in - 48);
						state <= 1;
						out <= (a + b * (in - 48));
					end
					else begin
						state <= 3;
						out <= 0;
					end
					c <= (in - 48);
				end
			3:
				begin
					state <= 3;
					out <= 0;
				end
			endcase
		end
	end
					

endmodule
