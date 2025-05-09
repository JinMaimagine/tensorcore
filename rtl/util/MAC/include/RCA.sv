// ---------------------------------------------------------------------
// 可参数化的加法器 (Ripple Carry，单门实现)
// ---------------------------------------------------------------------
module RCA #(
    parameter W = 8                       // 数据宽度
) (
    input  wire [W-1:0] A,
    input  wire [W-1:0] B,
    input  wire         Cin,              // 0 = 加，1 = 减 时的末位进位
    output wire [W-1:0] S,
    output wire         Cout
);
    wire [W:0] C;
    assign C[0] = Cin;

    genvar i;
    generate
        for (i = 0; i < W; i = i + 1) begin : g_rca
            assign S[i]   = A[i] ^ B[i] ^ C[i];
            assign C[i+1] = (A[i] & B[i]) | (A[i] & C[i]) | (B[i] & C[i]);
        end
    endgenerate

    assign Cout = C[W];
endmodule


// ---------------------------------------------------------------------
// 减法器  S = A - B   （两数互补 + 1）
// ---------------------------------------------------------------------
module SUB #(
    parameter W = 8
) (
    input  wire [W-1:0] A,
    input  wire [W-1:0] B,
    output wire [W-1:0] S,
    output wire         Cout
);
    // A + (~B) + 1  ==> A - B
    RCA #(.W(W)) u_sub (
        .A   (A),
        .B   (~B),
        .Cin (1'b1),
        .S   (S),
        .Cout(Cout)
    );
endmodule
