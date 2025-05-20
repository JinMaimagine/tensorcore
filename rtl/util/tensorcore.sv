`include "sram.sv"
`include "para_pkg.sv"
`include "transformAXI.sv"
`include "addrgen.sv"
`include "control.sv"
`include "systolic.sv" 
//基本的调度框架
//systolic遵循一个原则:要么一直流动,要么保持，PE本身遵循这个规律,边界也要遵循这个规律
module tensorcore #(
parameter L=8,
parameter ENTRYS=1024,
parameter WIDTH=32
)(
    input logic clk,
    input logic rst,
    input logic start,
    input logic mixed,
    output axi_out_request_valid,
    output logic [2:0] axi_out_sel,
    output logic [31:0] axi_out_BASE,
    output logic [5:0] axi_out_burst_num,
    output logic [2:0] axi_out_burst_size,
    input logic axi_in_arready,
    input logic axi_in_finish,
    input logic axi_in_valid,
    input logic [255:0] axi_in_data,
    input logic [31:0] axi_in_burst_id,
    input params::compute_type_t compute_type
);

//TODO:always logic
params::addrgen_t addrtype;
assign addrtype.datatype=compute_type.data_type;
assign addrtype.rc=compute_type.compute_shape==params::M32K16N8?2'b00:(compute_type.compute_shape==params::M16K16N16?2'b01:2'b10);//TODO:error这里可能有问题
SYSTOLIC_pkg_t systolic;params::state_t state;
params::state_t next_state;
logic [31:0] systolic_counter;//TODO:专门用于systolic状态的counter
logic [31:0] accumlate_counter;//TODO:专门用于accumlate状态的counter
logic [31:0] write_counter;//TODO:专门用于write状态的counter
logic [31:0] writeback_counter;//TODO:专门用于writeback状态的counter
assign state=next_state;

//TODO:设置一个counterfinish,当counter==0时,表示完成
logic finish;
assign finish=state==params::FINISH;

//SYSTOLIC_pkg_t systolic赋值
always_comb begin
    case(compute_type.datatype)
        params::FP32: begin
            systolic.systolic_time = 32'd64;
            systolic.waitwrite_time = 32'd10;
            // systolic.writeback_time = 32'd10;
        end
        params::FP16: begin
            systolic.systolic_time = 32'd64;
            systolic.waitwrite_time = 32'd10;
            // systolic.writeback_time = 32'd10;
        end
        params::INT8: begin
            systolic.systolic_time = 32'd16;
            systolic.waitwrite_time = 32'd10;
            // systolic.writeback_time = 32'd10;
        end
        default: begin //INT4
            systolic.systolic_time = 32'd8;
            systolic.waitwrite_time = 32'd10;
            // systolic.writeback_time = 32'd10;
        end
    endcase
end



