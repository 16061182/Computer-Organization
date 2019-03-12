`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:17:19 12/09/2017 
// Design Name: 
// Module Name:    datapath 
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
module datapath(
	input clk,
	input reset,
	input [1:0] Regdst,
	input Branch0,
	input Branch1,
	input Branch2,                      //添加部分
	input MemRead,
	input [1:0] MemtoReg,
	input [2:0] ALUOp,
	input MemWrite,
	input ALUSrc,
	input Regwrite,
	input [1:0] Sign,
	output [5:0] Option,
	output [5:0] Function
    );
		
	 wire [31:0] pcin;//pc的输入，pccal的输出
	 wire [31:0] pcplus4;//pccal的输出，mux_MemtoReg的输入
	 wire [31:0] pcout;//pc的输出，pccal，im，grf，dm的输入
	 wire [31:0] instr;//im的输出
	 wire [4:0] Wreg;
	 wire zero;//pccal的输入，alu的输出
	 wire [31:0] Wdata;
	 wire [31:0] Rdata1;
	 wire [31:0] Rdata2;
	 wire [31:0] extout1;//ext的输出，mux_Sign的输入
	 wire [31:0] extout2;
	 wire [31:0] extout3;
	 wire [31:0] extnum;//扩展后的立即数，mux_Sign的输出
	 wire [31:0] newRdata2;//alu的第二个操作数，mux_ALUSrc的输出
	 wire [31:0] aluout;//alu的输出
	 wire [31:0] dmout;//dm的输出
	 
	 assign Option = instr[31:26];
	 assign Function = instr[5:0];
	
	 pc PC (
    .pc_clk(clk), 
    .pc_reset(reset), 
    .pc_In(pcin), 
    .pc_Out(pcout) //O
    );
	 
	 im IM (
    .im_pc(pcout), 
    .im_Instr(instr) //O
    );
	 
	 pccal PCCAL (
    .pc(pcout), 
    .offset(extnum),         
	 .rdata1(Rdata1),                       //添加部分
    .zero(zero), 
    .branch0(Branch0), 
    .branch1(Branch1),
	 .branch2(Branch2),                     //添加部分
    .pc_plus_4(pcplus4), //O
    .next_pc(pcin) //O
    );
	 
	 mux_Regdst MUX_REGDST (
    .Instr(instr), 
//  .In3(In3), 
    .Select(Regdst), 
    .Out(Wreg) //O
    );

	 grf GRF (
    .grf_pc(pcout), 
    .grf_instr(instr), 
    .grf_Wreg(Wreg), 
    .grf_Wdata(Wdata), 
    .grf_RegWrite(Regwrite), 
    .grf_clk(clk), 
    .grf_reset(reset), 
    .grf_Rdata1(Rdata1), //O
    .grf_Rdata2(Rdata2) //O
    );
	 
	 ext EXT (
    .ext_pc(pcout), 
    .ext_instr(instr), 
    .ext_Out1(extout1), //O
    .ext_Out2(extout2), //O
    .ext_Out3(extout3) //O
    );
	 
	 mux_Sign MUX_SIGN (
    .In0(extout1), 
    .In1(extout2), 
    .In2(extout3), 
//  .In3(In3), 
    .Select(Sign), 
    .Out(extnum) //O
    );
	 
	 mux_ALUSrc MUX_ALUSRC (
    .In0(Rdata2), 
    .In1(extnum), 
    .Select(ALUSrc), 
    .Out(newRdata2) //O
    );

	 alu ALU (
    .alu_Data1(Rdata1), 
    .alu_Data2(newRdata2), 
    .alu_ALUOp(ALUOp), 
    .alu_Zero(zero), //O
    .alu_Out(aluout) //O
    );
	 
	 dm DM (
    .dm_pc(pcout), 
    .dm_clk(clk), 
    .dm_reset(reset), 
    .dm_MemRead(MemRead), 
    .dm_MemWrite(MemWrite), 
    .dm_Addr(aluout), 
    .dm_Wdata(Rdata2), 
    .dm_Rdata(dmout) //O
    );
	 
	 mux_MemtoReg MUX_MEMTOREG (
    .In0(aluout), 
    .In1(dmout), 
    .In2(pcplus4), 
//  .In3(In3), 
    .Select(MemtoReg), 
    .Out(Wdata) //O
    );
	 

	 
	 
	 
	 

	 
	 
endmodule
