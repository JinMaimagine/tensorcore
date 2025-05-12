//这个module用来将从systolic中收集的data转换并输出
module tranformOUT(
    input logic clk,
    input logic rst,
    input logic axiout_ready,
    output logic [7:0][7:0] ready,
    input logic valid,
    input logic[7:0][7:0][31:0] data_in,
    output logic[255:0] data_out
);
always_comb begin
    for(integer i=0;i<8;i++) begin
        for(integer j=0;j<8;j++) begin
            ready[i][j] = valid&&pointer==7;//这里ready时才换输出的位置
        end
    end
end
logic [2:0] pointer;
always@(posedge clk) begin
    if(rst) begin
        pointer <= 0;
    end else begin
        data_out<=data_in[pointer];
        if(axiout_ready&&valid) begin
            pointer <= pointer + 1;
        end
        end
    end
endmodule