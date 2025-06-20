`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//  Engineer:        Tzu-Han Hsu
//  Create Date:     07/21/2022 03:34:32 PM
//  Module Name:     MAC32_top
//  Project Name:    IEEE-754 & RISC-V Compatible Multiply-Accumulate Unit
//  HDL(Version):    Verilog-2005
//
//  Dependencies:    SpecialCaseDetector.v
//                   R4Booth.v
//                   WallaceTree.v
//                   PreNormalizer.v
//                   Compressor32.v
//                   EACAdder.v
//                   MSBIncrementer.v
//                   LeadingOneDetector_Top.v
//                   Normalizer.v
//                   Rounder.v
//////////////////////////////////////////////////////////////////////////////////
//  Description: 
// 
//////////////////////////////////////////////////////////////////////////////////
//  Revision:
//  08/12/2022 - Update mv_halt signal, now zero is viewed as the smalest denormalized number.
//  08/14/2022 - Stable non-pipelined build (v1.0)
//  08/15/2022 - R4Booth and Wallace Tree update
//  08/16/2022 - Instantiation name start with UpperCase
//  09/12/2022 - Add BSD-3-Clause Licence
//   
//////////////////////////////////////////////////////////////////////////////////
//  License information:
//
//  This software is released under the BSD-3-Clause Licence,
//  see https://opensource.org/licenses/BSD-3-Clause for details.
//  In the following license statements, "software" refers to the
//  "source code" of the complete hardware/software system.
//
//  Copyright 2022,
//                    Embedded Intelligent Systems Lab (EISL)
//                    Deparment of Computer Science
//                    National Yang Ming Chiao Tung Uniersity
//                    Hsinchu, Taiwan.
//
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//  2. Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//  3. Neither the name of the copyright holder nor the names of its contributors
//     may be used to endorse or promote products derived from this software
//     without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
//  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
//////////////////////////////////////////////////////////////////////////////////
//  Additional Comments:
//
//  Floating-point control and status register:
//  |31     8|7                     5|4                            0|
//  |reserved|  Rounding Mode (frm)  |  Accured Exceptions(fflags)  |
//                                          NV  DZ  OF  UF  NX
//
//  Rounding mode encoding:
//  Rounding Mode|    Mnemonic    |   Meaning
//  -------------------------------------------------------------------------------------------
//       000     |    RNE         |   Round to Nearest, ties to Even
//       001     |    RTZ         |   Round towards Zero
//       010     |    RDN         |   Round Down    (towards -INFINITY)
//       011     |    RUP         |   Round UP      (towards +INFINITY)
//       100     |    RMM         |   Round to Nearest, ties Max Magnitude
//       101     |    ---         |   Invalid. Reserved for future use
//       110     |    ---         |   Invalid. Reserved for future use
//       111     |    DYN         |   In instruction's rm field, selects dynamic rounding mode;
//                                      In Rounding Mode register, Invalid
//
//  Accrued exception flag encoding:
//  Flag Mnemonic   |   Flag Meaning
//  --------------------------------------
//      NV          |   Invalid Operation
//      DZ          |   Divide by Zero
//      OF          |   Overflow
//      UF          |   Underflow
//      NX          |   Inexact
//
//////////////////////////////////////////////////////////////////////////////////

`include "EACAdder.v"
`include "PreNormalizer.v"
`include "SpecialCaseDetector.v"
`include "ZeroDetector_Group.v"
`include "Compressor32.v"
`include "FullAdder.v"
`include "MSBIncrementer.v"
`include "R4Booth.v"
`include "WallaceTree.v"
`include "Compressor42.v"
`include "LeadingOneDetector_Top.v"
`include "Normalizer.v"
`include "Rounder.v"
`include "ZeroDetector_Base.v"
module MAC32_top #(
    parameter PARM_RM       = 3,
    parameter PARM_XLEN     = 32,
    parameter PARM_RM_RNE   = 3'b000,
    parameter PARM_RM_RTZ   = 3'b001,
    parameter PARM_RM_RDN   = 3'b010,
    parameter PARM_RM_RUP   = 3'b011,
    parameter PARM_RM_RMM   = 3'b100
) (
    //input clk_i,
    //input rst_i,
    //input stall_i,
    //input req_i,

    input [PARM_RM - 1 : 0] Rounding_mode_i,

    input [PARM_XLEN - 1 : 0] A_i,
    input [PARM_XLEN - 1 : 0] B_i,
    input [PARM_XLEN - 1 : 0] C_i,

    output [PARM_XLEN - 1 : 0] Result_o, // T (result_o) = A + (B * C)
    //output ready_o,
    
    //Accrued exceptions (fflags)
    output NV_o,
    //output DZ_o,  //would not occur in Multiplication or Addition
    output OF_o,
    output UF_o,
    output NX_o );


    parameter PARM_EXP          = 8;
    parameter PARM_MANT         = 23;
    parameter PARM_BIAS         = 127;
    parameter PARM_LEADONE_WIDTH = 7;
    parameter PARM_EXP_ONE      = 8'h01; 
    parameter PARM_MANT_NAN     = 23'b100_0000_0000_0000_0000_0000; //RISC-V defines canonical NaN to be 0x7fc0_0000


    //inputs wires of specialCaseDetectors
    wire A_Leadingbit = | A_i[PARM_XLEN - 2 : PARM_MANT]; //normalized number has leading 1, denormalized with leading 0
    wire B_Leadingbit = | B_i[PARM_XLEN - 2 : PARM_MANT];
    wire C_Leadingbit = | C_i[PARM_XLEN - 2 : PARM_MANT];
    //outputs wires of specialCaseDetectors
    wire A_Inf, B_Inf, C_Inf;
    wire A_Zero, B_Zero, C_Zero;
    wire A_NaN, B_NaN, C_NaN;
    wire A_DeN, B_DeN, C_DeN;
    

    SpecialCaseDetector #(
        .PARM_XLEN(PARM_XLEN),
        .PARM_EXP(PARM_EXP),
        .PARM_MANT(PARM_MANT)
        ) SpecialCaseDetector (
        .A_i(A_i),
        .B_i(B_i),
        .C_i(C_i),
        .A_Leadingbit_i(A_Leadingbit),
        .B_Leadingbit_i(B_Leadingbit),
        .C_Leadingbit_i(C_Leadingbit),
        
        .A_Inf_o(A_Inf),
        .B_Inf_o(B_Inf),
        .C_Inf_o(C_Inf),
        .A_Zero_o(A_Zero),
        .B_Zero_o(B_Zero),
        .C_Zero_o(C_Zero),
        .A_NaN_o(A_NaN),
        .B_NaN_o(B_NaN),
        .C_NaN_o(C_NaN),
        .A_DeN_o(A_DeN),
        .B_DeN_o(B_DeN),
        .C_DeN_o(C_DeN)
    );


    wire A_Sign = A_i[PARM_XLEN - 1];
    wire B_Sign = B_i[PARM_XLEN - 1];
    wire C_Sign = C_i[PARM_XLEN - 1];
    wire Sub_Sign = A_Sign ^ B_Sign ^ C_Sign; // indicator of effective subtraction

    //denormalized number has exponent 1 
    wire [PARM_EXP - 1: 0] A_Exp = A_DeN? PARM_EXP_ONE : A_i[PARM_XLEN - 2 : PARM_MANT];
    wire [PARM_EXP - 1: 0] B_Exp = B_DeN? PARM_EXP_ONE : B_i[PARM_XLEN - 2 : PARM_MANT];
    wire [PARM_EXP - 1: 0] C_Exp = C_DeN? PARM_EXP_ONE : C_i[PARM_XLEN - 2 : PARM_MANT];
    
    wire [PARM_MANT : 0] A_Mant = {A_Leadingbit, A_i[PARM_MANT - 1 : 0]};
    wire [PARM_MANT : 0] B_Mant = {B_Leadingbit, B_i[PARM_MANT - 1 : 0]};
    wire [PARM_MANT : 0] C_Mant = {C_Leadingbit, C_i[PARM_MANT - 1 : 0]};

    //Generate 13 Partial Product by Radix-4 Booth's Algorithm
    wire [2*PARM_MANT + 2 : 0] booth_PP [12 - 1: 0];
    wire [2*PARM_MANT + 1 : 0] booth_PP_13; //Partial Product's MSB is always 0
    

    R4Booth #(
        .PARM_MANT(PARM_MANT)
    ) R4Booth (
        .MantA_i(B_Mant),
        .MantB_i(C_Mant),
        
        .pp_00_o(booth_PP[ 0]),
        .pp_01_o(booth_PP[ 1]),
        .pp_02_o(booth_PP[ 2]),
        .pp_03_o(booth_PP[ 3]),
        .pp_04_o(booth_PP[ 4]),
        .pp_05_o(booth_PP[ 5]),
        .pp_06_o(booth_PP[ 6]),
        .pp_07_o(booth_PP[ 7]),
        .pp_08_o(booth_PP[ 8]),
        .pp_09_o(booth_PP[ 9]),
        .pp_10_o(booth_PP[10]),
        .pp_11_o(booth_PP[11]),
        .pp_12_o(booth_PP_13)
    );


    //Sum 13 partial Product by Wallace Tree
    wire [2*PARM_MANT + 2 : 0] Wallace_sum;
    wire [2*PARM_MANT + 2 : 0] Wallace_carry;
    wire Wallace_suppression_sign_extension;


    WallaceTree #(
        .PARM_MANT(PARM_MANT)
    ) WallaceTree (
        .pp_00_i(booth_PP[ 0]),
        .pp_01_i(booth_PP[ 1]),
        .pp_02_i(booth_PP[ 2]),
        .pp_03_i(booth_PP[ 3]),
        .pp_04_i(booth_PP[ 4]),
        .pp_05_i(booth_PP[ 5]),
        .pp_06_i(booth_PP[ 6]),
        .pp_07_i(booth_PP[ 7]),
        .pp_08_i(booth_PP[ 8]),
        .pp_09_i(booth_PP[ 9]),
        .pp_10_i(booth_PP[10]),
        .pp_11_i(booth_PP[11]),
        .pp_12_i(booth_PP_13),
        
        .wallace_sum_o(Wallace_sum),
        .wallace_carry_o(Wallace_carry),
        .suppression_sign_extension_o(Wallace_suppression_sign_extension)
    );
    

    //Prenormalization of the augend, in parallel with multiplication.
    //global signals ...
    wire Sign_aligned;
    wire Exp_mv_sign;
    wire Mv_halt;

    //Exponent Processor
    //d = expA - (expB + expC - bias[127])
    //mv = 27 - d = expB + expC - expA + 100
    
    wire [PARM_EXP + 1 : 0] Exp_mv = 27 - A_Exp + B_Exp + C_Exp - PARM_BIAS; // d = expA - (expB + expC - 127), mv = 27 - d 
    wire [PARM_EXP + 1 : 0] Exp_mv_neg = -27 + A_Exp - B_Exp - C_Exp + PARM_BIAS;

    assign Exp_mv_sign = Exp_mv[PARM_EXP + 1]; // the sign bit of the mv parameter, Sign_amt_DO
    
    //Revision 2.00 - Update mv_halt signal, now zero is viewed as the smalest denormalized number.
    //right shift(+) is out of range, which is 74 or more
    assign Mv_halt = ((~Exp_mv_sign) & (Exp_mv[PARM_EXP : 0] > 73))|| A_Zero; 

    //signals for prenormalizer:
    wire SignFlip_ADD_PRN;
    
    wire [3*PARM_MANT + 5 : 0] A_Mant_aligned;
    wire [PARM_MANT + 3 : 0] A_Mant_aligned_high = A_Mant_aligned[3*PARM_MANT + 5 : 2*PARM_MANT + 2];
    wire [2*PARM_MANT + 1 : 0] A_Mant_aligned_low = A_Mant_aligned[2*PARM_MANT + 1 : 0];
    
    wire signed [PARM_EXP + 1 : 0] Exp_aligned;
    wire Mant_sticky_sht_out;


    PreNormalizer #(
        .PARM_EXP(PARM_EXP),
        .PARM_MANT(PARM_MANT),
        .PARM_BIAS(PARM_BIAS)
        ) PreNormalizer (
        .A_sign_i(A_Sign),
        .B_sign_i(B_Sign),
        .C_sign_i(C_Sign),
        .Sub_Sign_i(Sub_Sign),
        .A_Exp_i(A_Exp),
        .B_Exp_i(B_Exp),
        .C_Exp_i(C_Exp),
        .A_Mant_i(A_Mant),
        .Sign_flip_i(SignFlip_ADD_PRN), 
        .Mv_halt_i(Mv_halt),
        .Exp_mv_i(Exp_mv),
        .Exp_mv_sign_i(Exp_mv_sign),

        .A_Mant_aligned_o(A_Mant_aligned),
        .Exp_aligned_o(Exp_aligned),
        .Sign_aligned_o(Sign_aligned),
        .Mant_sticky_sht_out_o(Mant_sticky_sht_out)
    );


    //adjust wallace sum to send in... 
    wire [2*PARM_MANT + 2 : 0] Wallace_sum_adjusted;
    wire [2*PARM_MANT + 2 : 0] Wallace_carry_adjusted;
    
    assign Wallace_sum_adjusted = (Exp_mv_sign)? 0 : Wallace_sum;
    assign Wallace_carry_adjusted = (Exp_mv_sign) ? 0 : Wallace_carry;

    //Sums the Wallace outputs with A_Low
    wire [2*PARM_MANT + 1 : 0] CSA_sum;
    wire [2*PARM_MANT + 1 : 0] CSA_carry;
    
    Compressor32 #(
        .XLEN(2*PARM_MANT + 2)
        ) CarrySaveAdder (
        .A_i(A_Mant_aligned_low), //A_low
        .B_i(Wallace_sum_adjusted[2*PARM_MANT + 1 : 0]),
        .C_i({Wallace_carry_adjusted[2*PARM_MANT : 0], 1'b0}),

        .Sum_o(CSA_sum),
        .Carry_o(CSA_carry)
    );

    //correction based sign extenson is also in grand-adder.    
    //output signals
    reg [73 : 0] PosSum;
    wire Minus_sticky_bit;
    
    wire Adder_sign; //global signal for Sign_out_D

    //End Around Carry Adders, LSBs

    wire wallace_msb_G = Wallace_sum_adjusted[2*PARM_MANT + 2] & Wallace_carry_adjusted[2*PARM_MANT + 1];
    //if Wallace's msb is 1, or will carry to 1
    wire adder_Correlated_sign = Wallace_suppression_sign_extension | Wallace_carry_adjusted[2*PARM_MANT + 2] | wallace_msb_G;
    wire Carry_postcor = (~Exp_mv_sign) & ((~adder_Correlated_sign) ^ CSA_carry[2*PARM_MANT + 1]);
    
    wire [2*PARM_MANT + 1 : 0] low_sum;
    wire low_carry;
    wire [2*PARM_MANT + 1 : 0] low_sum_inv;
    wire low_carry_inv;


    EACAdder #(
        .PARM_MANT(PARM_MANT)
        ) EACAdder (
        .CSA_sum_i(CSA_sum),
        .CSA_carry_i(CSA_carry),
        .Carry_postcor_i(Carry_postcor),
        .Sub_Sign_i(Sub_Sign),
        .A_Zero_i(A_Zero),//This is added to deal with false Sub_Sign_i(If a is -0)

        .low_sum_o(low_sum),
        .low_carry_o(low_carry),
        .low_sum_inv_o(low_sum_inv),
        .low_carry_inv_o(low_carry_inv)
    );


    //Incrementer, Work on MSBs
    wire [PARM_MANT + 3 : 0]high_sum;
    wire [PARM_MANT + 3 : 0]high_sum_inv;


    MSBIncrementer #(
        .PARM_MANT(PARM_MANT)
        ) MSBIncrementer (
        .low_carry_i(low_carry),
        .low_carry_inv_i(low_carry_inv),
        .A_Mant_aligned_high_i(A_Mant_aligned_high), 

        .high_sum_o(high_sum),
        .high_sum_inv_o(high_sum_inv)
    );


    wire bc_not_strange = ~(B_Inf | C_Inf | B_Zero | C_Zero | B_NaN | C_NaN);
    wire [3*PARM_MANT + 4 : 0] sub_minus = {{A_Mant_aligned_high[PARM_MANT+2 : 0], 1'b0} - bc_not_strange, 47'd0};

    //Output of the Adder stage...
    assign SignFlip_ADD_PRN = high_sum[PARM_MANT + 3];
    assign Adder_sign = Exp_mv_sign? Sign_aligned: (SignFlip_ADD_PRN ^ Sign_aligned);
    
    always @(*) begin
        if(Mv_halt)
            PosSum = {{26'd0}, low_sum};
        else if(Exp_mv_sign) //b*c does not participate
            PosSum = Sub_Sign? sub_minus : {A_Mant_aligned_high[PARM_MANT+2 : 0], 48'd0};
        else if(SignFlip_ADD_PRN)
            PosSum = {high_sum_inv[PARM_MANT + 2 : 0], low_sum_inv};
        else
            PosSum = {high_sum[PARM_MANT + 2 : 0], low_sum};
    end


    // for Sign_amt_DI=1'b1, if is difficult to compute combined with other cases. 
    // When addition,   | (b*c) ; when substruction, | (b*c) for rounding excption trunction. 
    assign Minus_sticky_bit = Exp_mv_sign && (bc_not_strange);

    //leading one anticipator, detects the shift amount necessary for normalization
    wire [PARM_LEADONE_WIDTH - 1 : 0] shift_num;
    wire allzero;
    

    LeadingOneDetector_Top #(
        .X_LEN(74)
        ) LeadingOneDetector (
        .data_i(PosSum),

        .shift_num_o(shift_num),
        .allzero_o(allzero)
    );


    //Shift the exponent according to the result of LeadingOneDetector
    wire [3*PARM_MANT + 4 : 0] Mant_norm;
    wire [PARM_EXP + 1 : 0] Exp_norm;
    wire [PARM_EXP + 1 : 0] Exp_norm_mone;
    wire [PARM_EXP + 1 : 0] Exp_max_rs;
    wire [3*PARM_MANT + 6 : 0] Rs_Mant;

    Normalizer #(
        .PARM_EXP(PARM_EXP),
        .PARM_MANT(PARM_MANT),
        .PARM_LEADONE_WIDTH(PARM_LEADONE_WIDTH)
        ) Normalizer (
        .Mant_i(PosSum),
        .Exp_i(Exp_aligned),
        .Shift_num_i(shift_num),
        .Exp_mv_sign_i(Exp_mv_sign),

        .Mant_norm_o(Mant_norm),
        .Exp_norm_o(Exp_norm),
        .Exp_norm_mone_o(Exp_norm_mone),
        .Exp_max_rs_o(Exp_max_rs),
        .Rs_Mant_o(Rs_Mant)
    );

    wire Sign_result;
    wire [PARM_EXP - 1 : 0] Exp_result;
    wire [PARM_MANT - 1 : 0] Mant_result;

    assign Result_o = {Sign_result, Exp_result, Mant_result}; //outputlogic

    Rounder #(
    .PARM_RM(PARM_RM),     
    .PARM_RM_RNE(PARM_RM_RNE),       
    .PARM_RM_RTZ(PARM_RM_RTZ),       
    .PARM_RM_RDN(PARM_RM_RDN),       
    .PARM_RM_RUP(PARM_RM_RUP),       
    .PARM_RM_RMM(PARM_RM_RMM),       
    .PARM_MANT_NAN(PARM_MANT_NAN),     
    .PARM_EXP(PARM_EXP),          
    .PARM_MANT(PARM_MANT),         
    .PARM_LEADONE_WIDTH(PARM_LEADONE_WIDTH)
    ) Rounder (
    .Exp_i(Exp_aligned),
    .Sign_i(Adder_sign),
    .Allzero_i(allzero),
    .Exp_mv_sign_i(Exp_mv_sign),
    .Sub_Sign_i(Sub_Sign),
    .A_Exp_raw_i(A_i[PARM_XLEN - 2 : PARM_MANT]), // This is different from A_Exp, since we would like the "raw" bits
    .Rounding_mode_i(Rounding_mode_i),
    .A_Mant_i(A_Mant),
    .A_Sign_i(A_Sign),
    .B_Sign_i(B_Sign),
    .C_Sign_i(C_Sign),
    .A_DeN_i(A_DeN),
    .A_Inf_i(A_Inf),
    .B_Inf_i(B_Inf),
    .C_Inf_i(C_Inf),
    .A_Zero_i(A_Zero),
    .B_Zero_i(B_Zero),
    .C_Zero_i(C_Zero),
    .A_NaN_i(A_NaN),
    .B_NaN_i(B_NaN),
    .C_NaN_i(C_NaN),
    .Mant_sticky_sht_out_i(Mant_sticky_sht_out),
    .Minus_sticky_bit_i(Minus_sticky_bit),
    .Mant_norm_i(Mant_norm),
    .Exp_norm_i(Exp_norm),
    .Exp_norm_mone_i(Exp_norm_mone),
    .Exp_max_rs_i(Exp_max_rs),
    .Rs_Mant_i(Rs_Mant),

    .Sign_result_o(Sign_result),
    .Exp_result_o(Exp_result),
    .Mant_result_o(Mant_result),
    .Invalid_o(NV_o),
    .Overflow_o(OF_o),
    .Underflow_o(UF_o),
    .Inexact_o(NX_o)
    );

endmodule

