//我会进行封装,内部是成篇的sram，外部提供的是一个访问的接口
//这是一个单片的sram,我需要封装成SRAM_A(对于一行的PE),SRAM_C,SRAM_B
//后面写死,不作为parameter
//TODO:所有int后面都优化,减少bit数
//对外封装成SRAM_A,SRAM_B,MAX_addr直接作为归零的地址
module SRAM_A_BANK #(
    parameter WRWIDTH = 32,
    parameter RDWIDTH = 4,
    parameter ENTRYS = 64
)(
    input logic rst,
    input logic clk,
    input logic [$clog2(ENTRYS)-1:0] rdaddr,
    //TODO:后面讲MAX_ADDR改成generate形式
    output logic [RDWIDTH-1:0] data_out,
    input logic [WRWIDTH-1:0] data_in,
    input logic we,
    input logic re
);//determines axi
localparam SRAM_ADDR_INC = 8;//每次写32bit,4bit为1组
logic [ENTRYS-1:0][RDWIDTH-1:0] data;
logic [$clog2(ENTRYS)-1:0] wraddr;
always_ff @(posedge clk) begin    
    if (we) begin
        for(integer i=0;i<SRAM_ADDR_INC;i++) begin
            data[wraddr+i] <= data_in[4*i+:4];
        end
    end
    if (re) begin
        data_out <= data[rdaddr];
    end
end
always_ff @(posedge clk) begin
    if (rst) begin
        wraddr <= 0;
    end
    else
    begin
        if (we) begin
            wraddr <= wraddr+SRAM_ADDR_INC;
        end
    end
end
endmodule
//TODO:暂时没考虑re有针对性，一次就读32bit
module SRAM_A_Unit#(
parameter WRWIDTH = 32,
parameter RDWIDTH = 4,
parameter ENTRYS   = 64
)
(
    input logic rst,
    input logic clk,
    input logic [$clog2(ENTRYS)-1:0] rdaddr,
    output logic [7:0][RDWIDTH-1:0] data_out,
    input logic [7:0][WRWIDTH-1:0] data_in,
    //每个含有8位
    input logic [7:0]we,
    input logic re
);
generate
    for (genvar i = 0; i < 8; i++) begin: sram_row
       SRAM_A_BANK #(
            .WRWIDTH(WRWIDTH),
            .RDWIDTH(RDWIDTH),
            .ENTRYS(ENTRYS)
        ) sram_row (
            .rst(rst),
            .clk(clk),
            .rdaddr(rdaddr),
            .data_out(data_out[i]),
            .data_in(data_in[i]),
            .we(we[i]),
            .re(re)
        );
    end
endgenerate
endmodule
module SRAM_A #(//可以用来实例化SRAM_A
    parameter WRWIDTH = 32,
    parameter RDWIDTH = 4,
    parameter ENTRYS = 16
)(
    input logic rst,
    input logic clk,
    input logic [7:0][$clog2(ENTRYS)-1:0] rdaddr,
    output logic [7:0][7:0][RDWIDTH-1:0] data_out,
    input logic [7:0][7:0][WRWIDTH-1:0] data_in,
    input logic [7:0][7:0]we,
    input logic [7:0]re
);
generate
    for (genvar i = 0; i < 8; i++) begin: sram_row
       SRAM_A_Unit #(
            .WRWIDTH(WRWIDTH),
            .RDWIDTH(RDWIDTH),
            .ENTRYS(ENTRYS)
        ) sram_row (
            .rst(rst),
            .clk(clk),
            .rdaddr(rdaddr[i]),
            .data_out(data_out[i]),
            .data_in(data_in[i]),
            .we(we[i]),
            .re(re[i])
        );
    end
endgenerate
endmodule
//封装成SRAM_B:对于一列的PE,输入输出都是4bit
module SRAM_B_BANK #(
    parameter int unsigned WIDTH = 4,
    parameter int unsigned ENTRYS = 16
)(
    input logic clk,
    input logic rst,
    input logic [$clog2(ENTRYS)-1:0] rdaddr,
    output logic [WIDTH-1:0] data_out,
    input logic [WIDTH-1:0] data_in,
    input logic we,
    input logic re
);//determines axi
localparam SRAM_ADDR_INC=1;
logic [$clog2(ENTRYS)-1:0] wraddr;
logic [ENTRYS-1:0][WIDTH-1:0] data;
always_ff @(posedge clk) begin    
    if (we) begin
            data[wraddr] <= data_in;
    end
    if (re) begin
        data_out <= data[rdaddr];
    end
end
always_ff @(posedge clk) begin
    if (rst) begin
        wraddr <= 0;
    end
    else
    begin
        if (we) begin
                wraddr <= wraddr+1;
        end
    end
end
endmodule
module SRAM_B_Unit#(
parameter int unsigned WIDTH = 4,
parameter int unsigned ENTRYS = 16
)(
    input logic rst,
    input logic clk,
    input logic [$clog2(ENTRYS)-1:0] rdaddr,
    output logic [7:0][WIDTH-1:0] data_out,
    input logic [7:0][WIDTH-1:0] data_in,
    input logic [7:0]we,
    input logic re
);
generate
    for (genvar i = 0; i < 8; i++) begin: sram_row
       SRAM_B_BANK #(
            .WIDTH(WIDTH),
            .ENTRYS(ENTRYS)
        ) sram_row (
            .rst(rst),
            .clk(clk),
            .rdaddr(rdaddr),
            .data_out(data_out[i]),
            .data_in(data_in[i]),
            .we(we[i]),
            .re(re)
        );
    end
endgenerate
endmodule
module SRAM_B #(
    parameter int unsigned WIDTH = 4,
    parameter int unsigned ENTRYS = 16
)(
    input logic rst,
    input logic clk,
    input logic [$clog2(ENTRYS)-1:0] rdaddr,
    output logic [7:0][7:0][WIDTH-1:0] data_out,
    input logic [7:0][7:0][WIDTH-1:0] data_in,
    input logic [7:0][7:0]we,
    input logic [7:0]re
);
generate
    for (genvar i = 0; i < 8; i++) begin: sram_row
       SRAM_B_Unit #(
            .WIDTH(WIDTH),
            .ENTRYS(ENTRYS)
        ) sram_row (
            .rst(rst),
            .clk(clk),
            .rdaddr(rdaddr),
            .data_out(data_out[i]),
            .data_in(data_in[i]),
            .we(we[i]),
            .re(re[i])
        );
    end
endgenerate
endmodule
