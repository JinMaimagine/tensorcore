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
    output logic [31:0] rdaddr_A,//此处rdaddr考虑了浮点,最后对应到sram的时候从第1位开始取出
    output logic [31:0] rdaddr_B//此处rdaddr考虑了浮点,最后对应到sram的时候从第1位开始取出
);
logic [31:0] baseaddr_A;
logic [31:0] baseaddr_B;
logic [31:0] counteraddr;
always_ff @(posedge clk) begin
    if(!rst)
    begin
    rdaddr_A<=0;
    baseaddr_A<=0;
    baseaddr_B<=0;
    rdaddr_B<=0;
    counteraddr<=0;
    end
    if(en_in)
    begin
        counteraddr<=counteraddr+1;
        begin
            case(addrs.datatype)
                params::FP32,params::FP16://TODO:目前这两实现成一个,但是实际后续可以优化
                begin
                    case(addrs.rc)
                        2'b00:
                        begin
                            rdaddr_A<=baseaddr_A+counteraddr[1:0]*64+counteraddr[2]*8;
                            rdaddr_B<=baseaddr_B+counteraddr[2]*32;
                            baseaddr_A<=baseaddr_A+counteraddr[3]*4;
                            baseaddr_B<=baseaddr_B+counteraddr[3]*4;
                        end
                        2'b01:
                        begin
                            rdaddr_A<=baseaddr_A+counteraddr[1]*64+counteraddr[2]*8;
                            rdaddr_B<=baseaddr_B+counteraddr[0]*4+counteraddr[1]*64;
                            baseaddr_A<=baseaddr_A+counteraddr[3]*4;
                            baseaddr_B<=baseaddr_B+counteraddr[3]*8;
                        end
                        2'b10:
                        begin
                            rdaddr_A<=baseaddr_A+counteraddr[2]*32;//8*4
                            rdaddr_B<=baseaddr_B+counteraddr[1:0]*4+counteraddr[2]*128;
                            baseaddr_A<=baseaddr_A+counteraddr[3]*4;
                            baseaddr_B<=baseaddr_B+counteraddr[3]*16;
                        end
                        default: assert(0);
                    endcase
                end
                params::INT8:
                begin
                    case(addrs.rc)
                        2'b00:
                        begin
                            rdaddr_A<=baseaddr_A+counteraddr[0]*32;
                            baseaddr_A<=baseaddr_A+counteraddr[0]*4;
                            rdaddr_B<=rdaddr_B+2;
                        end
                        2'b01:
                        begin
                            rdaddr_A<=rdaddr_A+2;//一共8行,+1是因为重复算,两次结束
                            rdaddr_B<=rdaddr_B+2;
                        end
                        2'b10:
                        begin
                            rdaddr_A<=rdaddr_A+2;
                            rdaddr_B<=baseaddr_B+counteraddr[0]*32;//8*4
                            baseaddr_B<=baseaddr_B+counteraddr[0]*4;
                        end
                        default: assert(0);
                    endcase
                end
                params::INT4:
                begin//这个应该是最简单的,后期取数要在control模块进行变换
                    rdaddr_A<=rdaddr_A+4;
                    rdaddr_B<=rdaddr_B+4;//+4是因为有的位置是+2,+1用来区分
                end          
            endcase
        end
end
end
endmodule
