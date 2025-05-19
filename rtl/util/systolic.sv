`include "PE.sv"
module systolic (
input logic clk,
input logic rst,
input logic 
);
generate 
    for (genvar i = 0; i < 8; i++) begin: systolic_row
        for (genvar j = 0; j < 8; j++) begin: systolic_col
            PE #(.N(4)) pe (
                .clk(clk),                       
                .rst(rst),                                     
                .enleft,              
                .enright,
                .enup,                        //因为systolic:PE依靠PE实现隔位延迟1
                .endown,
                .cmleft,                    //computemode的传递,专门在compute的位置
                .cmright,
                .cmup,
                .cmdown,
                .a_left,
                .a_right,
                .mixed(),
                .we,
                .wben,
                .c,
                .cin,
                .out_sum,
                .in_b_above,
                .out_b_below,
                .addr_type,
                .addr_type_out,
                .out_ready
            );
        end
    end
endgenerate
endmodule