`timescale 1ns / 1ps
`include "MAC32_pipeline2_top.v" 
module MAC32_top_tb;
 parameter PARM_RM_RNE = 3'b000,
            PARM_RM_RTZ = 3'b001,
            PARM_RM_RDN = 3'b010,
            PARM_RM_RUP = 3'b011,
            PARM_RM_RMM = 3'b100;
reg              clk;
reg  [24:0]      label;
reg  [31:0]      a, b, c;
wire [31:0]      my_result;
wire             my_OF, my_UF, my_NX, my_NV;
reg  [2:0]       my_rm;
reg  [24:0]      wrong_answer;

initial clk = 0;
always #1 clk = ~clk;
//real sa, sb, sc, sans; 不支持,只能手动验证
wire [31:0] sans_wire;
MAC32_top uut_me (
    .Rounding_mode_i(my_rm),
    .A_i              (a),
    .B_i              (b),
    .C_i              (c),
    .mode            (1'b0),
    .Result_o         (my_result),
    .OF_o             (my_OF),
    .UF_o             (my_UF),
    .NX_o             (my_NX),
    .NV_o             (my_NV),
    .clk              (clk)
  );

initial begin
  $monitor("a = %h, b = %h, c = %h, my_result = %h, my_OF = %b, my_UF = %b, my_NX = %b, my_NV = %b", a, b, c, my_result, my_OF, my_UF, my_NX, my_NV);
end
initial begin
    $dumpfile("wave.vcd");
    $dumpvars(0);
end
initial begin
    #2;
    a = 32'h7fc00000; //NaN
    b = 32'hac822ea3; //-3.69999994185e-12
    c = 32'hcc03dec4; //-34568976.0

    #2;
    a = 32'h00012799; //-5.1000000667e-07
    b = 32'h00123472; //NaN
    c = 32'h00027796; //-34568976.0



    #2;
    a = 32'hb508e6ef; //-5.1000000667e-07
    b = 32'h00000000; //NaN
    c = 32'hcc03dec4; //-34568976.0

    #2;
    a = 32'hb508e6ef; //-5.1000000667e-07
    b = 32'h00000000; //NaN
    c = 32'hcc03dec4; //-34568976.0

    $finish;
end
endmodule