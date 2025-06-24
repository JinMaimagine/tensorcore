module mac_int16_with_overflow (
    input  signed [15:0] A,
    input  signed [15:0] B,
    input  signed [31:0] C,
    output signed [31:0] D,
    output overflow
);

    wire signed [31:0] product;
    wire signed [31:0] sum;

    assign product = A * B;
    assign sum = product + C;
    assign D = sum;

    // 溢出检测：当product和C同号但sum符号不同则溢出
    assign overflow = (~product[31] & ~C[31] & sum[31]) | (product[31] & C[31] & ~sum[31]);

endmodule
