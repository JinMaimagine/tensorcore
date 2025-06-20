`include "ENABLE.sv"
`include "para_pkg.sv"
`include "MAC_top.sv"


module PE
#(parameter ID=0)
(
	// interface to system
    input logic clk,                         // cLK = 200MHz
    input logic rst,                       // RESET                     
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
    input logic mixed,//混合精度
    input logic we,
    input logic wben,//现在一切从简,wben要求是最后一个的最后一个阶段算完
    input logic [31:0] c,
    output logic [31:0] out_sum,
    input logic [31:0] b_up,
    output logic [31:0] b_down,
    input params::addrgen_t addr_type,
    input logic out_ready
	);
    localparam N=4;
    //需要保证en的时候,c一定是有效的
    logic enFP;//FP进行了pipeline,所以enFP要空一个周期
    logic en;
    logic cmen;
    logic finish;
    always_ff@(posedge clk)
    begin
        if(rst)
        begin
            finish<=0;
        end
        else
        begin
            case(addr_type.datatype)
                params::FP32:begin
                    finish<=enFP;
                end
                params::FP16:begin
                    finish<=enFP;
                end
                params::INT8:begin
                    finish<=en;
                end
                params::INT4:begin
                    finish<=cmen;
                end
            endcase
        end        
    end
logic display;
    always_comb
    begin
            case(addr_type.datatype)
                params::FP32:begin
                    display=finish&&!enFP;
                end
                params::FP16:begin
                    display=finish&&!enFP;
                end
                params::INT8:begin
                    display=finish&&!en;
                end
                params::INT4:begin
                    display=finish&&!cmen;
                end
            endcase
    end

always_ff@(posedge clk)
    begin
        if(display)
        begin
               $display("PE%0d:%h",ID,{regfile[31:0],regfile[63:32],regfile[95:64],regfile[127:96]});
        end
    end

    logic NV_o;
    logic OF_o;
    logic UF_o;
    logic NX_o;
    logic [31:0] a;
    logic [31:0] b;
    logic [2:0] mode;
    logic [127:0] IN3;
    logic [127:0] OUT;
    logic [32*N-1:0] regfile/* verilator public */ ;     //就存4个数据,每个32bit
    logic[1:0] regfile_pointer;//至于设置为多大有para_pkg决定
    assign a = a_left;
    assign b = b_up;
    always_comb begin
        case(addr_type.datatype)
            params::FP32:begin
                mode=3'b010;
                IN3={96'b0,regfile[regfile_pointer*32+:32]};
            end
            params::FP16:begin
                mode={2'b00,mixed};
                IN3={96'b0,regfile[regfile_pointer*32+:32]};
            end
            params::INT8:begin
                mode=3'b110;
                IN3=regfile;
            end
            params::INT4:begin
                if(!cmen)
                begin
                mode=3'b101;
                end
                else
                begin
                mode=3'b100;
                end
                 IN3=regfile;
            end
        endcase
    end
    //logic [2:0] counter_inc;//=0时不传递,全都移动到控制逻辑位置
    always_ff@(posedge clk)
    begin
        if(rst)
        begin
            enFP <= 0;
        end
        else
        begin
        enFP<=en;
        end
    end
    DATAENABLE _ENABLE(
        .enleft(enleft),
        .enright(enright),
        .data_above(b_up),
        .data_below(b_down),
        .data_left(a_left),
        .data_right(a_right),
        .enabove(enup),
        .enbelow(endown),
        .en(en),
        .clk(clk)
    );
    CMENABLE _CMENABLE(
        .enleft(cmleft),
        .enright(cmright),
        .enabove(cmup),
        .enbelow(cmdown),
        .en(cmen),
        .clk(clk)
    );
    MAC_top #(
        .PARM_RM(3)
    ) _MAC(
        .clk(clk),
        .rst(rst),
        .Rounding_mode_i(3'b000),
        .IN1(a),
        .IN2(b),
        .IN3(IN3),
        .mode(mode),
        .OUT(OUT),//bug:这里有bug
        // 目前只有浮点运算可能出现overflow
        .NV_o(NV_o),
        // output DZ_o, //would not occur in Multiplication or Addition
        .OF_o(OF_o),
        .UF_o(UF_o),
        .NX_o(NX_o)
    );
    logic [31:0] out_reg;
    always_ff@(posedge clk)
    begin
        if(rst)
        begin
            regfile_pointer <= 0;
        end
        else if(we)
        begin
            regfile_pointer<=regfile_pointer+1'b1;//4次之后归零
        end
        else if(en)
        begin
            if(addr_type.datatype==params::FP32|addr_type.datatype==params::FP16)
            begin
                regfile_pointer<=regfile_pointer+1;
            end
        end
        else if(wben)
        begin
            if(out_ready)
            begin
                regfile_pointer<=regfile_pointer+1;
            end
        end
    end
    always_ff@(posedge clk)
    begin
        if(rst)
        begin
            regfile <= 0;
        end
        else if(we)
        begin
            regfile[{regfile_pointer,5'b0}+:32] <= c;
        end
        if(enFP)
        begin
            if(addr_type.datatype==params::FP32|addr_type.datatype==params::FP16)
            begin
                regfile[{{regfile_pointer-2'b1},5'b0}+:32]<=OUT[31:0];
            end
        end
        if(en)
        begin
            if(addr_type.datatype==params::INT4|addr_type.datatype==params::INT8)
            begin
                regfile<=OUT;
            end
        end
        //其它情况:Dontcare
        else if(cmen)
        begin
            assert(addr_type.datatype==params::INT4) else $error("CMENABLE only support INT4");
            regfile<=OUT;
        end
    end
    always_ff@(posedge clk)
    begin
        if(wben)
        begin
            if(out_ready)
            begin
                if(addr_type.datatype==params::FP16&&!mixed)
                out_sum<={regfile[{regfile_pointer[0],6'b100000}+:16],regfile[{regfile_pointer[0],6'b0}+:16]};
                else
                out_sum<=regfile[{regfile_pointer,5'b0}+:32];
            end
        end
    end
        // multiplier
    // accumulator (here use register to calculate and accumulate in one cycle)
    // registers for systolic dataflow
    
endmodule