//------------------------------------------------------------------------------
//  top.sv – updated to include AXI4‑Full 读/写 + AXI‑Lite 配置接口
//------------------------------------------------------------------------------
//  * axi_tensor_rd  : AXI4‑Full SLAVE  (read A/B/C)
//  * axi_tensor_wr  : AXI4‑Full MASTER (write D)
//  * axi_tensor_cfg : AXI‑Lite   SLAVE (CSR)
//------------------------------------------------------------------------------
`include "rtl/util/tpu_axi.sv"
module top #(
    parameter WIDTH       = 6,
    // AXI parameterisation
    parameter AXI_ADDR_W  = 32,
    parameter AXI_DATA_W  = 256,
    parameter AXI_ID_W    = 4
)(
    //------------------------------------------------------------------
    // 基本时钟 / 复位
    //------------------------------------------------------------------
    input  logic                      clk,
    input  logic                      rst,

    //------------------------------------------------------------------
    // AXI4‑Full SLAVE 端口 (读取矩阵 A/B/C)
    //------------------------------------------------------------------
    input  logic [AXI_ID_W-1:0]       s_arid,
    input  logic [AXI_ADDR_W-1:0]     s_araddr,
    input  logic [7:0]                s_arlen,
    input  logic [2:0]                s_arsize,
    input  logic [1:0]                s_arburst,
    input  logic                      s_arvalid,
    output logic                      s_arready,

    output logic [AXI_ID_W-1:0]       s_rid,
    output logic [AXI_DATA_W-1:0]     s_rdata,
    output logic [1:0]                s_rresp,
    output logic                      s_rlast,
    output logic                      s_rvalid,
    input  logic                      s_rready,

    //------------------------------------------------------------------
    // AXI4‑Full MASTER 端口 (写回矩阵 D)
    //------------------------------------------------------------------
    output logic [AXI_ID_W-1:0]       m_awid,
    output logic [AXI_ADDR_W-1:0]     m_awaddr,
    output logic [7:0]                m_awlen,
    output logic [2:0]                m_awsize,
    output logic [1:0]                m_awburst,
    output logic                      m_awvalid,
    input  logic                      m_awready,

    output logic [AXI_DATA_W-1:0]     m_wdata,
    output logic [(AXI_DATA_W/8)-1:0] m_wstrb,
    output logic                      m_wlast,
    output logic                      m_wvalid,
    input  logic                      m_wready,

    input  logic  [AXI_ID_W-1:0]      m_bid,
    input  logic  [1:0]               m_bresp,
    input  logic                      m_bvalid,
    output logic                      m_bready,

    //------------------------------------------------------------------
    // AXI‑Lite SLAVE 端口 (配置寄存器)
    //------------------------------------------------------------------
    input  logic [11:0]               cfg_awaddr,
    input  logic                      cfg_awvalid,
    output logic                      cfg_awready,
    input  logic [31:0]               cfg_wdata,
    input  logic [3:0]                cfg_wstrb,
    input  logic                      cfg_wvalid,
    output logic                      cfg_wready,
    output logic [1:0]                cfg_bresp,
    output logic                      cfg_bvalid,
    input  logic                      cfg_bready,

    input  logic [11:0]               cfg_araddr,
    input  logic                      cfg_arvalid,
    output logic                      cfg_arready,
    output logic [31:0]               cfg_rdata,
    output logic [1:0]                cfg_rresp,
    output logic                      cfg_rvalid,
    input  logic                      cfg_rready
);

    // -----------------------------------------------------------------
    // 本地 Stream 信号：RD -> CORE -> WR
    // -----------------------------------------------------------------
    logic [AXI_DATA_W-1:0] rd_dat;
    logic                  rd_val, rd_rdy;
    logic [AXI_DATA_W-1:0] wr_dat;
    logic                  wr_val, wr_rdy;

    //============================================================================
    //  AXI 读取 DMA –  A/B/C
    //============================================================================
    axi_tensor_rd #(
        .ADDR_WIDTH (AXI_ADDR_W),
        .DATA_WIDTH (AXI_DATA_W),
        .ID_WIDTH   (AXI_ID_W)
    ) u_axi_rd (
        .aclk          (clk),
        .aresetn       (~rst),
        .s_axi_arid    (s_arid),
        .s_axi_araddr  (s_araddr),
        .s_axi_arlen   (s_arlen),
        .s_axi_arsize  (s_arsize),
        .s_axi_arburst (s_arburst),
        .s_axi_arvalid (s_arvalid),
        .s_axi_arready (s_arready),
        .s_axi_rid     (s_rid),
        .s_axi_rdata   (s_rdata),
        .s_axi_rresp   (s_rresp),
        .s_axi_rlast   (s_rlast),
        .s_axi_rvalid  (s_rvalid),
        .s_axi_rready  (s_rready),
        .m_dat         (rd_dat),
        .m_valid       (rd_val),
        .m_ready       (rd_rdy),
        .rd_idle       (),
        .rd_done       ()
    );

    //============================================================================
    //  AXI 写入 DMA –  D
    //============================================================================
    axi_tensor_wr #(
        .ADDR_WIDTH (AXI_ADDR_W),
        .DATA_WIDTH (AXI_DATA_W),
        .ID_WIDTH   (AXI_ID_W)
    ) u_axi_wr (
        .aclk          (clk),
        .aresetn       (~rst),
        .m_axi_awid    (m_awid),
        .m_axi_awaddr  (m_awaddr),
        .m_axi_awlen   (m_awlen),
        .m_axi_awsize  (m_awsize),
        .m_axi_awburst (m_awburst),
        .m_axi_awvalid (m_awvalid),
        .m_axi_awready (m_awready),
        .m_axi_wdata   (m_wdata),
        .m_axi_wstrb   (m_wstrb),
        .m_axi_wlast   (m_wlast),
        .m_axi_wvalid  (m_wvalid),
        .m_axi_wready  (m_wready),
        .m_axi_bid     (m_bid),
        .m_axi_bresp   (m_bresp),
        .m_axi_bvalid  (m_bvalid),
        .m_axi_bready  (m_bready),
        .s_dat         (wr_dat),
        .s_valid       (wr_val),
        .s_ready       (wr_rdy),
        .wr_idle       (),
        .wr_done       ()
    );

    //============================================================================
    //  AXI‑Lite 配置寄存器
    //============================================================================
    axi_tensor_cfg u_axi_cfg (
        .aclk           (clk),
        .aresetn        (~rst),
        .s_axi_awaddr   (cfg_awaddr),
        .s_axi_awvalid  (cfg_awvalid),
        .s_axi_awready  (cfg_awready),
        .s_axi_wdata    (cfg_wdata),
        .s_axi_wstrb    (cfg_wstrb),
        .s_axi_wvalid   (cfg_wvalid),
        .s_axi_wready   (cfg_wready),
        .s_axi_bresp    (cfg_bresp),
        .s_axi_bvalid   (cfg_bvalid),
        .s_axi_bready   (cfg_bready),
        .s_axi_araddr   (cfg_araddr),
        .s_axi_arvalid  (cfg_arvalid),
        .s_axi_arready  (cfg_arready),
        .s_axi_rdata    (cfg_rdata),
        .s_axi_rresp    (cfg_rresp),
        .s_axi_rvalid   (cfg_rvalid),
        .s_axi_rready   (cfg_rready),
        .cfg_base_addr_A (), .cfg_base_addr_B (), .cfg_base_addr_C (), .cfg_base_addr_D (),
        .cfg_m (), .cfg_n (), .cfg_k (), .cfg_mode (),
        .cfg_start (), .cfg_done (1'b0)
    );

    //============================================================================
    // TODO: 在此插入 Tile‑Buffer + Systolic‑Array 逻辑
    //  目前先把读流回环给写流，验证 AXI 通道连线
    //============================================================================
    assign rd_rdy  = wr_rdy;
    assign wr_dat  = rd_dat;
    assign wr_val  = rd_val;

endmodule