//但是并不是systolic就可以流动,还要看是不是stop状态
logic [31:0] counter;//TODO:可以缩小
always_ff @(posedge clk) begin
    if(rst) begin
        next_state <= params::IDLE;
    end
    else begin
    case(state)
        params::IDLE: begin
            if (start) begin
                next_state <= params::READ_C;
                axi_out_sel<=3'b001;//C
                axi_out_BASE <= 32'h00010000; //C的起始地址,待指定
                case(compute_type.compute_shape) //C的装载数据
                    params::M32K16N8: begin
                        case(compute_type.data_type)
                            params::FP32: begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(256/8); 
                            end
                            params::FP16: begin
                                if(!mixed)
                                begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(128/8);
                                end
                                else
                                begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(256/8); 
                                end
                            end
                            params::INT8: begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(64/8); 
                            end
                            default: begin //INT4
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(32/8);
                            end
                        endcase
                    end
                    params::M16K16N16: begin
                        case(compute_type.data_type)
                            params::FP32: begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(256/8); 
                            end
                            params::FP16: begin
                                if(!mixed)
                                begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(128/8);
                                end
                                else
                                begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(256/8); 
                                end
                            end
                            params::INT8: begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(64/8); 
                            end
                            default: begin //INT4
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(32/8);
                            end
                        endcase
                    end
                    default: begin //M8K16N32
                        case(compute_type.data_type)
                            params::FP32: begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(256/8); 
                            end
                            params::FP16: begin
                                if(!mixed)
                                begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(128/8);
                                end
                                else
                                begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(256/8); 
                                end
                            end
                            params::INT8: begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(64/8); 
                            end
                            default: begin //INT4
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(32/8);
                            end
                        endcase
                    end
                endcase
                axi_out_request_valid<=1'b1;
            end
        end
        params::READ_C: begin//这里是靠ready_valid C是全部填满
            if(axi_in_arready) begin
                axi_out_request_valid<=1'b0; //确认发送数据方已经接收到地址,burst等信息
            end
            else begin
                axi_out_request_valid<=1'b1;
            end
            if(axi_in_finish) begin//TODO:注意外部finish及时清零
                next_state <= params::LOAD_A;
                axi_out_sel<=3'b100;//A
                axi_out_request_valid<=1'b1;
                axi_out_BASE <= 32'h00100000; //A的起始地址,待指定
                case(compute_type.compute_shape)//A的装载数据
                    params::M32K16N8: begin
                        case(compute_type.data_type)
                            params::FP32: begin
                                axi_out_burst_num <= 6'd63; 
                                axi_out_burst_size <= $clog2(256/8); 
                            end
                            params::FP16: begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(256/8);
                            end
                            params::INT8: begin
                                axi_out_burst_num <= 6'd15; 
                                axi_out_burst_size <= $clog2(256/8); 
                            end
                            default: begin //INT4
                                axi_out_burst_num <= 6'd7; 
                                axi_out_burst_size <= $clog2(256/8);
                            end
                        endcase
                    end
                    params::M16K16N16: begin
                        case(compute_type.data_type)
                            params::FP32: begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(256/8); 
                            end
                            params::FP16: begin
                                axi_out_burst_num <= 6'd15; 
                                axi_out_burst_size <= $clog2(256/8);
                            end
                            params::INT8: begin
                                axi_out_burst_num <= 6'd7; 
                                axi_out_burst_size <= $clog2(256/8); 
                            end
                            default: begin //INT4
                                axi_out_burst_num <= 6'd3; 
                                axi_out_burst_size <= $clog2(256/8);
                            end
                        endcase
                    end
                    default: begin //M8K16N32
                        case(compute_type.data_type)
                            params::FP32: begin
                                axi_out_burst_num <= 6'd15; 
                                axi_out_burst_size <= $clog2(256/8); 
                            end
                            params::FP16: begin
                                axi_out_burst_num <= 6'd7; 
                                axi_out_burst_size <= $clog2(256/8);
                            end
                            params::INT8: begin
                                axi_out_burst_num <= 6'd3; 
                                axi_out_burst_size <= $clog2(256/8); 
                            end
                            default: begin //INT4
                                axi_out_burst_num <= 6'd1; 
                                axi_out_burst_size <= $clog2(256/8);
                            end
                        endcase
                    end
                endcase

            end
        end
        params::LOAD_A: begin//这里一次性将A填满 8*16*32bit
            if(axi_in_arready) begin
                axi_out_request_valid<=1'b0; //确认发送数据方已经接收到地址,burst等信息
            end
            else begin
                axi_out_request_valid<=1'b1;
            end
            if (axi_in_finish) begin
                next_state <= params::LOAD_B;
                axi_out_sel<=3'b010;
                axi_out_request_valid<=1'b1;
                axi_out_BASE <= 32'h01000000; //B的起始地址,待指定
                case(compute_type.compute_shape)  //B的装载数据
                    params::M32K16N8: begin
                        case(compute_type.data_type)
                            params::FP32: begin
                                axi_out_burst_num <= 6'd15; 
                                axi_out_burst_size <= $clog2(256/8); 
                            end
                            params::FP16: begin
                                axi_out_burst_num <= 6'd15;
                                axi_out_burst_size <= $clog2(128/8);
                            end
                            params::INT8: begin
                                axi_out_burst_num <= 6'd15;
                                axi_out_burst_size <= $clog2(64/8); 
                            end
                            default: begin //INT4
                                axi_out_burst_num <= 6'd15; 
                                axi_out_burst_size <= $clog2(32/8);
                            end
                        endcase
                    end
                    params::M16K16N16: begin
                        case(compute_type.data_type)
                            params::FP32: begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(256/8); 
                            end
                            params::FP16: begin
                                axi_out_burst_num <= 6'd15; 
                                axi_out_burst_size <= $clog2(256/8);
                            end
                            params::INT8: begin
                                axi_out_burst_num <= 6'd15; 
                                axi_out_burst_size <= $clog2(128/8); 
                            end
                            default: begin //INT4
                                axi_out_burst_num <= 6'd15; 
                                axi_out_burst_size <= $clog2(64/8);
                            end
                        endcase
                    end
                    default: begin //M8K16N32
                        case(compute_type.data_type)
                            params::FP32: begin
                                axi_out_burst_num <= 6'd63; 
                                axi_out_burst_size <= $clog2(256/8); 
                            end
                            params::FP16: begin
                                axi_out_burst_num <= 6'd31; 
                                axi_out_burst_size <= $clog2(256/8);
                            end
                            params::INT8: begin
                                axi_out_burst_num <= 6'd15; 
                                axi_out_burst_size <= $clog2(256/8); 
                            end
                            default: begin //INT4
                                axi_out_burst_num <= 6'd15; 
                                axi_out_burst_size <= $clog2(128/8);
                            end
                        endcase
                    end
                endcase

            end
        end
        params::LOAD_B: begin//这里一次性将B填满 16*16*32bit
            if(axi_in_arready) begin
                axi_out_request_valid<=1'b0; //确认发送数据方已经接收到地址,burst等信息
            end
            else begin
                axi_out_request_valid<=1'b1;
            end

            if (axi_in_finish) begin
                next_state <= params::SYSTOLIC;
                systolic_counter<=systolic.systolic_time;   
            end
        end
  
        params::SYSTOLIC: begin
            systolic_counter<=systolic_counter-1;
            if(systolic_counter==0) begin
                begin
                    if(addrtype.datatype==params::INT4)
                    begin
                        next_state<=params::ACCUMULATE;
                    end
                    else
                    begin
                        next_state<=params::WRITE_BACK;
                        write_counter<=systolic.writeback_time;
                    end
                end
            end
        end
        params::ACCUMULATE: begin
            next_state<=params::WRITE_BACK;
            write_counter<=systolic.waitwrite_time;
        end
        params::WAIT_WRITE: begin
            write_counter<=write_counter-1;
            if(write_counter==0) begin
                next_state<=params::WRITE_BACK;
            end
        end
        //负责写回
        params::WRITE_BACK: begin
            //TODO:处理写回,暂时不需要
            next_state<=params::FINISH;
        end
        params::FINISH: begin
            next_state <= params::FINISH;
        end
    endcase
    end
