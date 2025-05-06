module PE_row #(parameter  num = 16)
	(
	// interface to system
    input wire CLK,                         // CLK = 200MHz
    input wire RESET,                       // RESET, Negedge is active
    input wire EN,                          // enable signal for the accelerator, high for active
	input wire B_EN,
	input wire SELECTOR,
	// interface to PE array .....
	input wire [31:0] A_left,
	input wire [num*32-1:0] in_B_above,
	output wire [num*32-1:0] out_B_below,

	input wire [num*32-1:0] in_sum,
	output wire [num*32-1:0] out_sum
	);

wire [num*32-1:0] A_right;
// generate of every PE
genvar gi;
generate
    for(gi = 0; gi < num; gi = gi + 1)   //16 PE
    begin:label
    	// some reg/wire variables for each PE
    	// .......
		if(gi == 0)begin
			PE PE_unit(
    		.CLK(CLK),
    		.RESET(RESET),
    		.EN(EN),
			.SELECTOR(SELECTOR),
			.B_EN(B_EN),
    		// .....
			.A_left(A_left),
			.A_right(A_right[31:0]),
			.in_sum(in_sum[31:0]),
			.out_sum(out_sum[31:0]),
			.in_B_above(in_B_above[31:0]),
			.out_B_below(out_B_below[31:0])
    		);
		end
		else begin
			PE PE_unit(
    		.CLK(CLK),
    		.RESET(RESET),
    		.EN(EN),
			.SELECTOR(SELECTOR),
			.B_EN(B_EN),
    		// .....
			.A_left(A_right[gi*32-1:(gi-1)*32]),
			.A_right(A_right[(gi+1)*32-1:gi*32]),
			.in_sum(in_sum[(gi+1)*32-1:gi*32]),
			.out_sum(out_sum[(gi+1)*32-1:gi*32]),
			.in_B_above(in_B_above[(gi+1)*32-1:gi*32]),
			.out_B_below(out_B_below[(gi+1)*32-1:gi*32])
    		);
		end
    	
	end
endgenerate

endmodule