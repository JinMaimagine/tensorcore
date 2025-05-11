`include "para_pkg.sv"

// 对于A逻辑不需要改变
// 对于B(col):
// 1. FP16 (16×8): 每次传128bit，其它每次传256bit
// 2. INT8、INT4: 每次传一行，如 INT8(16×8) 一次传8个，INT8(16×16) 传16个，INT8(16×32) 传32个
// 3. INT4 同 INT8 的传递方式
// 对于C: 32×8、16×16、8×32,全都送到systolic中

module TRANS (
    input  logic [255:0]                data_in,
    input  logic [4:0]                  burst_num,   // 第几次传输，一次传输256bit
    input  params::type_t              data_type,
    input  params::mat_t               mat,
    input  params::rc_t                rc,
    input  valid,
    input  logic                        clk,
    output logic [7:0][7:0][31:0]       data_out_A,
    output logic [7:0][7:0][3:0]        data_out_B,
    output logic [7:0][7:0][31:0]        data_out_C,
    output logic [7:0][7:0]             we_A,
    output logic [7:0][7:0]             we_B,
    output logic [7:0][7:0]             we_C
);

logic [7:0][7:0][31:0] data_out_A_temp;
logic [7:0][7:0][3:0]  data_out_B_temp;
logic [7:0][7:0][31:0]  data_out_C_temp;//直接写入systolic array中
logic [7:0][7:0]       we_A_temp;
logic [7:0][7:0]       we_B_temp;
logic [7:0][7:0]       we_C_temp;

always_ff @(posedge clk) begin
    we_A        <= we_A_temp;
    we_B        <= we_B_temp;
    we_C        <= we_C_temp;
    data_out_A  <= data_out_A_temp;
    data_out_B  <= data_out_B_temp;
    data_out_C  <= data_out_C_temp;
end

always_comb begin
    we_A_temp        = '0;
    we_B_temp        = '0;
    we_C_temp        = '0;
    data_out_A_temp  = '0;
    data_out_B_temp  = '0;
    data_out_C_temp  = '0;

    if (valid) begin
        if (mat == params::A) begin
            case (data_type)
                params::FP32: begin
                    we_A_temp[burst_num >> 1] = 8'hFF;
                    data_out_A_temp[burst_num >> 1] = data_in;
                end

                params::FP16: begin
                    we_A_temp[burst_num] = 8'hFF;
                    data_out_A_temp[burst_num] = data_in;
                end

                params::INT8: begin
                    we_A_temp[{burst_num[1:0], 1'b0}] = 8'h0F << {burst_num[2], 2'b00};
                    data_out_A_temp[{burst_num[1:0], 1'b0}][{burst_num[2], 2'b00} +: 4] = data_in[127:0];

                    we_A_temp[{burst_num[1:0], 1'b1}] = 8'h0F << {burst_num[2], 2'b00};
                    data_out_A_temp[{burst_num[1:0], 1'b1}][{burst_num[2], 2'b00} +: 4] = data_in[255:128];
                end

                params::INT4: begin
                    we_A_temp[{burst_num[0], 2'b00}] = 8'h03 << {burst_num[2:1], 1'b0};
                    data_out_A_temp[{burst_num[0], 2'b00}][{burst_num[2:1], 1'b0} +: 2] = data_in[63:0];

                    we_A_temp[{burst_num[0], 2'b01}] = 8'h03 << {burst_num[2:1], 1'b0};
                    data_out_A_temp[{burst_num[0], 2'b01}][{burst_num[2:1], 1'b0} +: 2] = data_in[127:64];

                    we_A_temp[{burst_num[0], 2'b10}] = 8'h03 << {burst_num[2:1], 1'b0};
                    data_out_A_temp[{burst_num[0], 2'b10}][{burst_num[2:1], 1'b0} +: 2] = data_in[191:128];

                    we_A_temp[{burst_num[0], 2'b11}] = 8'h03 << {burst_num[2:1], 1'b0};
                    data_out_A_temp[{burst_num[0], 2'b11}][{burst_num[2:1], 1'b0} +: 2] = data_in[255:192];
                end
            endcase

        end else if (mat == params::B) begin
            case (data_type)
                params::FP32: begin
                    for (int i = 0; i < 8; i++) begin
                        we_B_temp[i] = 8'hFF;
                        data_out_B_temp[i] = data_in[32*i +: 32];
                    end
                end

                params::FP16: begin
                    case (rc)
                        2'b00: begin // N8
                            for (int i = 0; i < 8; i++) begin
                                we_B_temp[i] = 8'h0F;
                                data_out_B_temp[i][3:0] = data_in[16*i +: 16];
                            end
                        end
                        2'b01, 2'b10: begin
                            for (int i = 0; i < 8; i++) begin
                                we_B_temp[i] = 8'hFF;
                                data_out_B_temp[i] = {
                                    data_in[16*(i+8) +: 16],
                                    data_in[16*i +: 16]
                                };
                            end
                        end
                        default: begin
                            assert(0) else $error("rc is not 00,01,10");
                        end
                    endcase
                end

                params::INT8: begin
                    case (rc)
                        2'b00: begin // N8
                            for (int i = 0; i < 8; i++) begin
                                we_B_temp[i] = 8'h03;
                                data_out_B_temp[i][1:0] = data_in[8*i +: 8];
                            end
                        end
                        2'b01: begin
                            for (int i = 0; i < 8; i++) begin
                                we_B_temp[i] = 8'h0F;
                                data_out_B_temp[i][3:0] = {
                                    data_in[8*(i+8) +: 8],
                                    data_in[8*i +: 8]
                                };
                            end
                        end
                        2'b10: begin
                            for (int i = 0; i < 8; i++) begin
                                we_B_temp[i] = 8'hFF;
                                data_out_B_temp[i][7:0] = {
                                    data_in[8*(i+24) +: 8],
                                    data_in[8*(i+16) +: 8],
                                    data_in[8*(i+8) +: 8],
                                    data_in[8*i +: 8]
                                };
                            end
                        end
                        default: begin
                            assert(0) else $error("rc is not 00,01,10");
                        end
                    endcase
                end
                //按照INT8那样的编码,并行度已经足够，但是对于INT4却不够，INT4实际上是INT8编码的压缩
                //TODO:写PE逻辑的时候需要多加小心,SRAM_B_bank还是每次写4bit
                params::INT4: begin
                    case (rc)
                        2'b00: begin // N8
                            for (int i = 0; i < 8; i++) begin
                                we_B_temp[i] = 8'h01<<burst_num[3];
                                data_out_B_temp[i][0] = data_in[4*i +:4];
                            end
                        end
                        2'b01: begin
                            for (int i = 0; i < 8; i++) begin
                                we_B_temp[i] = 8'h03<<{burst_num[3], 1'b0};
                                data_out_B_temp[i][2*burst_num[3]+:2] = {
                                    data_in[4*(i+8) +:4],
                                    data_in[4*i +:4]
                                };
                            end
                        end
                        2'b10: begin
                            for (int i = 0; i < 8; i++) begin
                                we_B_temp[i] = 8'h0F<<{burst_num[3], 1'b0,1'b0};
                                data_out_B_temp[i][4*burst_num[3]+:4] = {
                                    data_in[4*(i+24) +:4],
                                    data_in[4*(i+16) +:4],
                                    data_in[4*(i+8) +:4],
                                    data_in[4*i +:4]
                                };
                            end
                        end
                        default: begin
                            assert(0) else $error("rc is not 00,01,10");
                        end
                    endcase
                end
            endcase

        end else begin//C直接一次性取完,C在B的一端输入，SRAM_C与SRAM_B相同
            assert(mat == params::C) else $error("mat is not A,B,C");
            //应该改一下B的逻辑,将C也按照B的方式存储,到C就又要考虑A与B的存储了
            //TODO:C我准备一次性读完存到SYSTOLIC中
        end
    end
end

endmodule
