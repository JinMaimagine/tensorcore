`timescale 1ns / 1ps



module PreNormalizer #(
    parameter PARM_EXP  = 8,
    parameter PARM_MANT = 23,
    parameter PARM_BIAS = 127
) (
    input A_sign_i,
    input B_sign_i,
    input C_sign_i,
    input Sub_Sign_i,
    input [PARM_EXP - 1 : 0] A_Exp_i,
    input [PARM_EXP - 1 : 0] B_Exp_i,
    input [PARM_EXP - 1 : 0] C_Exp_i,
    input [PARM_MANT : 0] A_Mant_i,
    input Sign_flip_i, 
    input Mv_halt_i,
    input [PARM_EXP + 1 : 0] Exp_mv_i,
    input Exp_mv_sign_i,

    output Sign_aligned_o,
    output [PARM_EXP + 1: 0] Exp_aligned_o,
    output reg [74 : 0] A_Mant_aligned_o,
    output reg Mant_sticky_sht_out_o
    );
    

    wire [73 : 0] A_Mant_aligned;
    wire [PARM_MANT : 0] Drop_bits;
    assign {A_Mant_aligned, Drop_bits} = {A_Mant_i, 74'd0} >> (Mv_halt_i ? 0 : Exp_mv_i);

    //output logic for aligner
    assign Sign_aligned_o = (Exp_mv_sign_i)? A_sign_i : B_sign_i ^ C_sign_i;
    assign Exp_aligned_o = (Exp_mv_sign_i)? A_Exp_i : (B_Exp_i + C_Exp_i - PARM_BIAS + 27); // exponent = (expB + expC -127) + point distance(= 27)
    
    //output logic for A_Mant_aligned_o
    always @(*) begin
        if(Exp_mv_sign_i)
            A_Mant_aligned_o = (A_Mant_i << 50);
        else if(~Mv_halt_i)
            A_Mant_aligned_o = {Sub_Sign_i, {74{Sub_Sign_i}}^A_Mant_aligned};
        else 
            A_Mant_aligned_o = 0;
    end


    wire [PARM_MANT : 0] A_Mant_2compelemnt = (~A_Mant_i) + 1; //2's complement of mantA
    wire [PARM_MANT : 0] Drop_bits_2complement = (~Drop_bits) + 1; //2's complemet of Drop_bits
    
    //output logic for Mant_sticky_sht_out_o
    always @(*) begin
        if(Sub_Sign_i & (~Sign_flip_i))
            Mant_sticky_sht_out_o = (Mv_halt_i)? (|A_Mant_2compelemnt) : (|Drop_bits_2complement);
        else
            Mant_sticky_sht_out_o = (Mv_halt_i)? (|A_Mant_i) : (|Drop_bits);
    end

endmodule
