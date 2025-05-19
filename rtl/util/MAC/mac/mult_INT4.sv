module mult_INT4 (
        input logic [3:0] IN1,
        input logic [3:0] IN2,
        input logic [0:0] IN3, //redundant
        //output logic design_is_correct, // is set to 1 iff the output of DT_SSP_RP_4x4_noX matches its spec.
        output logic [7:0] design_res
        //output logic [7:0] spec_res
        );
    
    //assign spec_res = signed'(IN1) * signed'(IN2);
    DT_SSP_RP_4x4_noX mult(IN1, IN2, design_res);
    //assign design_is_correct = ((spec_res == design_res) ? 1 : 0);
    
endmodule



module DT_SSP_RP_4x4_noX(
        input logic [3:0] IN1,
        input logic [3:0] IN2,
        output logic [7:0] result);
    
    
// Creating Partial Products 

    wire logic [3:0] pp0;
    wire logic [3:0] pp1;
    wire logic [3:0] pp2;
    wire logic [3:0] pp3;
    assign pp0 = ({4{IN1[0]}} & IN2) ^ ((1'b1)<<3);
    assign pp1 = ({4{IN1[1]}} & IN2) ^ ((1'b1)<<3);
    assign pp2 = ({4{IN1[2]}} & IN2) ^ ((1'b1)<<3);
    assign pp3 = ~({4{IN1[3]}} & IN2) ^ ((1'b1)<<3);
    
    // The values to be summed in the summation tree, from LSB (left) to MSB:
     // pp0[0] pp0[1] pp0[2] pp0[3]   --     --     --     --   
     //   --   pp1[0] pp1[1] pp1[2] pp1[3]   --     --     --   
     //   --     --   pp2[0] pp2[1] pp2[2] pp2[3]   --     --   
     //   --     --     --   pp3[0] pp3[1] pp3[2] pp3[3]   --   
     //   --     --     --     --   1'b1     --     --   1'b1   
    
// Creating Summation Tree 

    
    // Dadda Summation Stage 1
    logic s0 ,c0;
    ha ha0 (pp0[3], pp1[2], s0, c0);
    logic s1 ,c1; 
    fa fa1 (pp1[3], pp2[2], pp3[1], s1, c1);
    
    // Dadda Summation Stage 2
    logic s2 ,c2;
    ha ha2 (pp0[2], pp1[1], s2, c2);
    logic s3 ,c3; 
    fa fa3 (pp2[1], pp3[0], s0, s3, c3);
    logic s4 ,c4; 
    fa fa4 (1'b1, c0, s1, s4, c4);
    logic s5 ,c5; 
    fa fa5 (pp2[3], pp3[2], c1, s5, c5);
    
    assign result[0] = pp0[0];
    logic [7:0] adder_result;
    RP_7 final_adder ({1'b1, pp3[3], c4, c3, c2, pp2[0], pp0[1] }, {1'b0, c5, s5, s4, s3, s2, pp1[0] }, adder_result );
    assign result[7:1] = adder_result[6:0];
endmodule



module RP_7 ( 
        input logic [6:0] IN1,
        input logic [6:0] IN2,
        output logic [7:0] OUT);
    
    logic C0, C1, C2, C3, C4, C5, C6, C7;
    ha m0 (IN1[0], IN2[0], OUT[0], C0);
    fa m1 (IN1[1], IN2[1], C0, OUT[1], C1);
    fa m2 (IN1[2], IN2[2], C1, OUT[2], C2);
    fa m3 (IN1[3], IN2[3], C2, OUT[3], C3);
    fa m4 (IN1[4], IN2[4], C3, OUT[4], C4);
    fa m5 (IN1[5], IN2[5], C4, OUT[5], C5);
    fa m6 (IN1[6], IN2[6], C5, OUT[6], C6);
    assign OUT[7] = C6;

endmodule

module RP_7_spec (
        input logic [6:0] IN1,
        input logic [6:0] IN2,
        output logic adder_correct,
        output logic [7:0] spec_res);
    
    assign spec_res = IN1 + IN2;
    wire [7:0] adder_res;
    RP_7 adder(IN1, IN2, adder_res);
    assign adder_correct = ((spec_res == adder_res) ? 1 : 0);
    
endmodule



module ha (
        input logic a,
        input logic b,
        output logic s,
        output logic c);
    
    assign s = a ^ b;
    assign c = a & b;
endmodule



module fa (
        input logic x,
        input logic y,
        input logic z,
        output logic s,
        output logic c);
    
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
        output logic cout);
    
    wire logic [WIDTH:0] temp1;
    assign temp1 = {((in1 ^ in2)&in3 | in1 & ~(in1^in2)),cin};
    assign sum = ((in1 ^ in2) ^ in3 ^ in4) ^ temp1[WIDTH-1:0];
    assign carry = ((in1 ^ in2) ^ in3 ^ in4) & temp1[WIDTH-1:0] | in4 & ~((in1 ^ in2) ^ in3 ^ in4);
    assign cout = temp1[WIDTH];
endmodule




