`include "mult_INT4.sv"
`include "mult_INT8.sv"
`include "Adder.v"
//这里mode=1是8itMA,mode=0是4bitMA
module MAC_ADDER(
input logic clk,
input logic rst,
input logic [31:0] IN1,
input logic [31:0] IN2,
input logic [127:0] IN3,
input mode,
output logic [127:0] OUT//4*32,8*16，送入的数据是排布好的
);
logic [127:0] mult8_out;
// Raw (non‑sign‑extended) partial products
logic [15:0] mult8_raw [0:3];
logic [127:0] mult4_out;
// Raw (non‑sign‑extended) partial products
logic  [7:0] mult4_raw [0:7];
logic [127:0] out;

logic [127:0] OUT_wire;


generate
    genvar i;

    // -------- 4× INT8 multiply‑add (each returns 16‑bit) --------
    for (i = 0; i < 4; i++) begin : MAC_mult_INT8
        mult_INT8 mult8 (
            .IN1 (IN1[8*i   +: 8]),
            .IN2 (IN2[8*i   +: 8]),
            .IN3 (),
            .design_res(mult8_raw[i])
        );
        // Sign‑extend every 16‑bit product to 32‑bit and pack
        assign mult8_out[32*i +: 32] = {{16{mult8_raw[i][15]}}, mult8_raw[i]};
    end

    // -------- 8× INT4 multiply‑add (each returns 8‑bit) --------
    for (i = 0; i < 8; i++) begin : MAC_mult_INT4
        mult_INT4 mult4 (
            .IN1 (IN1[4*i   +: 4]),
            .IN2 (IN2[4*i   +: 4]),
            .IN3 (),
            .design_res(mult4_raw[i])
        );
        // Sign‑extend every 8‑bit product to 16‑bit and pack
        assign mult4_out[16*i +: 16] = {{8{mult4_raw[i][7]}}, mult4_raw[i]};
    end

    // Select INT8 or INT4 result
    assign out = mode ? mult8_out : mult4_out;
    // for(i=0;i<4;i++) begin: MAC
        Adder_4 _adder(.mode(mode),.X(IN3),.Y(out),.S(OUT_wire));
    // end
endgenerate

// //这一级寄存器暂时不要，放外面
// //输出加一级寄存器
// logic [127:0] OUT_reg;
// always_ff @(posedge clk or posedge rst) begin
//     if (rst) begin
//         OUT_reg <= 128'd0;
//     end else begin
//         OUT_reg <= OUT_wire;
//     end
// end

assign OUT = OUT_wire;



endmodule