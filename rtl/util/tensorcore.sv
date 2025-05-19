`include "sram.sv"
`include "para_pkg.sv"
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
    output params::AXI_out_t axi_out,
    input params::AXI_in_t axi_in,
    input params::addrgen_t addrtype
);

//TODO:always logic
params::SYSTOLIC_pkg_t systolic;
params::state_t state;
params::state_t next_state;
logic [31:0] systolic_counter;//TODO:专门用于systolic状态的counter
logic [31:0] accumlate_counter;//TODO:专门用于accumlate状态的counter
logic [31:0] write_counter;//TODO:专门用于write状态的counter
assign state=next_state;

logic stop;//停止:这是在float单元stage>原本定的时候
//TODO:设置一个counterfinish,当counter==0时,表示完成
logic finish;
assign finish=state==params::FINISH;
//但是并不是systolic就可以流动,还要看是不是stop状态
logic [31:0] counter;//TODO:可以缩小
logic finish_systolic;//这是对应于两个counter,也就是说
always_ff @(posedge clk) begin
    if(!rst) begin
        next_state <= params::IDLE;
    end
    else begin
    case (state)
        params::IDLE: begin
            if (start) begin
                next_state <= params::READ_C;
                axi_out.sel<=3'b001;//C
                axi_out.request_valid<=1'b1;
            end
        end
        params::READ_C: begin//这里是靠ready_valid C是全部填满
            axi_out.request_valid<=1'b0;
            if(axi_in.finish) begin//TODO:注意外部finish及时清零
                next_state <= params::LOAD_A;
                axi_out.sel<=3'b010;//B
                axi_out.request_valid<=1'b1;
            end
        end
        params::LOAD_A: begin//这里一次性将A填满 8*16*32bit
            axi_out.request_valid<=1'b0;
            if (axi_in.finish) begin
                next_state <= params::LOAD_B;
                axi_out.sel<=3'b100;
                axi_out.request_valid<=1'b1;
            end
        end
        params::LOAD_B: begin//这里一次性将B填满 16*16*32bit
            axi_out.request_valid<=1'b0;
            if (axi_in.finish) begin
                next_state <= params::SYSTOLIC;
                systolic_counter<=systolic.systolic_time;   
            end
        end
        params::SYSTOLIC: begin
            systolic_counter<=systolic_counter-1;
            if(systolic_counter==0) begin
                if(finish_systolic)
                begin
                    if(addrtype.datatype==params::INT4)
                    begin
                        next_state<=params::ACCUMULATE;
                        accumlate_counter<=1;//1周期算完
                    end
                    else
                    begin
                        next_state<=params::WRITE_BACK;
                    end
                end
            end
        end
        params::ACCUMULATE: begin
            accumlate_counter<=accumlate_counter-1;
            if(accumlate_counter==0) begin
                next_state<=params::WRITE_BACK;
            end
        end
        params::WAIT_WRITE: begin
            write_counter<=write_counter-1;
            if(write_counter==0) begin
                next_state<=params::WRITE_BACK;
            end
        end
        //负责写回
        params::WRITE_BACK: begin
            axi_out.request_valid<=1'b0;
            if (axi_in.finish) begin
                next_state <= params::FINISH;
                axi_out.sel<=3'b000;
                axi_out.request_valid<=1'b1;
            end
        end
    endcase
    end
end


endmodule