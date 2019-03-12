`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:57:46 11/14/2017 
// Design Name: 
// Module Name:    string2 
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
module string2(
	input clk,
	input clr,
	input [7:0] in,
	output reg out = 0
    );
	 
	integer state = 0;
	
	always @(posedge clk,posedge clr) begin
		if (clr == 1) begin
			out <= 0;
			state <= 0;
		end
		
		else begin
		case (state)
		0: 
		begin
			if (in >= 48 && in <= 57) begin
				state <= 1;
				out <= 1;
			end
			else if(in == "(") begin
				state <= 3;
				out <= 0;
			end
			else begin
				state <= 6;
				out <= 0;
			end
		end
		
		1: 
		begin
			if (in == "+" || in == "*") begin
				state <= 2;
				out <= 0;
			end
			else begin
				state <= 6;
				out <= 0;
			end
		end
		
		2: 
		begin
			if (in >= 48 && in <= 57) begin
				state <= 1;
				out <= 1;
			end
			else if(in == "(") begin
				state <= 3;
				out <= 0;
			end
			else begin
				state <= 6;
			   out <= 0;
			end
		end
		
		3: 
		begin
			if(in >= 48 && in <= 57) begin
				state <= 4;
				out <= 0;
			end
			else begin
				state <= 6;
				out <=0;
			end
		end
		
		4: 
		begin
			if(in == "+" || in == "*") begin
				state <= 5;
				out <= 0;
			end
			else if(in == ")") begin
				state <= 1;
				out <= 1;
			end
			else begin
				state <= 6;
				out <= 0;
			end
		end
		
		5: 
		begin
			if(in >=48 && in <= 57) begin
				state <= 4;
				out <= 0;
			end
			else begin
				state <= 6;
				out <= 0;
			end
		end
		
		6: 
		begin
			state <= 6;
			out <= 0;
		end
		endcase
		end
	end
		
				
		

endmodule
