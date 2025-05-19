module MAC_top#(
    parameter PARM_RM = 3
) (
    input logic clk,
    input logic rst,
    input logic [PARM_RM-1:0] Rounding_mode_i,
    input logic [31:0] IN1,
    input logic [31:0] IN2,
    input logic [127:0] IN3,
    input logic [2:0] mode,
    output logic [127:0] OUT,

    // 目前只有浮点运算可能出现overflow
    output NV_o,
    // output DZ_o, //would not occur in Multiplication or Addition
    output OF_o,
    output UF_o,
    output NX_o
);
endmodule