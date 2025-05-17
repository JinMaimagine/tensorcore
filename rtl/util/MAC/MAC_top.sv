module MAC_top(
    input logic clk,
    input logic rst,
    input logic[31:0] IN1,
    input logic[31:0] IN2,
    input logic[127:0] IN3,
    input logic mode,//0:4bit,1:8bit
    output logic[127:0] OUT//INT8:C:INT8,INT4:C:INT4
);
endmodule