module FP32toBF16 #(
    parameter PARM_XLEN = 32
)(
    input  logic               mode,     // 1=convert 0=pass-thru(截取低16位)
    input  logic [PARM_XLEN-1:0]    fp32,
    output logic [PARM_XLEN-1:0]    bf16,
    input logic                OF_in,
    input logic                UF_in,
    input logic                NX_in,
    input logic                NV_in,
    output logic               NV_out,     // NaN / Inf
    output logic               OF_out,     // Overflow
    output logic               UF_out,     // Underflow
    output logic               NX_out      // Not-a-Number
);
    // 拆分字段
    logic        sign;
    logic [ 7:0] exp_f;
    logic [22:0] frac_f;

    // 舍入相关
    logic [ 6:0] frac_b;                 // 目标 7 位尾数
    logic        guard_bit;
    logic        sticky_bit;
    logic        lsb_bit;
    logic [ 8:0] exp_rounded;            // 带进位的指数临时

    // 初始状态设置
    always_comb begin
        // 默认输出为输入状态，保持传递
        NV_out = NV_in;
        OF_out = OF_in;
        UF_out = UF_in;
        NX_out = NX_in;

        if (!mode) begin
            bf16 = fp32[15:0];           // 简单截断
        end else begin
            // 拆字段
            sign    = fp32[31];
            exp_f   = fp32[30:23];
            frac_f  = fp32[22:0];

            // ---------------------- NaN / Inf ----------------------
            if (exp_f == 8'hFF) begin
                bf16 = {sign,8'hFF, frac_f[22] ? 7'h40 : 7'h00}; // NaN保持payload最高位
                NV_out = 1'b1; // 设置NaN / Inf标志
            end
            // ---------------------- Zero & Subnormal --------------
            else if (exp_f == 8'h00) begin
                bf16 = {sign,8'h00, 7'h00};  // 直接归 0（可扩展成 subnormal 处理）
                UF_out = 1'b1; // 设置Underflow标志
            end
            // ---------------------- Normal ------------------------
            else begin
                // 取高 7 位
                frac_b     = frac_f[22:16];
                lsb_bit    = frac_b[0];
                guard_bit  = frac_f[15];
                sticky_bit = |frac_f[14:0];

                // round-to-nearest-even
                if (guard_bit && (sticky_bit | lsb_bit)) begin
                    {exp_rounded , frac_b} = {1'b0,exp_f,frac_b} + 9'b0_0000001; // 8+7+1
                end else begin
                    exp_rounded = {1'b0,exp_f};
                end

                // 处理舍入后指数溢出
                if (exp_rounded[8]) begin   // 进位导致指数+1→256 (0x100) 溢出
                    bf16 = {sign,8'hFF,7'h00};   // 转成+Inf
                    OF_out = 1'b1; // 设置Overflow标志
                end else if (exp_rounded[7:0] == 8'h00) begin // 下溢到 0
                    bf16 = {sign,8'h00,7'h00};
                    UF_out = 1'b1; // 设置Underflow标志
                end else begin
                    bf16 = {sign,exp_rounded[7:0],frac_b};
                end
            end
        end
    end
endmodule
