//TODO:not debug
module FP32toFP16 #(
    parameter PARM_XLEN = 32
)(
    input  wire                 mode,
    input  wire [PARM_XLEN-1:0] result_i,
    output reg  [PARM_XLEN-1:0] result_o,
    input  wire                 NV_in,
    input  wire                 DZ_in,
    input  wire                 OF_in,
    input  wire                 UF_in,
    input  wire                 NX_in,
    output wire                 NV_out,
    output wire                 DZ_out,
    output reg                  OF_out,
    output reg                  UF_out,
    output wire                 NX_out
);
//TODO:未来计划实现ties to even,目前暂时实现为四舍五入
  // 拆字段
  wire        sign32   = result_i[31];
  wire [7:0]  exp32    = result_i[30:23];
  wire [22:0] frac32   = result_i[22:0];

  // 直接传递不变的标志
  assign NV_out = NV_in;
  assign DZ_out = DZ_in;
  assign NX_out = NX_in;

  // 中间变量
  reg [4:0]   exp16;
  reg [9:0]   frac16;

  always @(*) begin
    // 默认：保留输入标志，清除新增
    OF_out = OF_in;
    UF_out = UF_in;
    if(exp32>=127+15)//15是可以表示的
    begin
      if(exp32==127+15)//TODO:目前直接四舍五入了
      begin
      OF_out=&frac32[22:12];//必须12位也为1
      exp16=OF_out?5'b11111:5'b11110;
      frac16=OF_out?10'b0:(frac32[22:13]+frac32[12]);
      end
      else if(exp32==8'b11111111)
      begin
        // 直接传递NAN
        exp16 = 5'b11111;
        frac16 = frac32[22:13];//我认为如果frac32!=0是那么22:13位一定是非零,所以这时不用更改标志位
      end
      else
      begin
        UF_out = 1'b1;
        exp16 = 5'b11111;
        frac16 = 10'b0;
      end
    end
    //考虑过小
    else if(exp32<127-14)
    begin
      if(exp32<127-24)//可以=-24
      begin
        // 直接传递NAN,按照4舍5入
        if(exp32==127-25)
        begin
          if(frac32[22])
          begin
            exp16=5'b00000;
            frac16=10'b0000000001;
          end
        end
        else
          begin
            UF_out=1'b1;
          exp16 = 5'b00000;
          frac16 = 10'b0000000000;
          end
      end
      else//找1环节
      begin
        
      end
    end
    else
    begin//normal    //-14是完全可以的
      exp16=exp32-127+15;
      if(&frac32[22:13])
      begin
        exp16=exp16+1;
        frac16=10'b0;
      end
      else
      begin
      frac16[9:0]=(frac32[22:13]+frac32[12]);
      end
    end
    result_o = (mode==1'b1)?{16'b0, sign32, exp16, frac16}:result_i;
    end

endmodule