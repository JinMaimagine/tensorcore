`include "PE.sv"
`include "para_pkg.sv"
module SYSTOLIC (
input logic clk,
input logic rst,
input logic[7:0] enleft,
input logic[7:0] enup,
input logic[7:0][31:0] aleft,
input logic[7:0][31:0] bup,
input logic[7:0] cmleft,
input logic[7:0] cmup,
input logic[7:0][7:0] we,
input logic[7:0][7:0][31:0] c,
input logic wben,
input params::addrgen_t addr_type,
input logic mixed,
output logic [7:0][7:0] out_ready,
output logic [7:0][7:0][31:0] out_sum,
output logic [7:0][7:0][127:0] regfile
);
logic [7:0][7:0] en_left;
logic [7:0][7:0] en_up;
logic [7:0][7:0] en_down;
logic [7:0][7:0] en_right;
logic [7:0][7:0] cm_left;
logic [7:0][7:0] cm_up;
logic [7:0][7:0] cm_right;
logic [7:0][7:0] cm_down;
logic [7:0][7:0][31:0] a_left;
logic [7:0][7:0][31:0] a_right;
logic [7:0][7:0][31:0] b_up;
logic [7:0][7:0][31:0] b_down;

//新增引出的regfile
logic [7:0][7:0][32*4-1:0] regfiles;
assign regfile = regfiles;


generate 
    for (genvar i = 0; i < 8; i++) begin
        for (genvar j = 0; j < 8; j++) begin
            PE #(.ID(8*i+j)) pe (
                .clk(clk),                       
                .rst(rst),                                     
                .enleft(en_left[i][j]),              
                .enright(en_right[i][j]),
                .enup(en_up[i][j]),
                .endown(en_down[i][j]),
                .cmleft(cm_left[i][j]),                    
                .cmright(cm_right[i][j]),
                .cmup(cm_up[i][j]),
                .cmdown(cm_down[i][j]),
                .a_left(a_left[i][j]),
                .a_right(a_right[i][j]),
                .mixed(mixed),
                .we(we[i][j]),
                .wben(wben),
                .c(c[i][j]),
                .out_sum(out_sum[i][j]),
                .b_up(b_up[i][j]),
                .b_down(b_down[i][j]),
                .addr_type(addr_type),
                .out_ready(out_ready[i][j]),
                .regfile(regfiles[i][j])
            );
        end
    end
    

    for(genvar i = 0; i < 8; i++) begin
    for(genvar j=0;j<8;j++)
    begin
        assign en_left[i][j] = (j==0)? enleft[i] : en_right[i][j-1];
        assign en_up[i][j] = (i==0)? enup[j] : en_down[i-1][j];
        assign cm_left[i][j] = (j==0)? cmleft[i] : cm_right[i][j-1];
        assign cm_up[i][j] = (i==0)? cmup[j] : cm_down[i-1][j];
        assign a_left[i][j] = (j==0)? aleft[i] : a_right[i][j-1];
        assign b_up[i][j] = (i==0)? bup[j] : b_down[i-1][j];
    end
    end
endgenerate
endmodule