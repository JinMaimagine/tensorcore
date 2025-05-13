//////////////////////////////////////////////////////////////////////////////
//float f16_to_f32(half __x) {
//unsigned short n = *((unsigned short *)&__x);
//unsigned int x = (unsigned int)n;
//x = x & 0xffff;
//unsigned int sign = x & 0x8000;                   //符号位
//unsigned int exponent_f16 = (x & 0x7c00) >> 10;   //half指数位
//unsigned int mantissa_f16 = x & 0x03ff;           //half小数位
//unsigned int y = sign << 16;
//unsigned int exponent_f32;                        //float指数位
//unsigned int mantissa_f32;                        //float小数位
//unsigned int first_1_pos = 0;                     //（half小数位）最高位1的位置
//unsigned int mask;
//unsigned int hx;
//
//hx = x & 0x7fff;
//
//if (hx == 0) {
//  return *((float *)&y);
//}
//if (hx == 0x7c00) {
//  y |= 0x7f800000;
//  return *((float *)&y);
//}
//if (hx > 0x7c00) {
//  y = 0x7fc00000;
//  return *((float *)&y);
//}
//
//exponent_f32 = 0x70 + exponent_f16;
//mantissa_f32 = mantissa_f16 << 13;
//
//for (first_1_pos = 0; first_1_pos < 10; first_1_pos++) {
//  if ((mantissa_f16 >> (first_1_pos + 1)) == 0) {
//    break;
//  }
//}
//
//if (exponent_f16 == 0) {
//  mask = (1 << 23) - 1;
//  exponent_f32 = exponent_f32 - (10 - first_1_pos) + 1;
//  mantissa_f32 = mantissa_f32 << (10 - first_1_pos);
//  mantissa_f32 = mantissa_f32 & mask;
//}
//
//y = y | (exponent_f32 << 23) | mantissa_f32;
//
//return *((float *)&y);
//}
//////////////////////////////////////////////////////////////////////////////////////////
module FP16toFP32#(
    parameter PARM_XLEN = 32
)(
    input  wire mode,
    input  wire [PARM_XLEN-1:0] fp16,
    output reg [PARM_XLEN-1:0] fp32
);
reg sign;
reg [7:0] exponent;
reg [22:0] mantissa;
reg signed [4:0] i;
wire fp16_sign;
wire [4:0] fp16_exponent;
wire [9:0] fp16_mantissa;
reg finish;

assign fp16_sign=fp16[15];
assign fp16_exponent=fp16[14:10];
assign fp16_mantissa=fp16[9:0];
always@(*)
begin
    mantissa=0;
    sign=fp16_sign;
    if(fp16_exponent==5'b11111) begin
        exponent=8'b11111111;
        mantissa={fp16_mantissa,13'b0};//反正已经NAN了,随便
    end
    else if(fp16_exponent==5'b00000) begin
        if(fp16_mantissa==10'b0000000000) begin
            exponent=8'b00000000;
            mantissa=23'b0;
        end
        else begin
           finish=0;
           for(i=9;i>=0;i=i-1)
           begin
            if(!finish)
            begin
            if(fp16_mantissa[i]==1) begin
                finish=1;
                mantissa=fp16_mantissa<<(10-i);
                exponent=112-(10-i)+1;
            end
            end
           end
    end
    end
    else//normal
    begin
        exponent=112+{3'b0,fp16_exponent};
        mantissa={fp16_mantissa,13'b0};
    end
end
always@(*)
begin
    if (mode == 1'b1) begin
        fp32={sign,exponent[7:0],mantissa[22:0]};
    end else begin
        fp32=fp16;//说明传入不是fp16
    end
end
endmodule