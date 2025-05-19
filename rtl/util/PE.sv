`include "ENABLE.sv"
`include "para_pkg.sv"
module PE
#(parameter N=4)
(
	// interface to system
    input logic clk,                         // cLK = 200MHz
    input logic rst,                       // RESET, Negedge is active                     
    input logic enleft,                      // enable signal for the accelerator, high for active
    output logic enright,
    input logic enup,                        //因为systolic:PE依靠PE实现隔位延迟1
    output logic endown,
    input logic cmleft,                    //computemode的传递,专门在compute的位置
    output logic cmright,
    input logic cmup,
    output logic cmdown,
    // interface to PE row .....
    input logic [31:0] a_left,
    output logic [31:0] a_right,
    input logic [31:0] c,
    input logic cin,
    input logic [31:0] in_sum,
    output logic [31:0] out_sum,
    input logic [31:0] in_b_above,
    output logic [31:0] out_b_below,
    input params::addrgen_t addr_type,
    output params::addrgen_t addr_type_out
	);
    //需要保证en的时候,c一定是有效的
    params::PE_pkg_t pe;
    logic en;
    logic cmen;
    logic cinen;
    logic [31:0] a;
    logic [31:0] b;
    logic [32*N-1:0] regfile;//就存4个数据,每个32bit
    logic[$clog2(N)-1:0] regfile_pointer;//至于设置为多大有para_pkg决定
    assign a = a_left;
    assign b = in_b_above;
    //logic [2:0] counter_inc;//=0时不传递,全都移动到控制逻辑位置
    DATAENABLE _ENABLE(
        .enleft(enleft),
        .enright(enright),
        .data_above(in_b_above),
        .data_below(out_b_below),
        .data_left(a_left),
        .data_right(a_right),
        .enabove(enup),
        .enbelow(endown),
        .en(en),
        .clk(clk),
        .compute_type_in(addr_type),
        .compute_type_out(addr_type_out)
    );
    CMENABLE _CMENABLE(
        .enleft(cmleft),
        .enright(cmright),
        .enabove(cmup),
        .enbelow(cmdown),
        .en(cmen),
        .clk(clk)
    );
    always_ff@(posedge clk)
    begin
        if(rst)
        begin
            regfile_pointer <= 0;
        end
        else if(en)
        begin
            if(addr_type.datatype==params::FP32|addr_type.datatype==params::FP16)
            begin
                regfile_pointer<=regfile_pointer+1;
            end
        end
        //其它情况:Dontcare
        else if(cmen)
        begin
            assert(addr_type.datatype==params::INT4) else $error("CMENABLE only support INT4");
            for(integer i=0;i<4;i++)
            begin
            end
        end
    end
        // multiplier
    // accumulator (here use register to calculate and accumulate in one cycle)
    // registers for systolic dataflow
    
endmodule