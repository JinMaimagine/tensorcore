module SRAM #(
    parameter int unsigned WIDTH = 32,
    parameter int unsigned ENTRYS = 1024
)(
    input logic clk,
    input logic [$clog2(ENTRYS)-1:0] rdaddr,
    input logic [$clog2(ENTRYS)-1:0] wraddr,
    output logic [WIDTH-1:0] data_out,
    input logic [WIDTH-1:0] data_in,
    input logic we,
    input logic re
);//determines axi
logic [ENTRYS-1:0][WIDTH-1:0] data;
always_ff @(posedge clk) begin
    if (we) begin
        data[wraddr] <= data_in;
    end
    if (re) begin
        data_out <= data[rdaddr];
    end
end
endmodule
//基本的调度框架
module systolic #(
parameter L=8,
parameter ENTRYS=1024,
parameter WIDTH=32,
parameter wp=1+$clog2(L+ENTRYS)
)(
    input logic clk,
    input logic rst,
    input logic start,
    input logic[1:0] mode_compute,//计算模式
    input logic[1:0] data_type 
);
//对于B，A的pointer间接起到了systolic的作用
logic signed[L-1:0][wp-1:0] pointerB;
logic signed[L-1:0][wp-1:0] pointerA;
//TODO:always logic
logic systolic;//是否处于流动状态
logic reset;//重置状态:发生在systolic
logic [1:0] state;
logic [1:0] next_state;
localparam IDLE=2'b00;
localparam SYSTOLIC=2'b01;
localparam RESET=2'b10;//传输未完成,并且重新初始化
localparam DONE=2'b11;
assign state=next_state;
assign systolic=(state==SYSTOLIC);
logic stop;//停止:这是在float单元stage>原本定的时候
//TODO:设置一个counterfinish,当counter==0时,表示完成
logic finish;
logic finishall;
logic flag;
assign flag=state==DONE;
logic RE;//readenable
assign RE=systolic && !stop;
//但是并不是systolic就可以流动,还要看是不是stop状态
always_ff @(posedge clk) begin
    if(!rst) begin
        next_state <= IDLE;
    end
    else begin
    case (state)
        IDLE: begin
            if (start) begin
                next_state <= SYSTOLIC;
            end else begin
                next_state <= IDLE;
            end
        end
        SYSTOLIC: begin
            if(finishall) begin
                next_state <= DONE;
            end 
            else if(finish) begin
                next_state <= RESET;
            end
            else begin
                next_state <= SYSTOLIC;
            end
        end
        //TODO:似乎可以复用start
        RESET: begin
            if (reset) begin
                next_state <= IDLE;
            end else begin
                next_state <= RESET;
            end
        end
        DONE: begin
            next_state <= DONE;
        end
    endcase
    end
end
logic [L-1:0]reA;
logic [L-1:0]reB;
always_comb begin
    for(integer i=0;i<L;i++) begin
        reA[i]=pointerA[i]>=0&&systolic;
        reB[i]=pointerB[i]>=0&&systolic;
    end
end
always_ff @(posedge clk) begin
    if(!rst) begin
        for(integer i=0;i<L;i++)begin
            pointerB[i] <= -i;
            pointerA[i] <= -i;
        end
    end else if(RE) begin
        for(integer i=0;i<L;i++)begin
            pointerB[i] <= pointerB[i]+1;
            pointerA[i] <= pointerA[i]+1;
        end
    end
end

endmodule