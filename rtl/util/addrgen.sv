//分为row和col,用于生成取地址的addr的sv文件,只用实例化一个UNIT，其余的通过systolic传播
//对于row:对于FP32:每次rdaddr+1
//对于FP16:每两次rdaddr+1,就是间隔性读取
//对于INT8:第一次rdaddr,下一次:rdaddr+
//对于INT4:每八次rdaddr+1,就是间隔性读取
`include "para_pkg.sv"
module ADDRGEN_A_UNIT(
    input logic clk,
    input logic rst,
    input logic en_in,//激活,下一次预测
    input params::addrgen_t addrs,
    //TODO:int后面改为logic,暂时没算位数
    output logic [3:0] rdaddr
);
always_ff @(posedge clk) begin
    if(!rst)
    begin
    rdaddr<=0;
    end
    if(en_in)
    begin
        if(addrs.resetA)//在状态机的部分赋值
        begin
            rdaddr<=0;
        end
end
end
endmodule
module ADDRGEN_B_UNIT(
    input logic clk,
    input logic rst,
    input logic en_in,
    //input logic sel,//dbuffer,sel哪一个,sel是否应该选择哪个sram?不用sel了,一次已经全部读入
    //TODO:int后面改为logic,暂时没算位数
    input params::addrgen_t addrs,
    output logic[3:0] rdaddr
);
logic[31:0] data;
logic valid;
always_ff @( posedge clk ) begin
    if(!rst)
    begin
        rdaddr <= 0;
    end
    if(en_in)
    begin
        if(addrs.resetB)//在状态机的部分赋值
        begin
            rdaddr<=0;
        end
end
end
endmodule