end





logic [255:0]                data_in;
assign data_in=axi_in_data;
logic [31:0]                  burst_num;
assign burst_num=axi_in_burst_id;
params::type_t               data_type;
assign data_type=addrtype.datatype;
params::mat_t                mat;
always_comb begin
    case(axi_out_sel)
        3'b100:begin
            mat=params::A;
        end
        3'b010:begin
            mat=params::B;
        end
        3'b001:begin
            mat=params::C;
        end
        default:begin
            assert(0);
        end
    endcase
    
end
params::rc_t                 rc;
assign rc=addrtype.rc;
logic                        valid;
assign valid=axi_in_valid;

logic [7:0][7:0][31:0]       data_out_A;
logic [7:0][7:0][3:0]        data_out_B;
logic [7:0][7:0][31:0]       data_out_C;
logic [7:0][7:0]             we_A;
logic [7:0][7:0]             we_B;
logic [7:0][7:0]             we_C;
TRANS trans_inst (
    .data_in     (data_in),
    .burst_num   (burst_num),//位宽原因,暂时不统一
    .data_type   (data_type),
    .mat         (mat),
    .rc          (rc),
    .valid       (valid),
    .clk         (clk),
    .data_out_A  (data_out_A),
    .data_out_B  (data_out_B),
    .data_out_C  (data_out_C),
    .we_A        (we_A),
    .we_B        (we_B),
    .we_C        (we_C),
    .mixed       (mixed)
);


