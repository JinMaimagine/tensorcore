//control是一边连接SRAM，一边连接PE，0~7,用来接收信号
//没有选择是读取哪个？
//TODO:rdaddr的地址,cin不在这个数据通路,它需要广播，单独写，如果是这样的话，row和col就可以合并为一个了
module CONTROL_UNIT(
    input logic clk,
    input logic rst,
    input logic en_in,
    input logic cmen_in,
    output logic en_out,
    output logic cmen_out,
    output logic en_next,
    output logic cmen_next,
    input [31:0] rdaddr,//TODO:int后面改为logic,暂时没算位数
    input logic[31:0] data_in,
    output logic rdvalid,
    output logic datavalid,
    output int rdaddr_next,
    output logic[31:0] data_out
);
assign rdvalid=en_in;
assign data_out=data_in;
always_ff@(posedge clk) begin
    if (rst) begin
        en_out <= 0;
        cmen_out <= 0;
        rdaddr_next <= 0;
        datavalid <= 0;
    end else begin
        en_out <= en_in;
        cmen_out <= cmen_in;
        rdaddr_next <= rdaddr;
        datavalid<=rdvalid;
    end
end
assign en_next = en_out;
assign cmen_next = cmen_out;
endmodule

//序号容易反
module CONTROL(
input logic clk,
input logic rst,
input logic [31:0] rdaddr,
output logic [7:0] datavalid,
output logic [7:0] rdvalid,
input logic [7:0][31:0] data_in,
output logic [7:0][31:0] data_out,
input logic en,
input logic cmen,
output logic [7:0] en_out,
output logic [7:0] cmen_out
);
logic [7:0] cmen_next;
logic [7:0] en_next;
logic [7:0] cmen_in;
logic [7:0] en_in;
logic [7:0][31:0] rdaddr_next;
logic [7:0][31:0] rdaddr_in;
assign cmen_in = {cmen_next[6:0],cmen};
assign en_in = {en_next[6: 0],en};
assign rdaddr_in = {rdaddr_next[6:0],rdaddr};
generate 
genvar i;
for (i = 0; i < 8; i++) begin: control_row
    CONTROL_UNIT control_unit (
        .clk(clk),
        .rst(rst),
        .en_in(en_in[i]),
        .en_next(en_next[i]),
        .cmen_in(cmen_in[i]),
        .en_out(en_out[i]),
        .cmen_out(cmen_out[i]),
        .cmen_next(cmen_next[i]),
        .rdaddr(rdaddr_in[i]),
        .data_in(data_in[i]),
        .data_out(data_out[i]),
        .rdvalid(rdvalid[i]),
        .datavalid(datavalid[i]),
        .rdaddr_next(rdaddr_next[i])
    );
end
endgenerate
endmodule

