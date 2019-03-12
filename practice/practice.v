`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:09:05 11/23/2017 
// Design Name: 
// Module Name:    practice 
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
module practice(
	input in,
	input Clk,
	input Clr,
	output out
    );
	reg o;
	initial begin
		o=0;
	end
	assign out=o;
	integer state=0;
	always @(posedge Clk,posedge Clr) begin
		if(Clr==1) begin
			o<=0;
			state<=0;
		end
		else begin
			case (state)
			0: 
				begin
					if(in==0) state<=0;
					else state<=1;
					o<=0;
				end
			1:
				begin
					if(in==0) state<=0;
					else state<=2;
					o<=0;
				end
			2:
				begin
					if(in==0) state<=3;
					else state<=2;
					o<=0;
				end
			3:
				begin
					if(in==0) state<=0;
					else state<=4;
					o<=0;
				end
			4:
				begin
					if(in==0) state<=0;
					else state<=5;
					o<=0;
				end
			5:
				begin
					if(in==0) state<=6;
					else state<=2;
					o<=0;
				end
			6:
				begin
					if(in==0) begin
						state<=0;
						o<=0;
					end
					else begin
						state<=7;
						o<=1;
					end
				end
			7:
				begin
					if(in==0) state<=0;
					else state<=2;
					o<=0;
				end
			endcase
		end
	end
				
endmodule			
			
					
			
			
			
			
			
			
			
			
			
			

