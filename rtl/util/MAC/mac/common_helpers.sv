`ifndef COMMON_HELPERS_SV
`define COMMON_HELPERS_SV

// Common helper modules for multiplication units
// These modules are shared between mult_INT4.sv and mult_INT8.sv

module ha (
    input logic a,
    input logic b,
    output logic s,
    output logic c
);
    assign s = a ^ b;
    assign c = a & b;
endmodule

module fa (
    input logic x,
    input logic y,
    input logic z,
    output logic s,
    output logic c
);
    assign s = x ^ y ^ z;
    assign c = (x & y) | (x & z) | (y & z);
endmodule

module Four2Two 
    #(parameter WIDTH=1) (
    input logic [WIDTH-1:0] in1,
    input logic [WIDTH-1:0] in2,
    input logic [WIDTH-1:0] in3,
    input logic [WIDTH-1:0] in4,
    input logic cin,
    output logic [WIDTH-1:0] sum,
    output logic [WIDTH-1:0] carry,
    output logic cout
);
    wire logic [WIDTH:0] temp1;
    assign temp1 = {((in1 ^ in2)&in3 | in1 & ~(in1^in2)),cin};
    assign sum = ((in1 ^ in2) ^ in3 ^ in4) ^ temp1[WIDTH-1:0];
    assign carry = ((in1 ^ in2) ^ in3 ^ in4) & temp1[WIDTH-1:0] | in4 & ~((in1 ^ in2) ^ in3 ^ in4);
    assign cout = temp1[WIDTH];
endmodule

`endif // COMMON_HELPERS_SV