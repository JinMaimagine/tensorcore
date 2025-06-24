// ----------------------------------------------------------
//  BF16 → FP32   （1|8|7 → 1|8|23）
// ----------------------------------------------------------
module BF16toFP32 #(
    parameter PARM_XLEN = 32
)(
    input  logic               mode,     // 1=convert 0=pass-thru(零扩展)
    input  logic [PARM_XLEN-1:0]    bf16,
    output logic [PARM_XLEN-1:0]    fp32
);
    logic        sign;
    logic [ 7:0] exp_b;
    logic [ 6:0] frac_b;
    logic [22:0] frac_f;
    logic [ 7:0] exp_f;

    always_comb begin
        if (!mode) begin
            fp32 = {16'b0,bf16};     // 兼容直通
        end else begin
            sign    = bf16[15];
            exp_b   = bf16[14:7];
            frac_b  = bf16[6:0];

            // ------- 分类 ----------
            if (exp_b == 8'hFF) begin               // Inf / NaN
                exp_f  = 8'hFF;
                frac_f = {frac_b,16'b0};            // NaN: 传递负载；Inf: frac_b==0
            end
            else if (exp_b == 8'h00) begin          // Zero / Sub-normal
                if (frac_b == 7'd0) begin           //   Zero
                    exp_f  = 8'h00;
                    frac_f = 23'd0;
                end
                else begin                          //   Sub-normal —— 直接扩展
                    exp_f  = 8'h00;
                    frac_f = {frac_b,16'b0};        // 相当于 fp32 的 sub-normal
                end
            end
            else begin                              // Normal
                exp_f  = exp_b;                     // 指数完全相同
                frac_f = {frac_b,16'b0};            // 左移补 0
            end
            fp32 = {sign,exp_f,frac_f};
        end
    end
endmodule
