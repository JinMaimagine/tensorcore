`include "para_pkg.sv"
module DATAENABLE(  //CM(计算)用这个类型的enable
input logic enleft,
output logic enright,
input logic [31:0]data_above,
output logic [31:0]data_below,
input logic[31:0] data_left,
output logic[31:0] data_right,
input logic enabove,
output logic enbelow,
output logic en,
//TODO:实际只需要一次传递compute_type就行了,但这里是每个周期传递一次，后面改成一个模块吧
input params::addrgen_t compute_type_in,
output params::addrgen_t compute_type_out,
input logic clk
);
assign en=enleft&&enabove;
always_ff @(posedge clk) begin
    assert(enabove==enleft) else $error("enabove and enleft should be equal");
    compute_type_out<=compute_type_in;
    if (enleft) begin
        data_right <= data_left;
        enright <= 1;
    end else begin
        data_right <= 0;
        enright <= 0;
    end
    if (enabove) begin
        data_below <= data_above;
        enbelow <= 1;
    end else begin
        data_below <= 0;
        enbelow <= 0;
    end
end
endmodule
module CMENABLE(  //CM(计算)和AC(累加)都用这个类型的enable
input logic enleft,
output logic enright,
input logic enabove,
output logic enbelow,
output logic en,
input logic clk
);
assign en=enleft&&enabove;
always_ff @(posedge clk) begin
    assert(enabove==enleft) else $error("enabove and enleft should be equal");
    if (enleft) begin
        enright <= 1;
    end else begin
        enright <= 0;
    end
    if (enabove) begin
        enbelow <= 1;
    end else begin
        enbelow <= 0;
    end
end
endmodule
