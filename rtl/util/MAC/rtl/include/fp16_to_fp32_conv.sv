// ---------------------------------------------------------------------
// 16→32 converter  (combinational)
// ---------------------------------------------------------------------
//  • 规范数  : exp16 ≠ 0,11111
//  • +Inf/NaN: exp16 == 11111
//  • 次正规数: exp16 == 00000 & man16 != 0   ← 这里normalize
//  • ±0      : exp16 == 00000 & man16 == 0
// ---------------------------------------------------------------------
`include"RCA.sv"

module fp16_to_fp32_conv (
    input  wire [15:0] fp16_i,
    output logic [31:0] fp32_o
);
    // 拆字段 -----------------------------------------------------------
    wire        sign   = fp16_i[15];
    wire [4:0]  exp16  = fp16_i[14:10];
    wire [9:0]  man16  = fp16_i[9:0];

    // ---- 前导零计数 --------------------------------------------------
    function automatic [3:0] lzc10 (input [9:0] x);
        casez (x)
            10'b1?????????: lzc10 = 4'd0;
            10'b01????????: lzc10 = 4'd1;
            10'b001???????: lzc10 = 4'd2;
            10'b0001??????: lzc10 = 4'd3;
            10'b00001?????: lzc10 = 4'd4;
            10'b000001????: lzc10 = 4'd5;
            10'b0000001???: lzc10 = 4'd6;
            10'b00000001??: lzc10 = 4'd7;
            10'b000000001?: lzc10 = 4'd8;
            default       : lzc10 = 4'd9;
        endcase
    endfunction
    wire [3:0] lzc = lzc10(man16);

    // ---- shift = lzc + 1  -------------------------------------------
    wire [3:0] shift;
    wire       unused_c1;
    RCA #(.W(4)) u_add1 ( .A(lzc), .B(4'b0001), .Cin(1'b0), .S(shift), .Cout(unused_c1) ); //shift = lzc + 1

    // ---- exp32 = 113 - shift  (8'h71 == 113) ------------------------
    wire [7:0] exp32_sub;
    SUB #(.W(8)) u_sub113 ( .A(8'h71), .B({4'b0, shift}), .S(exp32_sub), .Cout(/*unused*/) ); // exp32_sub = 113 - shift

    // ---- 正常数的 exp32 = exp16 + 112 (8'h70) -----------------------
    wire [7:0] exp32_norm;
    wire       unused_c2;
    RCA #(.W(8)) u_add112 ( .A({3'b0, exp16}), .B(8'h70), .Cin(1'b0),
                            .S(exp32_norm), .Cout(unused_c2) );  // exp32_norm = exp16 + 112

    // ---- 主组合逻辑 --------------------------------------------------
    always_comb begin
        // 1) Inf / NaN
        if (exp16 == 5'b11111) begin
            fp32_o       = {sign, 8'hFF, 23'd0};
            fp32_o[22]   = |man16;
            fp32_o[21:0] = {man16,12'd0};

        // 2) Zero / Subnormal
        end else if (exp16 == 5'b00000) begin
            if (man16 == 10'd0) begin
                fp32_o = {sign, 8'h00, 23'd0};          // ±0
            end else begin
                // sub-normal → 规格化
                logic [23:0] sig24 = ({man16,13'd0} << shift);
                fp32_o = {sign, exp32_sub, sig24[22:0]};
            end

        // 3) 规范数
        end else begin
            fp32_o = {sign, exp32_norm, man16, 13'd0};
        end
    end
endmodule
