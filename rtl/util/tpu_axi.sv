//------------------------------------------------------------------------------
// TPU AXI Interface Pack – minimal skeleton modules for the contest project
//-----------------------------------------------------------------------------
//  * axi_tensor_rd  : AXI4‑Full **slave** → stream FIFO (read A/B/C matrices)
//  * axi_tensor_wr  : AXI4‑Full **master** ← stream FIFO (write D matrix)
//  * axi_tensor_cfg : AXI‑Lite **slave**   → local CSR bank (configure TPU)
//
// Design goals
//  • Keep only the signals really needed for a single‑ID, single‑outstanding
//    burst design (no locks, QoS, regions…).
//  • Parameterise data width to 128/256/512/1024 bit; default 256 bit.
//  • Expose clean streaming ports to core logic (valid/ready handshake).
//  • Write‑side uses simple 2‑deep skid buffers to meet 200 MHz timing.
//
// Author : <your‑team‑name> – 2025
//-----------------------------------------------------------------------------

`timescale 1ns/1ps

//==============================================================================
// 1. AXI4‑Full SLAVE – read‑only DMA (A/B/C)
//==============================================================================
module axi_tensor_rd #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 256,       // must be power‑of‑2, 32 … 1024
    parameter ID_WIDTH   = 4,
    parameter MAX_BURST  = 256         // beats per burst (2…256)
)(
    // global
    input                      aclk,
    input                      aresetn,

    // AXI4‑Full MASTER  (read‑only subset)
    // – AW/W/B channels are tied‑off inside.
    output [ID_WIDTH-1:0]      m_axi_arid,
    output [ADDR_WIDTH-1:0]    m_axi_araddr,
    output [7:0]               m_axi_arlen,
    output [2:0]               m_axi_arsize,
    output [1:0]               m_axi_arburst,
    output                     m_axi_arvalid,
    input                      m_axi_arready,

    input  [ID_WIDTH-1:0]      m_axi_rid,
    input  [DATA_WIDTH-1:0]    m_axi_rdata,
    input  [1:0]               m_axi_rresp,
    input                      m_axi_rlast,
    input                      m_axi_rvalid,
    output                     m_axi_rready,

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

    // AXI4 read address channel (as master)
    assign m_axi_arid    = '0;
    assign m_axi_araddr  = '0;
    assign m_axi_arlen   = 8'd0;
    assign m_axi_arsize  = $clog2(DATA_WIDTH/8);
    assign m_axi_arburst = 2'b01; // INCR
    assign m_axi_arvalid = 1'b0; // placeholder – assert once per burst

    // AXI4 read data channel (as master)
    assign m_axi_rready  = m_ready;

    // Stream out from AXI read data
    assign m_dat   = m_axi_rdata;
    assign m_valid = m_axi_rvalid;


endmodule

//==============================================================================
// 2. AXI4‑Full MASTER – write‑only DMA (D)
//==============================================================================
module axi_tensor_wr #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 256,
    parameter ID_WIDTH   = 4,
    parameter MAX_BURST  = 16
)(
    input                       aclk,
    input                       aresetn,

    // AXI4‑Full MASTER (write‑only subset)
    output [ID_WIDTH-1:0]       m_axi_awid,
    output [ADDR_WIDTH-1:0]     m_axi_awaddr,
    output [7:0]                m_axi_awlen,
    output [2:0]                m_axi_awsize,
    output [1:0]                m_axi_awburst,
    output                      m_axi_awvalid,
    input                       m_axi_awready,

    output [DATA_WIDTH-1:0]     m_axi_wdata,
    output [(DATA_WIDTH/8)-1:0] m_axi_wstrb,
    output                      m_axi_wlast,
    output                      m_axi_wvalid,
    input                       m_axi_wready,

    input  [ID_WIDTH-1:0]       m_axi_bid,
    input  [1:0]                m_axi_bresp,
    input                       m_axi_bvalid,
    output                      m_axi_bready,

    // stream from compute core
    input  [DATA_WIDTH-1:0]     s_dat,
    input                       s_valid,
    output                      s_ready,

    output                      wr_idle,
    output                      wr_done
);
    // TODO: implement simple skid‑buffer + 2‑state AW/W FSM.

    assign s_ready       = m_axi_wready; // direct back‑pressure
    assign m_axi_awvalid = 1'b0; // placeholder – assert once per burst
    assign m_axi_wvalid  = s_valid;
    assign m_axi_wdata   = s_dat;
    assign m_axi_wstrb   = { (DATA_WIDTH/8){1'b1} };
    assign m_axi_wlast   = 1'b1; // every beat last when len==0 design
    assign m_axi_awid    = '0;
    assign m_axi_awaddr  = '0;
    assign m_axi_awlen   = 8'd0;
    assign m_axi_awsize  = $clog2(DATA_WIDTH/8);
    assign m_axi_awburst = 2'b01; // INCR
    assign m_axi_bready  = 1'b1;
    assign wr_idle       = 1'b1;
    assign wr_done       = m_axi_bvalid;
endmodule

//==============================================================================
// 3. AXI‑Lite SLAVE – configuration registers
//==============================================================================
module axi_tensor_cfg #(
    parameter ADDR_WIDTH = 12,   // 4 KB register space
    parameter DATA_WIDTH = 32
)(
    input                       aclk,
    input                       aresetn,

    // AXI‑Lite SLAVE
    input  [ADDR_WIDTH-1:0]     s_axi_awaddr,
    input                       s_axi_awvalid,
    output                      s_axi_awready,
    input  [DATA_WIDTH-1:0]     s_axi_wdata,
    input  [(DATA_WIDTH/8)-1:0] s_axi_wstrb,
    input                       s_axi_wvalid,
    output                      s_axi_wready,
    output [1:0]                s_axi_bresp,
    output                      s_axi_bvalid,
    input                       s_axi_bready,

    input  [ADDR_WIDTH-1:0]     s_axi_araddr,
    input                       s_axi_arvalid,
    output                      s_axi_arready,
    output [DATA_WIDTH-1:0]     s_axi_rdata,
    output [1:0]                s_axi_rresp,
    output                      s_axi_rvalid,
    input                       s_axi_rready,

    // decoded control outputs (example)
    output [31:0]               cfg_base_addr_A,
    output [31:0]               cfg_base_addr_B,
    output [31:0]               cfg_base_addr_C,
    output [31:0]               cfg_base_addr_D,
    output [15:0]               cfg_m,
    output [15:0]               cfg_n,
    output [15:0]               cfg_k,
    output [2:0]                cfg_mode,
    output                      cfg_start,
    input                       cfg_done
);
    // ------------------------------------------------------------------
    // tiny register bank – 8 words
    // ------------------------------------------------------------------
    localparam REG_NUM = 8;
    reg [DATA_WIDTH-1:0] regfile[0:REG_NUM-1];

    // write side
    assign s_axi_awready = ~s_axi_awvalid; // single outstanding
    assign s_axi_wready  = s_axi_awready;
    assign s_axi_bresp   = 2'b00;
    assign s_axi_bvalid  = s_axi_wvalid;

    always @(posedge aclk)
        if (!aresetn) begin
            regfile[0] <= 0; // BASE_A
            regfile[1] <= 0; // BASE_B
            regfile[2] <= 0; // BASE_C
            regfile[3] <= 0; // BASE_D
            regfile[4] <= 0; // (m | n)
            regfile[5] <= 0; // k
            regfile[6] <= 0; // mode,start
        end else if (s_axi_wvalid && s_axi_awvalid) begin
            integer i;
            for (i=0;i<DATA_WIDTH/8;i=i+1)
                if (s_axi_wstrb[i])
                    regfile[s_axi_awaddr[4+:3]][i*8 +:8] <= s_axi_wdata[i*8 +:8];
        end

    // read side
    assign s_axi_arready = 1'b1;
    assign s_axi_rdata   = regfile[s_axi_araddr[4+:3]];
    assign s_axi_rresp   = 2'b00;
    assign s_axi_rvalid  = s_axi_arvalid;

    // decode outputs
    assign cfg_base_addr_A = regfile[0];
    assign cfg_base_addr_B = regfile[1];
    assign cfg_base_addr_C = regfile[2];
    assign cfg_base_addr_D = regfile[3];
    assign cfg_m           = regfile[4][15:0];
    assign cfg_n           = regfile[4][31:16];
    assign cfg_k           = regfile[5][15:0];
    assign cfg_mode        = regfile[6][2:0];
    assign cfg_start       = regfile[6][8];

    // optional: auto‑clear start when done
    always @(posedge aclk)
        if (cfg_done)
            regfile[6][8] <= 1'b0;

endmodule
