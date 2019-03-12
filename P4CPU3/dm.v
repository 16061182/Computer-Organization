`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:21:35 12/09/2017 
// Design Name: 
// Module Name:    dm 
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
module dm(
	input [31:0] dm_pc,
	input dm_clk,
	input dm_reset,
	input dm_MemRead,
	input dm_MemWrite,
	input [31:0] dm_Addr,//alu的计算结果
	input [31:0] dm_Wdata,
	output [31:0] dm_Rdata,
	output [31:0] dm_Rdatalh
    );
	 
	 reg [31:0] datamemory [1023:0];
	 //reg [31:0] rdata;
	 reg [31:0] addr;
	 integer i;
	 
	 assign dm_Rdata = datamemory[dm_Addr[11:2]];
	 
	 assign dm_Rdatalh=
	 (dm_Addr[1]==0)?({{16{datamemory[dm_Addr[11:2]][15]}},datamemory[dm_Addr[11:2]][15:0]}):
	 ({{16{datamemory[dm_Addr[11:2]][31]}},datamemory[dm_Addr[11:2]][31:16]});
	 
	 always @(posedge dm_clk) begin
		if(dm_reset) begin
			for(i = 0;i < 1024; i = i+1) begin
				datamemory[i] <= 0;
			end
		end
		else begin
			if(dm_MemWrite) begin
				datamemory[dm_Addr[11:2]] <= dm_Wdata;
				$display("@%h:*%h<=%h",dm_pc,dm_Addr,dm_Wdata);
			end
			/*if(dm_MemRead) begin
				rdata <= datamemory[dm_Addr[11:2]];
			end*/
		end
	end
			
	 
	 


endmodule
