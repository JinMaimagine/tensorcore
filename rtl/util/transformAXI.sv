`include "para_pkg.sv"

// 对于A逻辑不需要改变
// 对于B(col):
// 1. FP16 (16×8): 每次传128bit，其它每次传256bit
// 2. INT8、INT4: 每次传一行，如 INT8(16×8) 一次传8个，INT8(16×16) 传16个，INT8(16×32) 传32个
// 3. INT4 同 INT8 的传递方式
// 对于C: 32×8、16×16、8×32,全都送到systolic中

module TRANS (
    input  logic [255:0]                data_in,
    input  logic [5:0]                  burst_num,   // 第几次传输，一次传输256bit
    input  params::type_t              data_type,
    input  params::mat_t               mat,
    input  params::rc_t                rc,
    input  logic                        mixed,
    input  logic valid,
    input  logic                        clk,
    output logic [7:0][7:0][31:0]       data_out_A,
    output logic [7:0][7:0][3:0]        data_out_B,
    output logic [7:0][7:0][31:0]        data_out_C,
    output logic [7:0][7:0]             we_A,
    output logic [7:0][7:0]             we_B,
    output logic [7:0][7:0]             we_C
);

//8个bank,每个bank 4bit
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

    if (valid) begin//直接将A,B全部读入,方便后续逻辑
        if (mat == params::A) begin
            case (data_type)
                params::FP32: begin
                    we_A_temp[burst_num >> 1] = 8'hFF;
                    data_out_A_temp[burst_num >> 1] = data_in;
                end

                params::FP16: begin
                    we_A_temp[burst_num] = 8'hFF;
                    for(integer i=0;i<8;i++)
                    begin
                    data_out_A_temp[burst_num][i][15:0] = data_in[16*i+:16];
                    data_out_A_temp[burst_num][i][31:16] = data_in[(16*i+128)+:16];
                    end
                    //we_A_temp[burst_num] = 8'h0F;//一次取8个,逻辑同FP32
                    //data_out_A_temp[burst_num][7:0][3:0] = data_in[127:0];//一次取16bit*8
                end

                params::INT8: begin
                    case(rc)
                    2'b00:
                    begin//这里每次只能传入8数据?没办法必须牺牲,我在考虑后面增加可以传入的数据个数,目前是在这个情况下每次只读8个INT8,但是这必须看综合的成本是否增加
                    //这里弄个warning:可能总位宽要变了
                        we_A_temp[burst_num[3:1]]=8'h03<<{burst_num[5:4],1'b0};
                        for(integer i=0;i<8;i++)
                        begin
                        data_out_A_temp[burst_num[3:1]][i][{burst_num[5:4],3'b0}+:8] = data_in[8*i+:8];
                        end                        
                    end
                    2'b01,2'b10:begin
                    we_A_temp[{burst_num[1:0], 1'b0}] = 8'h0F << {burst_num[2], 2'b00};
                    we_A_temp[{burst_num[1:0], 1'b1}] = 8'h0F << {burst_num[2], 2'b00};
                    for(integer i=0;i<8;i++)
                    begin
                    data_out_A_temp[{burst_num[1:0], 1'b0}][i][{burst_num[2], 4'b0000} +: 8] = data_in[8*i+:8];
                    data_out_A_temp[{burst_num[1:0], 1'b0}][i][{burst_num[2], 4'b1000} +: 8] = data_in[(8*i+64)+:8];
                    data_out_A_temp[{burst_num[1:0], 1'b1}][i][{burst_num[2], 4'b0000} +: 8] = data_in[(8*i+128)+:8];
                    data_out_A_temp[{burst_num[1:0], 1'b1}][i][{burst_num[2], 4'b1000} +: 8] = data_in[(8*i+192)+:8];
                    end
                    end
                    default: begin
                        assert(0) else $error("rc is not 00,01,10");
                    end
                    endcase
                end

                params::INT4: begin
                    we_A_temp[{burst_num[0], 2'b00}] = 8'h03 << {burst_num[2:1], 1'b0};
                    for(integer i=0;i<8;i++)
                    begin
                    data_out_A_temp[{burst_num[0], 2'b00}][i][{burst_num[2:1], 3'b000}+:4] = data_in[4*i+:4];
                    data_out_A_temp[{burst_num[0], 2'b00}][i][{burst_num[2:1], 3'b100}+:4] = data_in[(4*i+32)+:4];
                    end
                    we_A_temp[{burst_num[0], 2'b01}] = 8'h03 << {burst_num[2:1], 1'b0};
                    for(integer i=0;i<8;i++)
                    begin
                    data_out_A_temp[{burst_num[0], 2'b01}][i][{burst_num[2:1], 3'b000}+:4] = data_in[(4*i+64)+:4];
                    data_out_A_temp[{burst_num[0], 2'b01}][i][{burst_num[2:1], 3'b100}+:4] = data_in[(4*i+96)+:4];
                    end
                    we_A_temp[{burst_num[0], 2'b10}] = 8'h03 << {burst_num[2:1], 1'b0};
                    for(integer i=0;i<8;i++)
                    begin
                    data_out_A_temp[{burst_num[0], 2'b10}][i][{burst_num[2:1], 3'b000}+:4] = data_in[(4*i+128)+:4];
                    data_out_A_temp[{burst_num[0], 2'b10}][i][{burst_num[2:1], 3'b100}+:4] = data_in[(4*i+160)+:4];
                    end
                    we_A_temp[{burst_num[0], 2'b11}] = 8'h03 << {burst_num[2:1], 1'b0};
                    for(integer i=0;i<8;i++)
                    begin
                    data_out_A_temp[{burst_num[0], 2'b11}][i][{burst_num[2:1], 3'b000}+:4] = data_in[(4*i+192)+:4];
                    data_out_A_temp[{burst_num[0], 2'b11}][i][{burst_num[2:1], 3'b100}+:4] = data_in[(4*i+224)+:4];
                    end
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
                    case (rc)//B也按行存储,后面多加小心
                        2'b00: begin // N8,一次取一行
                        //注意TODO:B这里我改主意了,主要为了统一
                            for (int i = 0; i < 8; i++) begin
                                we_B_temp[i] = 8'h0F;
                                data_out_B_temp[i][3:0] = data_in[16*i +: 16];
                            end
                        end
                        2'b01,2'b10: begin
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
                                we_B_temp[i] = 8'h03<<{burst_num[3],1'b0};//并行度不够
                                data_out_B_temp[i][{burst_num[3],1'b0}+:2] = data_in[8*i+:8];
                            end
                        end
                        2'b01: begin
                            for (int i = 0; i < 8; i++) begin
                                we_B_temp[i] = 8'h0F<<{burst_num[3],2'b0};
                                data_out_B_temp[i][{burst_num[3],2'b0}+:4] = {
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
                                data_out_B_temp[i][burst_num[3]] = data_in[4*i +:4];
                            end
                        end
                        2'b01: begin
                            for (int i = 0; i < 8; i++) begin
                                we_B_temp[i] = 8'h03<<{burst_num[3], 1'b0};
                                data_out_B_temp[i][{burst_num[3],1'b0}+:2] = {
                                    data_in[4*(i+8) +:4],
                                    data_in[4*i +:4]
                                };
                            end
                        end
                        2'b10: begin
                            for (int i = 0; i < 8; i++) begin
                                we_B_temp[i] = 8'h0F<<{burst_num[3], 1'b0,1'b0};
                                data_out_B_temp[i][{burst_num[3],2'b0}+:4] = {
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
            //对C简化:C必须取32个周期,每次取8个,这些后面要写在axi中
            //应该改一下B的逻辑,将C也按照B的方式存储,到C就又要考虑A与B的存储了
            //TODO:C我准备一次性读完存到SYSTOLIC中
            case(data_type)//burst需要32次,这是固定的
                params::FP32: begin
                    case(rc)
                        2'b00: begin//M32N8
                            we_C_temp[burst_num[2:0]]=8'hFF;
                            data_out_C_temp[burst_num[2:0]] = data_in;
                        end
                        2'b01: begin//M16N16
                            we_C_temp[burst_num[3:1]]=8'hFF;
                            data_out_C_temp[burst_num[3:1]] = data_in;
                        end
                        2'b10: begin//M8N32
                            we_C_temp[burst_num[4:2]]=8'hFF;
                            data_out_C_temp[burst_num[4:2]] = data_in;
                        end
                        default: begin
                            assert(0) else $error("rc is not 00,01,10");
                        end
                    endcase
                end

                params::FP16: begin
                    if(mixed)
                    begin
                        case(rc)
                        2'b00: begin//M32N8
                            we_C_temp[burst_num[2:0]]=8'hFF;
                            data_out_C_temp[burst_num[2:0]] = data_in;
                        end
                        2'b01: begin//M16N16
                            we_C_temp[burst_num[3:1]]=8'hFF;
                            data_out_C_temp[burst_num[3:1]] = data_in;
                        end
                        2'b10: begin//M8N32
                            we_C_temp[burst_num[4:2]]=8'hFF;
                            data_out_C_temp[burst_num[4:2]] = data_in;
                        end
                        default: begin
                            assert(0) else $error("rc is not 00,01,10");
                        end
                    endcase
                    end
                    else
                    begin
                    case(rc)
                        2'b00: begin//M32N8
                            we_C_temp[burst_num[2:0]]=8'hFF;
                            for(integer i=0;i<8;i++) begin
                                data_out_C_temp[burst_num[2:0]][i] = {16'h0000,data_in[16*i +: 16]};
                            end
                        end
                        2'b01: begin//M16N16
                            we_C_temp[burst_num[3:1]]=8'hFF;
                            for(integer i=0;i<8;i++) begin
                                data_out_C_temp[burst_num[3:1]][i] = {16'h0000,data_in[16*i +: 16]};
                            end
                        end
                        2'b10: begin//M8N32
                            we_C_temp[burst_num[4:2]]=8'hFF;
                            for(integer i=0;i<8;i++) begin
                                data_out_C_temp[burst_num[4:2]][i] = {16'h0000,data_in[16*i +: 16]};
                            end
                        end
                        default: begin
                            assert(0) else $error("rc is not 00,01,10");
                        end
                    endcase
                    end
                end

                params::INT8: begin
                    case(rc)
                        2'b00: begin//M32N8
                            we_C_temp[burst_num[2:0]]=8'hFF;
                            for(integer i=0;i<8;i++) begin
                                data_out_C_temp[burst_num[2:0]][i] = {{24{data_in[8*i+7]}},data_in[8*i +: 8]};
                            end
                        end
                        2'b01: begin//M16N16
                            we_C_temp[burst_num[3:1]]=8'hFF;
                            for(integer i=0;i<8;i++) begin
                                data_out_C_temp[burst_num[3:1]][i] = {{24{data_in[8*i+7]}},data_in[8*i +: 8]};
                            end
                        end
                        2'b10: begin//M8N32
                            we_C_temp[burst_num[4:2]]=8'hFF;
                            for(integer i=0;i<8;i++) begin
                                data_out_C_temp[burst_num[4:2]][i] = {{24{data_in[8*i+7]}},data_in[8*i +: 8]};
                            end
                        end
                        default: begin
                            assert(0) else $error("rc is not 00,01,10");
                        end
                    endcase
                end

                params::INT4: begin
                    case(rc)
                        2'b00: begin//M32N8
                            we_C_temp[burst_num[2:0]]=8'hFF;
                            for(integer i=0;i<8;i++) begin
                                data_out_C_temp[burst_num[2:0]][i] = {16'h0000,{12{data_in[4*i+3]}},data_in[4*i +: 4]};
                            end
                        end
                        2'b01: begin//M16N16
                            we_C_temp[{burst_num[3],burst_num[2],burst_num[1]}]=8'hFF;
                            for(integer i=0;i<8;i++) begin
                                data_out_C_temp[burst_num[3:1]][i] = {16'h0000,{12{data_in[4*i+3]}},data_in[4*i +: 4]};
                            end
                        end
                        2'b10: begin//M8N32
                            we_C_temp[{burst_num[4:2]}]=8'hFF;
                            for(integer i=0;i<8;i++) begin
                                data_out_C_temp[burst_num[4:2]][i] = {16'h0000,{12{data_in[4*i+3]}},data_in[4*i +: 4]};
                            end
                        end
                        default: begin
                            assert(0) else $error("rc is not 00,01,10");
                        end
                    endcase
                end
            endcase
        end
    end
end

endmodule
