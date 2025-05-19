`include "mult_INT4.sv"
`include "mult_INT8.sv"
`include "Adder.v"
//这里mode=1是8itMA,mode=0是4bitMA
module MAC_ADDER(
input logic [31:0] IN1,
input logic [31:0] IN2,
input logic [127:0] IN3,
input mode,
output logic [127:0] OUT//4*32,8*16，送入的数据是排布好的
);
logic [127:0] mult8_out;
logic [127:0] mult4_out;
logic [127:0] out;
generate
    genvar i;
    for(i=0;i<4;i++) begin: MAC
        assign mult8_out[(32*i+16)+:16] = 0;
        mult_INT8 mult8(.IN1(IN1[8*i+:8]),.IN2(IN2[8*i+:8]),.IN3(),.design_res(mult8_out[32*i+:16]));
    end
    for(i=0;i<8;i++) begin: MAC
        assign mult4_out[(16*i+8)+:8] = 0;
        mult_INT4 mult4(.IN1(IN1[4*i+:4]),.IN2(IN2[4*i+:4]),.IN3(),.design_res(mult4_out[16*i+:8]));
    end
    assign out=mode?mult8_out:mult4_out;
    Adder_4 _adder(.mode(mode),.X(IN3),.Y(out),.S(OUT));
endgenerate



endmodule