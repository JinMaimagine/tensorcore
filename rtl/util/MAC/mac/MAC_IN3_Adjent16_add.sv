/*
本文件实现输入 IN3[127:0],拆分成8个16位整数，每16位扩展成一个32位整数INT32，相邻两个INT32相加，然后拼起来输出到OUT[127:0]。
*/
module MAC_IN3_Adjent16_add(
	input logic clk,
	input logic rst,
	input logic [127:0] IN3, // 输入IN3[127:0]
	output logic [127:0] OUT // 输出OUT[127:0]
);

	//拆分IN3为8个16位整数，并扩展为相应的32位整数
	logic [31:0] int32_arr [0:7];
	generate
		genvar i;
		for (i = 0; i < 8; i++) begin : split_and_extend
			assign int32_arr[i] = {{16{IN3[16*i+15]}},IN3[16*i +: 16]}; // 扩展为32位整数
		end
	endgenerate

	//把需要对应相加的4组32位整数，打包成X[127:0]和 Y[127:0]
	logic [127:0] X, Y;
	logic [127:0] add_result; // 用于存储相加结果的数组

	assign X = {int32_arr[7], int32_arr[5], int32_arr[3], int32_arr[1]};
	assign Y = {int32_arr[6], int32_arr[4], int32_arr[2], int32_arr[0]};
	
	Adder_4 add_4_inst (
		.mode(1'b1), // mode=1表示32bit对应相加
		.X(X),
		.Y(Y),
		.S(add_result) // 输出相加结果
	);
	

	// 输出结果
	assign OUT = add_result;


endmodule