
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
    // output [ID_WIDTH-1:0]      m_axi_arid,
    output [ADDR_WIDTH-1:0]    m_axi_araddr,
    output [7:0]               m_axi_arlen,//transition 数量
    output [2:0]               m_axi_arsize,
    output [1:0]               m_axi_arburst, //传输类型 INCR 01
    output                     m_axi_arvalid,
    input                      m_axi_arready,

    // input  [ID_WIDTH-1:0]      m_axi_rid,
    input  [DATA_WIDTH-1:0]    m_axi_rdata,
    // input  [1:0]               m_axi_rresp,
    input                      m_axi_rlast,
    input                      m_axi_rvalid,
    output                     m_axi_rready,
    
    //给tensorcore axi_in的返回
    output logic [255:0] axi_in_data,
    output logic axi_in_finish,
    output logic axi_in_valid,
    output logic axi_in_arready,
    output logic [31:0] axi_in_burst_id,

    //tensorcore传过来的请求
    input logic [31:0] axi_out_BASE,
    input logic [5:0] axi_out_burst_num,
    input logic [2:0] axi_out_burst_size,
    input logic axi_out_request_valid,
    input logic [2:0] axi_out_sel



);

//处理axi_out的请求
    assign m_axi_araddr = axi_out_BASE;
    assign m_axi_arlen = {2'b0,axi_out_burst_num};
    assign m_axi_arsize = axi_out_burst_size;
    assign m_axi_arvalid = axi_out_request_valid;
    


//处理axi_in的返回
    assign axi_in_finish = m_axi_rlast;
    assign axi_in_data = m_axi_rdata;
    assign axi_in_arready = m_axi_arready;
    assign axi_in_valid = m_axi_rvalid;
    assign m_axi_rready = 1'b1; //总是准备好接收数据

    //计数目前是第多少个有效数据DATA，并传回给burst_id
    reg [31:0] count_burst_id;
    always_ff @(posedge aclk or negedge aresetn) begin
        if (!aresetn) begin
            count_burst_id <= 0;
        end else if (m_axi_arvalid && m_axi_arready) begin
            count_burst_id <= 0; //每次发起新的请求就归零
        end else if (m_axi_rvalid && m_axi_rready) begin
            count_burst_id <= count_burst_id + 1;//每拿一个数据计数+1
        end
    end
    assign axi_in_burst_id = count_burst_id;




endmodule
