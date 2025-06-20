module mult_INT8 (
        input logic [7:0] IN1,
        input logic [7:0] IN2,
        input logic [0:0] IN3, //redundant
        //output logic design_is_correct, // is set to 1 iff the output of DT_SB4_LF_8x8_noX matches its spec.
        output logic [15:0] design_res
        //output logic [15:0] spec_res
        );
    
    //assign spec_res = signed'(IN1) * signed'(IN2);
    DT_SB4_LF_8x8_noX mult(IN1, IN2, design_res);
    //assign design_is_correct = ((spec_res == design_res) ? 1 : 0);
    
endmodule



module DT_SB4_LF_8x8_noX(
        input logic [7:0] IN1,
        input logic [7:0] IN2,
        output logic [15:0] result);
    
    
// Creating Partial Products 

    wire [7:0] mult = IN1;
    wire [7:0] mcand = IN2;
    wire [8:0] mcand_1x;
    wire [8:0] mcand_2x;
    assign mcand_1x = {{1{mcand[7]}},  mcand};
    assign mcand_2x = {{0{mcand[7]}},  mcand, 1'b0};
    
    // Booth Radix-4 Partial Products. Multiplier selectors: mult[1] mult[0] 1'b0
    wire logic select_0_0, select_e_0, select_2x_0, tcomp0, select_ne_0, select_n2x_0;
    assign select_0_0 =  &{mult[1], mult[0], 1'b0} | ~|{mult[1], mult[0], 1'b0};
    assign select_e_0 = ((~ mult[1]) & (mult[0] ^ 1'b0));
    assign select_ne_0 = mult[1] &  (mult[0] ^ 1'b0);
    assign select_2x_0 = (~ mult[1]) & mult[0] & 1'b0;
    assign select_n2x_0 = mult[1] & (~ mult[0]) & (~ 1'b0);
    reg [8:0] pp_0;
    always @(*) begin
       case (1'b1)
          select_0_0   : pp_0 = 0; 
          select_e_0   : pp_0 = mcand_1x; 
          select_2x_0  : pp_0 = mcand_2x; 
          select_n2x_0 : pp_0 = (~ mcand_2x); 
          select_ne_0  : pp_0 = (~ mcand_1x); 
          default  : pp_0 = 0; 
       endcase 
       pp_0[8] = ~pp_0[8]; // flip the MSB 
    end
    assign tcomp0 =  select_n2x_0 | select_ne_0;
    
    // Booth Radix-4 Partial Products. Multiplier selectors: mult[3] mult[2] mult[1]
    wire logic select_0_1, select_e_1, select_2x_1, tcomp1, select_ne_1, select_n2x_1;
    assign select_0_1 =  &{mult[3], mult[2], mult[1]} | ~|{mult[3], mult[2], mult[1]};
    assign select_e_1 = ((~ mult[3]) & (mult[2] ^ mult[1]));
    assign select_ne_1 = mult[3] &  (mult[2] ^ mult[1]);
    assign select_2x_1 = (~ mult[3]) & mult[2] & mult[1];
    assign select_n2x_1 = mult[3] & (~ mult[2]) & (~ mult[1]);
    reg [8:0] pp_1;
    always @(*) begin
       case (1'b1)
          select_0_1   : pp_1 = 0; 
          select_e_1   : pp_1 = mcand_1x; 
          select_2x_1  : pp_1 = mcand_2x; 
          select_n2x_1 : pp_1 = (~ mcand_2x); 
          select_ne_1  : pp_1 = (~ mcand_1x); 
          default  : pp_1 = 0; 
       endcase 
       pp_1[8] = ~pp_1[8]; // flip the MSB 
    end
    assign tcomp1 =  select_n2x_1 | select_ne_1;
    
    // Booth Radix-4 Partial Products. Multiplier selectors: mult[5] mult[4] mult[3]
    wire logic select_0_2, select_e_2, select_2x_2, tcomp2, select_ne_2, select_n2x_2;
    assign select_0_2 =  &{mult[5], mult[4], mult[3]} | ~|{mult[5], mult[4], mult[3]};
    assign select_e_2 = ((~ mult[5]) & (mult[4] ^ mult[3]));
    assign select_ne_2 = mult[5] &  (mult[4] ^ mult[3]);
    assign select_2x_2 = (~ mult[5]) & mult[4] & mult[3];
    assign select_n2x_2 = mult[5] & (~ mult[4]) & (~ mult[3]);
    reg [8:0] pp_2;
    always @(*) begin
       case (1'b1)
          select_0_2   : pp_2 = 0; 
          select_e_2   : pp_2 = mcand_1x; 
          select_2x_2  : pp_2 = mcand_2x; 
          select_n2x_2 : pp_2 = (~ mcand_2x); 
          select_ne_2  : pp_2 = (~ mcand_1x); 
          default  : pp_2 = 0; 
       endcase 
       pp_2[8] = ~pp_2[8]; // flip the MSB 
    end
    assign tcomp2 =  select_n2x_2 | select_ne_2;
    
    // Booth Radix-4 Partial Products. Multiplier selectors: mult[7] mult[6] mult[5]
    wire logic select_0_3, select_e_3, select_2x_3, tcomp3, select_ne_3, select_n2x_3;
    assign select_0_3 =  &{mult[7], mult[6], mult[5]} | ~|{mult[7], mult[6], mult[5]};
    assign select_e_3 = ((~ mult[7]) & (mult[6] ^ mult[5]));
    assign select_ne_3 = mult[7] &  (mult[6] ^ mult[5]);
    assign select_2x_3 = (~ mult[7]) & mult[6] & mult[5];
    assign select_n2x_3 = mult[7] & (~ mult[6]) & (~ mult[5]);
    reg [8:0] pp_3;
    always @(*) begin
       case (1'b1)
          select_0_3   : pp_3 = 0; 
          select_e_3   : pp_3 = mcand_1x; 
          select_2x_3  : pp_3 = mcand_2x; 
          select_n2x_3 : pp_3 = (~ mcand_2x); 
          select_ne_3  : pp_3 = (~ mcand_1x); 
          default  : pp_3 = 0; 
       endcase 
       pp_3[8] = ~pp_3[8]; // flip the MSB 
    end
    assign tcomp3 =  select_n2x_3 | select_ne_3;
    
    // The values to be summed in the summation tree, from LSB (left) to MSB:
     // pp_0[0] pp_0[1] pp_0[2] pp_0[3] pp_0[4] pp_0[5] pp_0[6] pp_0[7] pp_0[8]   --      --      --      --      --      --      --    
     //   --      --    pp_1[0] pp_1[1] pp_1[2] pp_1[3] pp_1[4] pp_1[5] pp_1[6] pp_1[7] pp_1[8]   --      --      --      --      --    
     //   --      --      --      --    pp_2[0] pp_2[1] pp_2[2] pp_2[3] pp_2[4] pp_2[5] pp_2[6] pp_2[7] pp_2[8]   --      --      --    
     //   --      --      --      --      --      --    pp_3[0] pp_3[1] pp_3[2] pp_3[3] pp_3[4] pp_3[5] pp_3[6] pp_3[7] pp_3[8]   --    
     // tcomp0    --    tcomp1    --    tcomp2    --    tcomp3    --      --      --      --      --      --      --      --      --    
     //   --      --      --      --      --      --      --      --    1'b1    1'b1      --    1'b1      --    1'b1      --    1'b1    
    
// Creating Summation Tree 

    
    // Dadda Summation Stage 1
    logic s0 ,c0;
    ha ha0 (pp_0[6], pp_1[4], s0, c0);
    logic s1 ,c1;
    ha ha1 (pp_0[7], pp_1[5], s1, c1);
    logic s2 ,c2; 
    fa fa2 (pp_0[8], pp_1[6], pp_2[4], s2, c2);
    logic s3 ,c3;
    ha ha3 (pp_1[7], pp_2[5], s3, c3);
    
    // Dadda Summation Stage 2
    logic s4 ,c4;
    ha ha4 (pp_0[4], pp_1[2], s4, c4);
    logic s5 ,c5;
    ha ha5 (pp_0[5], pp_1[3], s5, c5);
    logic s6 ,c6; 
    fa fa6 (pp_2[2], pp_3[0], tcomp3, s6, c6);
    logic s7 ,c7; 
    fa fa7 (pp_2[3], pp_3[1], c0, s7, c7);
    logic s8 ,c8; 
    fa fa8 (pp_3[2], 1'b1, c1, s8, c8);
    logic s9 ,c9; 
    fa fa9 (pp_3[3], 1'b1, c2, s9, c9);
    logic s10 ,c10; 
    fa fa10 (pp_1[8], pp_2[6], pp_3[4], s10, c10);
    logic s11 ,c11;
    ha ha11 (pp_2[7], pp_3[5], s11, c11);
    
    // Dadda Summation Stage 3
    logic s12 ,c12;
    ha ha12 (pp_0[2], pp_1[0], s12, c12);
    logic s13 ,c13;
    ha ha13 (pp_0[3], pp_1[1], s13, c13);
    logic s14 ,c14; 
    fa fa14 (pp_2[0], tcomp2, s4, s14, c14);
    logic s15 ,c15; 
    fa fa15 (pp_2[1], c4, s5, s15, c15);
    logic s16 ,c16; 
    fa fa16 (s0, c5, s6, s16, c16);
    logic s17 ,c17; 
    fa fa17 (s1, c6, s7, s17, c17);
    logic s18 ,c18; 
    fa fa18 (s2, c7, s8, s18, c18);
    logic s19 ,c19; 
    fa fa19 (s3, c8, s9, s19, c19);
    logic s20 ,c20; 
    fa fa20 (c3, c9, s10, s20, c20);
    logic s21 ,c21; 
    fa fa21 (1'b1, c10, s11, s21, c21);
    logic s22 ,c22; 
    fa fa22 (pp_2[8], pp_3[6], c11, s22, c22);
    logic s23 ,c23;
    ha ha23 (pp_3[7], 1'b1, s23, c23);
    
    logic [16:0] adder_result;
    LF_16 final_adder ({1'b1, pp_3[8], c22, c21, c20, c19, c18, c17, c16, c15, c14, c13, c12, tcomp1, pp_0[1], pp_0[0] }, {1'b0, c23, s23, s22, s21, s20, s19, s18, s17, s16, s15, s14, s13, s12, 1'b0, tcomp0 }, adder_result );
    assign result[15:0] = adder_result[15:0];
endmodule



module LF_16 ( 
        input logic [15:0] IN1,
        input logic [15:0] IN2,
        output logic [16:0] OUT);
    
    wire logic [15:0] p_0;
    wire logic [15:0] g_0;
    assign g_0 = IN1 & IN2;
    assign p_0 = IN1 ^ IN2;
    
// Ladner-Fischer Adder 

    
    // LF stage 1
    wire logic p_1_1;
    wire logic g_1_1;
    assign p_1_1 = p_0[1] & p_0[0];
    assign g_1_1 = (p_0[1] & g_0[0]) | g_0[1];
    wire logic p_1_3;
    wire logic g_1_3;
    assign p_1_3 = p_0[3] & p_0[2];
    assign g_1_3 = (p_0[3] & g_0[2]) | g_0[3];
    wire logic p_1_5;
    wire logic g_1_5;
    assign p_1_5 = p_0[5] & p_0[4];
    assign g_1_5 = (p_0[5] & g_0[4]) | g_0[5];
    wire logic p_1_7;
    wire logic g_1_7;
    assign p_1_7 = p_0[7] & p_0[6];
    assign g_1_7 = (p_0[7] & g_0[6]) | g_0[7];
    wire logic p_1_9;
    wire logic g_1_9;
    assign p_1_9 = p_0[9] & p_0[8];
    assign g_1_9 = (p_0[9] & g_0[8]) | g_0[9];
    wire logic p_1_11;
    wire logic g_1_11;
    assign p_1_11 = p_0[11] & p_0[10];
    assign g_1_11 = (p_0[11] & g_0[10]) | g_0[11];
    wire logic p_1_13;
    wire logic g_1_13;
    assign p_1_13 = p_0[13] & p_0[12];
    assign g_1_13 = (p_0[13] & g_0[12]) | g_0[13];
    wire logic p_1_15;
    wire logic g_1_15;
    assign p_1_15 = p_0[15] & p_0[14];
    assign g_1_15 = (p_0[15] & g_0[14]) | g_0[15];
    
    // LF stage 2
    wire logic p_2_2;
    wire logic g_2_2;
    assign p_2_2 = p_0[2] & p_1_1;
    assign g_2_2 = (p_0[2] & g_1_1) | g_0[2];
    wire logic p_2_3;
    wire logic g_2_3;
    assign p_2_3 = p_1_3 & p_1_1;
    assign g_2_3 = (p_1_3 & g_1_1) | g_1_3;
    wire logic p_2_6;
    wire logic g_2_6;
    assign p_2_6 = p_0[6] & p_1_5;
    assign g_2_6 = (p_0[6] & g_1_5) | g_0[6];
    wire logic p_2_7;
    wire logic g_2_7;
    assign p_2_7 = p_1_7 & p_1_5;
    assign g_2_7 = (p_1_7 & g_1_5) | g_1_7;
    wire logic p_2_10;
    wire logic g_2_10;
    assign p_2_10 = p_0[10] & p_1_9;
    assign g_2_10 = (p_0[10] & g_1_9) | g_0[10];
    wire logic p_2_11;
    wire logic g_2_11;
    assign p_2_11 = p_1_11 & p_1_9;
    assign g_2_11 = (p_1_11 & g_1_9) | g_1_11;
    wire logic p_2_14;
    wire logic g_2_14;
    assign p_2_14 = p_0[14] & p_1_13;
    assign g_2_14 = (p_0[14] & g_1_13) | g_0[14];
    wire logic p_2_15;
    wire logic g_2_15;
    assign p_2_15 = p_1_15 & p_1_13;
    assign g_2_15 = (p_1_15 & g_1_13) | g_1_15;
    
    // LF stage 3
    wire logic p_3_4;
    wire logic g_3_4;
    assign p_3_4 = p_0[4] & p_2_3;
    assign g_3_4 = (p_0[4] & g_2_3) | g_0[4];
    wire logic p_3_5;
    wire logic g_3_5;
    assign p_3_5 = p_1_5 & p_2_3;
    assign g_3_5 = (p_1_5 & g_2_3) | g_1_5;
    wire logic p_3_6;
    wire logic g_3_6;
    assign p_3_6 = p_2_6 & p_2_3;
    assign g_3_6 = (p_2_6 & g_2_3) | g_2_6;
    wire logic p_3_7;
    wire logic g_3_7;
    assign p_3_7 = p_2_7 & p_2_3;
    assign g_3_7 = (p_2_7 & g_2_3) | g_2_7;
    wire logic p_3_12;
    wire logic g_3_12;
    assign p_3_12 = p_0[12] & p_2_11;
    assign g_3_12 = (p_0[12] & g_2_11) | g_0[12];
    wire logic p_3_13;
    wire logic g_3_13;
    assign p_3_13 = p_1_13 & p_2_11;
    assign g_3_13 = (p_1_13 & g_2_11) | g_1_13;
    wire logic p_3_14;
    wire logic g_3_14;
    assign p_3_14 = p_2_14 & p_2_11;
    assign g_3_14 = (p_2_14 & g_2_11) | g_2_14;
    wire logic p_3_15;
    wire logic g_3_15;
    assign p_3_15 = p_2_15 & p_2_11;
    assign g_3_15 = (p_2_15 & g_2_11) | g_2_15;
    
    // LF stage 4
    wire logic p_4_8;
    wire logic g_4_8;
    assign p_4_8 = p_0[8] & p_3_7;
    assign g_4_8 = (p_0[8] & g_3_7) | g_0[8];
    wire logic p_4_9;
    wire logic g_4_9;
    assign p_4_9 = p_1_9 & p_3_7;
    assign g_4_9 = (p_1_9 & g_3_7) | g_1_9;
    wire logic p_4_10;
    wire logic g_4_10;
    assign p_4_10 = p_2_10 & p_3_7;
    assign g_4_10 = (p_2_10 & g_3_7) | g_2_10;
    wire logic p_4_11;
    wire logic g_4_11;
    assign p_4_11 = p_2_11 & p_3_7;
    assign g_4_11 = (p_2_11 & g_3_7) | g_2_11;
    wire logic p_4_12;
    wire logic g_4_12;
    assign p_4_12 = p_3_12 & p_3_7;
    assign g_4_12 = (p_3_12 & g_3_7) | g_3_12;
    wire logic p_4_13;
    wire logic g_4_13;
    assign p_4_13 = p_3_13 & p_3_7;
    assign g_4_13 = (p_3_13 & g_3_7) | g_3_13;
    wire logic p_4_14;
    wire logic g_4_14;
    assign p_4_14 = p_3_14 & p_3_7;
    assign g_4_14 = (p_3_14 & g_3_7) | g_3_14;
    wire logic p_4_15;
    wire logic g_4_15;
    assign p_4_15 = p_3_15 & p_3_7;
    assign g_4_15 = (p_3_15 & g_3_7) | g_3_15;
    
    // LF postprocess 
    assign OUT[0] = p_0[0];
    assign OUT[1] = p_0[1] ^ g_0[0];
    assign OUT[2] = p_0[2] ^ g_1_1;
    assign OUT[3] = p_0[3] ^ g_2_2;
    assign OUT[4] = p_0[4] ^ g_2_3;
    assign OUT[5] = p_0[5] ^ g_3_4;
    assign OUT[6] = p_0[6] ^ g_3_5;
    assign OUT[7] = p_0[7] ^ g_3_6;
    assign OUT[8] = p_0[8] ^ g_3_7;
    assign OUT[9] = p_0[9] ^ g_4_8;
    assign OUT[10] = p_0[10] ^ g_4_9;
    assign OUT[11] = p_0[11] ^ g_4_10;
    assign OUT[12] = p_0[12] ^ g_4_11;
    assign OUT[13] = p_0[13] ^ g_4_12;
    assign OUT[14] = p_0[14] ^ g_4_13;
    assign OUT[15] = p_0[15] ^ g_4_14;
    assign OUT[16] = g_4_15;
endmodule

module LF_16_spec (
        input logic [15:0] IN1,
        input logic [15:0] IN2,
        output logic adder_correct,
        output logic [16:0] spec_res);
    
    assign spec_res = IN1 + IN2;
    wire [16:0] adder_res;
    LF_16 adder(IN1, IN2, adder_res);
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




