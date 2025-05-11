module falseMAC(
    input logic clk,
    input logic rst,
    input logic en,
    input  logic[31:0]A,
    input  logic[31:0]B,
    input  logic[31:0]C,
    output logic[31:0] mac_out
);
assign mac_out=A*B+C;
endmodule
