//将tensorcore包裹在内，实现数据读取
//==============================================================================
// 1. AXI4‑Full SLAVE – read‑only DMA (A/B/C)
//==============================================================================
module axi_tensor_rd #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 256,       // must be power‑of‑2, 32 … 1024
    parameter ID_WIDTH   = 4,
    parameter MAX_BURST  = 16         // beats per burst (2…256)
)(
    // global
    input                      aclk,
    input                      aresetn,

    // AXI4‑Full SLAVE  (read‑only subset)
    // – AW/W/B channels are tied‑off inside.
    input  [ID_WIDTH-1:0]      s_axi_arid,
    input  [ADDR_WIDTH-1:0]    s_axi_araddr,
    input  [7:0]               s_axi_arlen,
    input  [2:0]               s_axi_arsize,
    input  [1:0]               s_axi_arburst,
    input                      s_axi_arvalid,
    output                     s_axi_arready,

    output [ID_WIDTH-1:0]      s_axi_rid,
    output [DATA_WIDTH-1:0]    s_axi_rdata,
    output [1:0]               s_axi_rresp,
    output                     s_axi_rlast,
    output                     s_axi_rvalid,
    input                      s_axi_rready,

    // stream to compute core (one beat == DATA_WIDTH bits)
    output [DATA_WIDTH-1:0]    m_dat,
    output                     m_valid,
    input                      m_ready,

    // status
    output                     rd_idle,
    output                     rd_done
);
    // ---------------------------------------------------------------------
    // Tie‑off unused write channels (tool‑friendly)
    // ---------------------------------------------------------------------
    assign s_axi_awready = 1'b0;
    assign s_axi_wready  = 1'b0;
    assign s_axi_bid     = '0;
    assign s_axi_bresp   = 2'b00;
    assign s_axi_bvalid  = 1'b0;


    // For brevity, behaviour is left as TODO markers.

    // TODO: implement state machine  IDLE -> ISSUE_AR -> RECEIVE -> DONE

    assign rd_idle = 1'b1;    // placeholder
    assign rd_done = 1'b0;
    assign s_axi_arready = 1'b1; // always ready (one outstanding max)
    assign s_axi_rvalid  = m_valid;
    assign s_axi_rdata   = m_dat;
    assign s_axi_rid     = s_axi_arid;
    assign s_axi_rresp   = 2'b00;
    assign s_axi_rlast   = 1'b1;  // every beat is last when len==0 design

endmodule