assign en_in=state==params::SYSTOLIC;
assign cmen_in=state==params::ACCUMULATE;
logic en_in;
logic cmen_in;
logic cmen_out_A;
logic en_out_A;
logic en_out_B;
logic cmen_out_B;
logic [31:0] rdaddr_A;
logic [31:0] rdaddr_B;


ADDRGEN_UNIT _ADDRGEN(
    .clk(clk),
    .rst(rst),
    .en_in(en_in),
    .cmin(cmen_in),
    .addrs(addrtype),
    .cmen_out_A(cmen_out_A),
    .en_out_A(en_out_A),
    .en_out_B(en_out_B),
    .cmen_out_B(cmen_out_B),
    .rdaddr_A(rdaddr_A),
    .rdaddr_B(rdaddr_B)
);



logic [7:0][31:0] control_a_data_in;
logic [7:0][31:0] control_a_data_out;
logic [7:0] control_a_en_out;
logic [7:0] control_a_cmen_out;
logic [7:0][31:0] control_b_data_in;
logic [7:0][31:0] control_b_data_out;
logic [7:0] control_b_en_out;
logic [7:0] control_b_cmen_out;
logic [7:0][31:0] rdaddr_a_out;
logic [7:0][31:0] rdaddr_b_out;
logic [7:0] re_a;
logic [7:0] re_b;
CONTROL_A control_a(
.clk(clk),
.rst(rst),
.rdaddr(rdaddr_A),
.data_in(control_a_data_in),
.data_out(control_a_data_out),
.en(en_out_A),
.cmen(cmen_out_A),
.addrtype(addrtype),
.en_out(control_a_en_out),
.cmen_out(control_a_cmen_out),
.rdaddr_out(rdaddr_a_out),
.re(re_a)
);


CONTROL_B control_b(
.clk(clk),
.rst(rst),
.rdaddr(rdaddr_B),
.data_in(control_b_data_in),
.data_out(control_b_data_out),
.en(en_out_B),
.cmen(cmen_out_B),
.addrtype(addrtype),
.en_out(control_b_en_out),
.cmen_out(control_b_cmen_out),
.rdaddr_out(rdaddr_b_out),
.re(re_b)
);


SRAM_A sram_a (
    .rst(rst),
    .clk(clk),
    .rdaddr(rdaddr_a_out),
    .data_out(control_a_data_in),
    .data_in(data_out_A),
    .we(we_A),
    .re(re_a)
);

SRAM_B sram_b (
    .rst(rst),
    .clk(clk),
    .rdaddr(rdaddr_b_out),
    .data_out(control_b_data_in),
    .data_in(data_out_B),
    .we(we_B),
    .re(re_b)
);

logic wben;
assign wben=state==params::WRITE_BACK;
logic [7:0][7:0][31:0] outsum;
logic [7:0][7:0] out_ready;
SYSTOLIC systolic_array(
    .clk(clk),
    .rst(rst),
    .enleft(control_a_en_out),
    .enup(control_b_en_out),
    .aleft(control_a_data_out),
    .bup(control_b_data_out),
    .cmleft(control_a_cmen_out),
    .cmup(control_b_cmen_out),
    .we(we_C),
    .c(data_out_C),
    .wben(wben),
    .addr_type(addrtype),
    .mixed(mixed),
    .out_ready(out_ready),
    .out_sum(outsum)
); 




endmodule