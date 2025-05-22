//mode= 00 fp16 normal
//mode= 01 fp16 mix
//mode= 10 fp32 normal
`include "FP16toFP32.sv"
`include "FP32toFP16.sv"
`include "MAC32_pipeline2_top.v"
module MAC_FP#(
	parameter PARM_RM = 3 // Rounding mode位宽
)
(
	input logic clk,
	input logic rst,
	input logic[31:0] IN1, // 32-bit floating point input
	input logic[31:0] IN2, // 32-bit floating point input
	input logic[127:0] IN3, // 128-bit accumulator
	input logic [1:0]mode, // Mode selection
	output logic[127:0] OUT, // 128-bit output

	input [PARM_RM - 1 : 0] Rounding_mode_i,//only in
	//Accrued exceptions (fflags)
    output NV_o,
    //output DZ_o,  //would not occur in Multiplication or Addition
    output OF_o,
    output UF_o,
    output NX_o
);

    // 内部信号定义
    logic [31:0] fp32_in1, fp32_in2, fp32_in3;  // MAC32单元的输入
    // logic [31:0] fp32_out;                       // MAC32单元的输出
    
    // // FP16到FP32转换的中间信号
    // wire [31:0] fp16_to_fp32_in1;
    // wire [31:0] fp16_to_fp32_in2;
    // wire [31:0] fp16_to_fp32_in3;
    
    // MAC32计算单元的输出信号
    wire [31:0] mac32_result;

	//告诉FP16toFP32模块是pass还是转换
	logic A_convert_enb;
	logic B_convert_enb;
	logic C_convert_enb;

	always_comb begin
		case(mode)
			2'b00: begin
				A_convert_enb = 1; // FP16 normal模式
				B_convert_enb = 1; // FP16 normal模式
				C_convert_enb = 1; // FP16 normal模式
			end
			2'b01: begin
				A_convert_enb = 1; // FP16 mix模式
				B_convert_enb = 1; // FP16 mix模式
				C_convert_enb = 0; // FP16 mix模式
			end
			default: begin //2'b10
				A_convert_enb = 0; // FP32 normal模式
				B_convert_enb = 0; // FP32 normal模式
				C_convert_enb = 0; // FP32 normal模式
			end

		endcase
	end
			
    
    // FP16到FP32的转换模块实例化
    FP16toFP32 #(
		.PARM_XLEN(32)
	)
	u_fp16_to_fp32_1
	(
		.mode(A_convert_enb),
        .fp16(IN1),
        .fp32(fp32_in1)
    );

	FP16toFP32 #(
		.PARM_XLEN(32)
	)
	u_fp16_to_fp32_2
	(
		.mode(B_convert_enb),
        .fp16(IN2),
        .fp32(fp32_in2)
    );

	FP16toFP32 #(
		.PARM_XLEN(32)
	)
	u_fp16_to_fp32_3
	(
		.mode(C_convert_enb),
        .fp16(IN3[31:0]), // 只取IN3的低32位
        .fp32(fp32_in3)
    );



	//MAC32_pipeline2_top实例化参数
	logic NV_o_to_FP32toFP16;
	logic OF_o_to_FP32toFP16;
	logic UF_o_to_FP32toFP16;
	logic NX_o_to_FP32toFP16;


    // MAC32计算单元实例化
    MAC32_pipeline2_top u_mac32 (
        .clk(clk),
		.Rounding_mode_i(Rounding_mode_i),
        .A_i(fp32_in3),
        .B_i(fp32_in2),
        .C_i(fp32_in1),
        .Result_o(mac32_result),
        .NV_o(NV_o_to_FP32toFP16),
		.OF_o(OF_o_to_FP32toFP16),
		.UF_o(UF_o_to_FP32toFP16),
		.NX_o(NX_o_to_FP32toFP16)

    );

	//FP32toFP16实例化参数
	logic FP32toFP16_convert_enb;

	logic FP32toFP16_OF_out;
	logic FP32toFP16_UF_out;
	logic FP32toFP16_NX_out;
	logic FP32toFP16_NV_out;


	//参数设定
	always_comb begin
		case(mode)
			2'b00: FP32toFP16_convert_enb = 1; // FP16 normal模式
			2'b01: FP32toFP16_convert_enb = 0; // FP16 mix模式
			2'b10: FP32toFP16_convert_enb = 0; // FP32 normal模式
			default: FP32toFP16_convert_enb = 0; // 其他模式
		endcase
	end


    //如果是fp16模式，输出结果需要转换回FP16格式;
    logic [31:0] FP32toFP16_result;
    FP32toFP16 u_fp32_to_fp16 (
        .result_i(mac32_result),
        .result_o(FP32toFP16_result),
		.Rounding_mode_i(Rounding_mode_i),
		.mode(FP32toFP16_convert_enb), // 是否转换为FP16 mode=1 转换
		.OF_in(OF_o_to_FP32toFP16),
		.UF_in(UF_o_to_FP32toFP16),
		.NX_in(NX_o_to_FP32toFP16),
		.NV_in(NV_o_to_FP32toFP16),
		.OF_out(FP32toFP16_OF_out),
		.UF_out(FP32toFP16_UF_out),
		.NX_out(FP32toFP16_NX_out),
		.NV_out(FP32toFP16_NV_out)
    );



	//这一级寄存器暂时不要了
    // // 输出结果处理
    // //--------------------
    // //    外加一级流水线
    // //--------------------
	// reg [31:0] FP32toFP16_result_reg;
	// reg FP32toFP16_OF_out_reg;
	// reg FP32toFP16_UF_out_reg;
	// reg FP32toFP16_NX_out_reg;
	// reg FP32toFP16_NV_out_reg;

	// always_ff @(posedge clk or posedge rst) begin
	// 	if (rst) begin
	// 		FP32toFP16_result_reg <= 32'b0;
	// 		FP32toFP16_OF_out_reg <= 1'b0;
	// 		FP32toFP16_UF_out_reg <= 1'b0;
	// 		FP32toFP16_NX_out_reg <= 1'b0;
	// 		FP32toFP16_NV_out_reg <= 1'b0;
	// 	end else begin
	// 		FP32toFP16_result_reg <= FP32toFP16_result;
	// 		FP32toFP16_OF_out_reg <= FP32toFP16_OF_out;
	// 		FP32toFP16_UF_out_reg <= FP32toFP16_UF_out;
	// 		FP32toFP16_NX_out_reg <= FP32toFP16_NX_out;
	// 		FP32toFP16_NV_out_reg <= FP32toFP16_NV_out;
	// 	end
	// end

	// // 输出结果赋值
	// assign OUT = {96'b0, FP32toFP16_result_reg};
	// assign OF_o = FP32toFP16_OF_out_reg;
	// assign UF_o = FP32toFP16_UF_out_reg;
	// assign NX_o = FP32toFP16_NX_out_reg;
	// assign NV_o = FP32toFP16_NV_out_reg;

	// 输出结果赋值（寄存器在外面写）
	assign OUT = {96'b0, FP32toFP16_result};
	assign OF_o = FP32toFP16_OF_out;
	assign UF_o = FP32toFP16_UF_out;
	assign NX_o = FP32toFP16_NX_out;
	assign NV_o = FP32toFP16_NV_out;


endmodule
