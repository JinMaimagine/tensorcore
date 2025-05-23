//把tensorcore axi_rd axi_wr拼在一起 形成 Tensorcore_top
module Tensorcore_top #(
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
	// output [ID_WIDTH-1:0]      m_axi_arid,
	output [ADDR_WIDTH-1:0]    m_axi_araddr,
	output [7:0]               m_axi_arlen,//transition 数量
	output [2:0]               m_axi_arsize,
	output [1:0]               m_axi_arburst, //传输类型 INCR 01
	output                     m_axi_arvalid,
	input                      m_axi_arready,