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
  reg [23:0]  mant_full;
  reg         guard, sticky, round_inc;
  integer     shift;

  always @* begin
    // 默认：保留输入标志，清除新增
    OF_out = OF_in;
    UF_out = UF_in;
    exp16  = 5'd0;
    frac16 = 10'd0;

    if (!mode) begin
      // bypass：高 16 位清 0，低 16 位直拷
      result_o = {16'b0, result_i[15:0]};
    end else begin
      // mode==1：做真正转换
      // 1) NaN / Inf
      if (exp32 == 8'hFF) begin
        exp16  = 5'h1F;
        if (frac32 == 0) begin
          frac16 = 10'd0;        // Inf
        end else begin
          // 保留 QNaN / SNaN 的最高几位
          frac16 = {1'b1, frac32[21:13]};  
        end
      end
      // 2) 正常范围（结果指数在 [1..30]）
      else if (exp32 > (127 - 15) && exp32 < (127 + 16)) begin
        // 失溢前指数
        exp16 = exp32 - (127 - 15);
        // RNE 舍入：取高 10 位 + lookahead
        {mant_full} = {1'b1, frac32};
        guard   = mant_full[13];
        sticky  = |mant_full[12:0];
        frac16  = mant_full[23:14];
        round_inc = guard & (sticky | frac16[0]);
        {exp16, frac16} = {exp16, frac16} + {5'd0, round_inc};
        // 进位后可能变成 0x400，需要进 1 到指数
        if (frac16 == 10'h400) begin
          exp16  = exp16 + 1;
          frac16 = 10'd0;
          // 如果进位后达到 31，就溢出到 Inf
          if (exp16 == 5'h1F) begin
            frac16 = 10'd0;
            OF_out = 1'b1;
          end
        end
      end
      // 3) 溢出到 Inf（exp32 >= 127+16）
      else if (exp32 >= (127 + 16)) begin
        exp16  = 5'h1F;
        frac16 = 10'd0;
        OF_out = 1'b1;
      end
      // 4) 下溢到次正规或零（exp32 <= 127-15）
      else begin
        // 准备完整尾数：隐含1 + frac
        mant_full = {1'b1, frac32};
        // 需要右移的总位数：从 1.xxx 变成 0.xxxx 的位移
        shift = (127 - 15) - exp32 + 1;
        if (shift < 24) begin
          // 带守位/粘位的 RNE
          guard   = mant_full[shift-1];
          sticky  = |mant_full[shift-2:0];
          frac16  = mant_full[shift +: 10];
          round_inc = guard & (sticky | frac16[0]);
          frac16  = frac16 + round_inc;
          // 进位到 0x400 表示变为最小正规
          if (frac16 == 10'h400) begin
            exp16  = 5'd1;
            frac16 = 10'd0;
          end else begin
            exp16 = 5'd0;
          end
        end else begin
          // 全部下溢成 0
          exp16  = 5'd0;
          frac16 = 10'd0;
        end
        // 下溢标志
        UF_out = 1'b1;
      end

      // 最终拼回去
      result_o = {16'b0, sign32, exp16, frac16};
    end
  end

endmodule