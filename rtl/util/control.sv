//control是一边连接SRAM，一边连接PE，0~7,用来接收信号
//没有选择是读取哪个？
//TODO:rdaddr的地址,cin不在这个数据通路,它需要广播，单独写，如果是这样的话，row和col就可以合并为一个了
`include "para_pkg.sv"
module CONTROL_A_UNIT(
    input logic clk,
    input logic rst,
    input logic en_in,
    input logic cmen_in,
    input params::addrgen_t addrtype,
    output logic en_out,
    output logic cmen_out,
    output logic en_next,
    output logic cmen_next,
    output logic re,
    input logic [31:0] rdaddr,//TODO:int后面改为logic,暂时没算位数
    output logic [31:0] rdaddr_out,
    input logic [31:0] data_in,
    output logic[31:0] rdaddr_next,
    output logic[31:0] data_out
);
assign re=en_in;
assign rdaddr_out = rdaddr;
always_ff@(posedge clk) begin
    if (rst) begin
        en_out <= 0;
        cmen_out <= 0;
        rdaddr_next <= 0;
    end else begin
        en_out <= en_in;
        cmen_out <= cmen_in;
        rdaddr_next <= rdaddr;
    end
end
always_comb begin
    case(addrtype.datatype)
        params::FP16:begin
        data_out = rdaddr_next[1]?{16'b0,data_in[31:16]}:{16'b0,data_in[15:0]};
        end
        params::INT8:begin
            case(addrtype.rc)//对于A
            2'b00:
            begin//32*16
                data_out=data_in;
            end
            2'b01:
            begin//16*16
                data_out=rdaddr_next[1]?{data_out[31:24],data_out[31:24],data_in[15:8],data_in[15:8]}:{data_out[23:16],data_out[23:16],data_in[7:0],data_in[7:0]};
            end
            2'b10:
            begin//8*16
                data_out=rdaddr_next[1]?{data_in[15:8],data_in[15:8],data_in[15:8],data_in[15:8]}:{data_in[7:0],data_in[7:0],data_in[7:0],data_in[7:0]};
            end
            default:begin
                assert(0);
            end
            endcase
        end
        params::INT4:begin
           case(addrtype.rc)//对于A
            2'b00:
            begin//32*16
                data_out=data_in;
            end
            2'b01:
            begin//16*16
                data_out={{2{data_in[15:8]}},{2{data_in[7:0]}}};
            end
            2'b10:
            begin//8*16
                data_out={4{data_in[7:0]}};
            end
            default:begin
                assert(0);
            end
            endcase
        end
        default:begin
            data_out=data_in;
        end
    endcase
end
assign en_next = en_out;
assign cmen_next = cmen_out;
endmodule


module CONTROL_B_UNIT(
    input logic clk,
    input logic rst,
    input logic en_in,
    input logic cmen_in,
    output logic re,
    output logic en_out,
    output logic cmen_out,
    output logic en_next,
    output logic cmen_next,
    input params::addrgen_t addrtype,
    input logic [31:0] rdaddr,//TODO:int后面改为logic,暂时没算位数
    input logic [31:0] data_in,
    output logic [31:0] rdaddr_next,
    output logic[31:0] data_out,
    output logic [31:0] rdaddr_out
);
assign re=en_in;
assign rdaddr_out = rdaddr;
always_ff@(posedge clk) begin
    if (rst) begin
        en_out <= 0;
        cmen_out <= 0;
        rdaddr_next <= 0;
    end else begin
        en_out <= en_in;
        cmen_out <= cmen_in;
        rdaddr_next <= rdaddr;
    end
end
always_comb begin
    case(addrtype.datatype)
    params::FP16:begin
            case(addrtype.rc)//对于B
            2'b00:
            begin//16*8
                data_out=data_in;
            end
            2'b01,2'b10:
            begin//16*16
                data_out=rdaddr_next[1]?{{16'b0,data_in[31:16]}}:{{16'b0,data_in[15:0]}};
            end
            default:begin
                assert(0);
            end
            endcase
        end
        params::INT8:begin
            case(addrtype.rc)//对于B
            2'b00:
            begin//16*8
                data_out=rdaddr_next[1]?{4{data_in[15:8]}}:{4{data_in[7:0]}};
            end
            2'b01:
            begin//16*16
                data_out=data_in;
            end
            2'b10:
            begin//16*32
                data_out=data_in;
            end
            default:begin
                assert(0);
            end
            endcase
        end
        params::INT4:begin
            case(addrtype.rc)//对于B
            2'b00:
            begin//16*8
                data_out={4{data_in[7:0]}};
            end
            2'b01:
            begin//16*16
                data_out={2{data_in[15:12],data_in[7:4],data_in[11:8],data_in[3:0]}};
            end
            2'b10:
            begin//16*32
                data_out={data_in[31:28],data_in[15:12],data_in[27:24],data_in[11:8],data_in[23:20],data_in[7:4],data_in[19:16],data_in[3:0]};
            end
            default:begin
                assert(0);
            end
            endcase
        end
        default:begin
            data_out=data_in;
        end
    endcase
end
assign en_next = en_out;
assign cmen_next = cmen_out;
endmodule



//序号容易反
module CONTROL_A(
input logic clk,
input logic rst,
input logic [31:0] rdaddr,
input logic [7:0][31:0] data_in,
output logic [7:0][31:0] data_out,
input logic en,
input logic cmen,
input params::addrgen_t addrtype,
output logic [7:0] en_out,
output logic [7:0] cmen_out,
output logic [7:0][31:0] rdaddr_out,
output logic [7:0] re
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
for (i = 0; i < 8; i++) begin: control_A
    CONTROL_A_UNIT control_A_unit (
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
        .rdaddr_next(rdaddr_next[i]),
        .addrtype(addrtype),
        .rdaddr_out(rdaddr_out[i]),
        .re(re[i])
    );
end
endgenerate
endmodule



module CONTROL_B(
input logic clk,
input logic rst,
input logic [31:0] rdaddr,
input logic [7:0][31:0] data_in,
output logic [7:0][31:0] data_out,
input logic en,
input logic cmen,
input params::addrgen_t addrtype,
output logic [7:0] en_out,
output logic [7:0] cmen_out,
output logic [7:0][31:0] rdaddr_out,
output logic [7:0] re
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
for (i = 0; i < 8; i++) begin: control_B
    CONTROL_B_UNIT control_B_unit (
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
        .rdaddr_next(rdaddr_next[i]),
        .addrtype(addrtype),
        .rdaddr_out(rdaddr_out[i]),
        .re(re[i])
    );
end
endgenerate
endmodule