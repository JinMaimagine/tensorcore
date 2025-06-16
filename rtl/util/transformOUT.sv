//这个module用来将从systolic中收集的data转换并输出
//用了burst
`include "para_pkg.sv"
module transformOUT(
    input logic clk,
    input logic rst,
    output logic[7:0][7:0] ready,
    output logic[31:0] burst_num,//一个burst多少个transcation
    input logic wben,//AXI传输
    input logic[7:0][7:0][31:0] data_in,
    output logic[255:0] data_out
);
//每次运送32bit/FP16就是16bit
logic [2:0] pointer;
always_comb begin
    ready=8'hff<<8*pointer;
    data_out=data_in[pointer-1];
end
logic en;
always@(posedge clk) begin
    if(rst) begin
        pointer <= 0;
    end else begin
        if(wben)
        begin
            pointer<=pointer+1;
        end     
    end
end
endmodule