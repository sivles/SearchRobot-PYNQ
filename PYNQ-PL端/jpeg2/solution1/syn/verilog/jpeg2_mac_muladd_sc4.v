// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps

module jpeg2_mac_muladd_sc4_DSP48_8(
    input clk,
    input rst,
    input ce,
    input  [29 - 1:0] in0,
    input  [19 - 1:0] in1,
    input  [30 - 1:0] in2,
    output [31 - 1:0]  dout);

wire signed [25 - 1:0]     a;
wire signed [18 - 1:0]     b;
wire signed [48 - 1:0]     c;
wire signed [43 - 1:0]     m;
wire signed [48 - 1:0]     p;
reg  signed [43 - 1:0]     m_reg;
reg  signed [25 - 1:0]     a_reg;
reg  signed [18 - 1:0]     b_reg;

assign a  = $signed(in1);
assign b  = $signed(in0);
assign c  = $signed(in2);

assign m  = a_reg * b_reg;
assign p  = m_reg + c;

always @(posedge clk) begin
    if (ce) begin
        m_reg  <= m;
        a_reg  <= a;
        b_reg  <= b;
    end
end

assign dout = p;

endmodule
`timescale 1 ns / 1 ps
module jpeg2_mac_muladd_sc4(
    clk,
    reset,
    ce,
    din0,
    din1,
    din2,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter din2_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input clk;
input reset;
input ce;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
input[din2_WIDTH - 1:0] din2;
output[dout_WIDTH - 1:0] dout;



jpeg2_mac_muladd_sc4_DSP48_8 jpeg2_mac_muladd_sc4_DSP48_8_U(
    .clk( clk ),
    .rst( reset ),
    .ce( ce ),
    .in0( din0 ),
    .in1( din1 ),
    .in2( din2 ),
    .dout( dout ));

endmodule

