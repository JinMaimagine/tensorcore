`include "tensorcore.sv"
`include "axi_rd.sv"
`include "axi_wr.sv"
`include "axi_lite.sv"

//核心
//TODO:axi_rd还没实例化
//TODO:axi_wr的enb信号还没计算

//基本的调度框架
//systolic遵循一个原则:要么一直流动,要么保持，PE本身遵循这个规律,边界也要遵循这个规律
module tensorcore_top #(
parameter L=8,
parameter ENTRYS=1024,
parameter WIDTH=32,
parameter ADDR_WIDTH=32,
parameter DATA_WIDTH=256
)(
    input logic clk,
    input logic rst,

    //axi_lite接口定义
    output logic                    lite_arvalid,
    input  logic                    lite_arready,
    output logic [ADDR_WIDTH-1:0]   lite_araddr,
    output logic [2:0]              lite_arprot,//3'b000 普通安全访问
    input  logic                    lite_rvalid,
    output logic                    lite_rready,
    input  logic [DATA_WIDTH-1:0]   lite_rdata, //lite协议规定32位
    input  logic [1:0]              lite_rresp, // 2'b00 OKAY, 2'b01 EXOKAY, 
										//2'b10 SLVERR, 2'b11 DECERR


    //axi_rd接口定义
    output [ADDR_WIDTH-1:0]    m_axi_araddr,
    output [7:0]               m_axi_arlen,//transition 数量
    output [2:0]               m_axi_arsize,
    output [1:0]               m_axi_arburst, //传输类型 INCR 01
    output                     m_axi_arvalid,
    input                      m_axi_arready,
    input  [DATA_WIDTH-1:0]    m_axi_rdata,
    input                      m_axi_rlast,
    input                      m_axi_rvalid,
    output                     m_axi_rready,




    //axi_wr接口定义
    output logic [DATA_WIDTH-1:0] axi_wdata, //每次送出的数据；
                                 //如果mixed=1，
    output logic axi_awvalid,  //进入WRITEBACK_ADDR状态送地址时置1
    output logic axi_wvalid, //送出数据时同步将valid拉高
    input  logic axi_awready,//接收者说我准备好了,用于address握手，
                            //WriteBack模块可以进入WRITEBACK_DATA状态
    input  logic axi_wready,//接收者说我准备好了,用于data握手
                           //每收到一个wready，代表送走了一个数据，可以将valid拉低并且换另一个数上了
                         //不过当前情况下是数据全部算完才给wr_enb信号,所以进入WRITEBACK_DATA
                         //状态之后，axi_wvalid信号可以常置为1，收到ready时切换输出data即可
    output logic [ADDR_WIDTH-1:0] axi_awaddr,//地址,默认置为0
    output logic [7:0] axi_awlen,//beats个数 256（普通模式）或者128（特殊模式）
    output logic [2:0] axi_awsize,//一个beat的大小 确定是32bits
    output logic [1:0] axi_awburst, //传输类型 incr 2'b01
    output logic axi_wlast//最后一个数据
);

//---------------------------------------------
//              axi_lite接口
//---------------------------------------------
    logic start,
    logic mixed,
    params::compute_type_t compute_type,
    axi_lite #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH)
    ) axi_lite_inst (
        .aclk(clk),
        .aresetn(~rst),
        .arvalid(lite_arvalid),
        .arready(lite_arready),
        .araddr(lite_araddr),
        .arprot(lite_arprot),
        .rvalid(lite_rvalid),
        .rready(lite_rready),
        .rdata(lite_rdata),
        .rresp(lite_rresp),
        //控制信号
        .start(start),
        .mixed(mixed),
        .compute_type(compute_type)
    );



//---------------------------------------------
//              axi_rd接口连接(中转接口)
//---------------------------------------------
    //给tensorcore axi_in的返回
    logic [DATA_WIDTH-1:0] axi_in_data;
    logic axi_in_finish;
    logic axi_in_valid;
    logic axi_in_arready;
    logic [31:0] axi_in_burst_id;

//tensorcore传过来的请求
    logic [31:0] axi_out_BASE;
    logic [5:0] axi_out_burst_num;
    logic [2:0] axi_out_burst_size;
    logic axi_out_request_valid;
    logic [2:0] axi_out_sel;
    // logic axi_out_issend



    axi_tensor_rd #(
        .ADDR_WIDTH(32),
        .DATA_WIDTH(256)
        ) axi_tensor_rd_inst (
        .aclk(clk),
        .aresetn(~rst),
        // .axi_out_issend(axi_out_issend),
        .m_axi_araddr(m_axi_araddr),
        .m_axi_arlen(m_axi_arlen),
        .m_axi_arsize(m_axi_arsize),
        .m_axi_arburst(m_axi_arburst),
        .m_axi_arvalid(m_axi_arvalid),
        .m_axi_arready(m_axi_arready),
        .m_axi_rdata(m_axi_rdata),
        .m_axi_rlast(m_axi_rlast),
        .m_axi_rvalid(m_axi_rvalid),
        .m_axi_rready(m_axi_rready),
        //tensorcore
        .axi_in_data(axi_in_data),
        .axi_in_finish(axi_in_finish),
        .axi_in_valid(axi_in_valid),
        .axi_in_arready(axi_in_arready),
        .axi_in_burst_id(axi_in_burst_id), //重要
        .axi_out_BASE(axi_out_BASE),
        .axi_out_burst_num(axi_out_burst_num),
        .axi_out_burst_size(axi_out_burst_size),
        .axi_out_request_valid(axi_out_request_valid),
        .axi_out_sel(axi_out_sel)
    );

//---------------------------------------------
//              tensorcore实例化
//---------------------------------------------

logic [7:0][7:0][127:0] regfiles;
tensorcore #(
	.L(L),
	.ENTRYS(ENTRYS),
	.WIDTH(WIDTH)
)tensorcore_u(
	.clk(clk),
	.rst(rst),
	.start(start),
	.mixed(mixed),
	.axi_out_request_valid(axi_out_request_valid),
	.axi_out_sel(axi_out_sel),
	.axi_out_BASE(axi_out_BASE),
	.axi_out_burst_num(axi_out_burst_num),
	.axi_out_burst_size(axi_out_burst_size),
	.axi_in_arready(axi_in_arready),
	.axi_in_data(axi_in_data),
	.axi_in_finish(axi_in_finish),
	.axi_in_valid(axi_in_valid),
	.axi_in_burst_id(axi_in_burst_id),
	.compute_type(compute_type),
    .regfile(regfiles),
    .wben(wben),
    .addrtype(addrtype)
);



    logic [31:0] wr_data;
    logic wben;
    params::addrgen_t addrtype;

axi_tensor_wr axi_tensor_write(
    .clk(clk),
    .rst(rst),
    .mixed(mixed),
    .wr_enb(wben),
    .addr_type(addrtype),
    .wr_data(wr_data),
    .axi_awvalid(axi_awvalid),
    .axi_wvalid(axi_wvalid),
    .axi_awready(axi_awready),
    .axi_wready(axi_wready),
    .axi_awaddr(axi_awaddr),
    .axi_awlen(axi_awlen),
    .axi_awsize(axi_awsize),
    .axi_awburst(axi_awburst),
    .axi_wlast(axi_wlast),
    .regfiles(regfiles)
);

assign axi_wdata=wr_data;



endmodule