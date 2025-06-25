module simleout(
    input logic fp,
    input logic clk,
    input logic [127:0]IN,
    output logic [127:0] OUT
);
logic [127:0] OUT1;
logic [127:0] OUT2;
always_ff @( posedge clk )begin
    OUT2<=IN;
end
assign OUT1 = IN;
assign OUT=fp ? OUT2 : OUT1;
endmodule