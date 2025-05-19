/* MAC_top.sv
   模块功能
-------------------------------------------------------------------------
|   mode.      |.     calculation.      |.   description.                    
|    000.      |.      fp16(normal)     |.IN1=fp16, IN2=fp16, IN3=fp16.      
|    001.      |.      fp16(mix).       |.IN1=fp16, IN2=fp16, IN3=fp32.      
|    010.      |.      fp32(normal).    |.IN1=fp32, IN2=fp32, IN3=fp32.      
|    011.      |.      int4(normal)     |.IN1=int4, IN2=int4, IN3=int4.        不用
|(none)100.    |.(none)int8(normal)     |.IN1=int8, IN2=int8, IN3=int8.        不用
|    100.      |.   输入IN3[127:0]       |.从低16位开始，相邻两个16位相加，输出32位*4  
|    101.      |.      int4(mix)        |.IN1=int4, IN2=int4, IN3=int16       
|    110.      |.      int8(mix)        |.IN1=int8, IN2=int8, IN3=int32       
-------------------------------------------------------------------------
*/
`include "MAC_ADDER.sv"
`include "MAC_FP.sv"
`include "MAC_IN3_Adjent16_add.sv"

module MAC_top#(
    parameter PARM_RM       = 3
)
(
    input logic clk,
    input logic rst,
    input logic [PARM_RM-1:0] Rounding_mode_i,
    input logic[31:0] IN1,
    input logic[31:0] IN2,
    input logic[127:0] IN3,
    input logic [2:0] mode,
    output logic[127:0] OUT,

    //目前只有浮点运算可能出现overflow
    output NV_o,
    //output DZ_o,  //would not occur in Multiplication or Addition
    output OF_o,
    output UF_o,
    output NX_o
);

//-------------------------------------------------------------
//                          浮点计算部分
//-------------------------------------------------------------

//MAC_FP模块实例化参数
    logic [127:0] MAC_FP__out; // MAC_FP模块的输出
    logic [1:0] MAC_FP__mode; // MAC_FP模块的模式选择
    logic MAC_FP__NV_o, MAC_FP__OF_o, MAC_FP__UF_o, MAC_FP__NX_o;

    always_comb begin
        case(mode)
            3'b000: MAC_FP__mode = 2'b00; // FP16 normal模式
            3'b001: MAC_FP__mode = 2'b01; // FP16 mix模式
            3'b010: MAC_FP__mode = 2'b10; // FP32 normal模式
            default: MAC_FP__mode = 2'b10; // 默认FP32 normal模式
        endcase
    end

//MAC_FP模块实例化
    MAC_FP #(
        .PARM_RM(PARM_RM)
    ) u_MAC_FP (
        .clk(clk),
        .rst(rst),
        .IN1(IN1),
        .IN2(IN2),
        .IN3(IN3),
        .mode(MAC_FP__mode),
        .OUT(MAC_FP__out),
        .Rounding_mode_i(Rounding_mode_i),
        .NV_o(MAC_FP__NV_o),
        //.DZ_o(),  //would not occur in Multiplication or Addition
        .OF_o(MAC_FP__OF_o),
        .UF_o(MAC_FP__UF_o),
        .NX_o(MAC_FP__NX_o)
    );

//-------------------------------------------------------------
//                          整数计算部分
//-------------------------------------------------------------

//MAC32_pipeline2_top模块实例化参数
    logic [127:0] MAC_INT__out; // MAC_INT模块的输出
    logic  MAC_INT__mode; // MAC_INT模块的模式选择

    always_comb begin
        case(mode)
            3'b011: MAC_INT__mode = 1'b0; // INT4 normal模式
            3'b100: MAC_INT__mode = 1'b1; // INT8 normal模式
            3'b101: MAC_INT__mode = 1'b0; // INT4 mix模式
            3'b110: MAC_INT__mode = 1'b1; // INT8 mix模式
            default: MAC_INT__mode = 1'b0; // 默认INT4 normal模式
        endcase
    end

//MAC_ADDER模块实例化
    MAC_ADDER MAC_ADDER_u(
        .clk(clk),
        .rst(rst),
        .IN1(IN1),
        .IN2(IN2),
        .IN3(IN3),
        .mode(MAC_INT__mode),
        .OUT(MAC_INT__out)
    );



//-------------------------------------------------------------
//                   IN3处理部分-相邻16bit相加
//-------------------------------------------------------------

logic [127:0] MAC_IN3_Adjent16_add_result; // IN3处理后的结果

MAC_IN3_Adjent16_add MAC_IN3_Adjent16_add_u(
    .clk(clk),
    .rst(rst),
    .IN3(IN3), // 输入IN3[127:0]
    .OUT(MAC_IN3_Adjent16_add_result) // 输出OUT[127:0]，连接到MAC_ADDER的IN3
);



//-------------------------------------------------------------
//                         输出部分
//-------------------------------------------------------------



//选择最终输出
    always_comb begin
        case(mode)
            3'b000, 3'b001, 3'b010: OUT = MAC_FP__out; // 浮点计算结果
            3'b011, 3'b101, 3'b110: OUT = MAC_INT__out; // 整数计算结果
            3'b100: OUT = MAC_IN3_Adjent16_add_result; // IN3处理后的结果
            default: OUT = 128'h0; // 默认输出为0
        endcase
    end
//输出异常信号
    assign NV_o = MAC_FP__NV_o; // 非规范化异常
    //assign DZ_o = 1'b0; // 整数计算不会发生除零异常
    assign OF_o = MAC_FP__OF_o ; // 溢出异常
    assign UF_o = MAC_FP__UF_o ; // 下溢异常
    assign NX_o = MAC_FP__NX_o; // 非法操作异常


endmodule
