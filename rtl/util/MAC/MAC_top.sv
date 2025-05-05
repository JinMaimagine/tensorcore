`include "package.sv"
import pkg::*;
module MAC_top(
input logic `sig(clk,0),
input logic `sig(rst_n,0),
input mode_caculation `sig(mode,0),//计算模式
input mode_precision `sig(modepreision,0),//混合精度
input logic [31:0] `sig(input_A,0),
input logic [31:0] `sig(input_B,0),
input logic [31:0] `sig(input_C,0),
output logic [31:0] `sig(OUT,6),
output logic `sig(overflow,6)
);

endmodule
