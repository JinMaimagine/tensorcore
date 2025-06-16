/*. AXI-LITE
把
    input logic start, //data[0]
    input logic mixed, //data[1]
    input params::compute_type_t compute_type,//data[5:2]
打包一次送进来
*/
`include "para_pkg.sv"
module axi_lite import params::*; #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
)(
    input  logic                    aclk,
    input  logic                    aresetn,
    output logic                    arvalid,
    input  logic                    arready,
    output logic [ADDR_WIDTH-1:0]   araddr,
    output logic [2:0]              arprot,//3'b000 普通安全访问
    input  logic                    rvalid,
    output logic                    rready,
    input  logic [DATA_WIDTH-1:0]   rdata,
    input  logic [1:0]              rresp, // 2'b00 OKAY, 2'b01 EXOKAY, 
										   //2'b10 SLVERR, 2'b11 DECERR
    output logic                    start,
    output logic                    mixed,
    output compute_type_t           compute_type
);

    // Internal registers
    logic [DATA_WIDTH-1:0] control_reg;
    
    // Read FSM
    enum logic {
        READ_IDLE,
        READ_DATA
    } read_state;
    
    // Read operation
    always_ff @(posedge aclk or negedge aresetn) begin
        if (!aresetn) begin
            read_state <= READ_IDLE;
            arvalid <= 1'b0;
            rready <= 1'b0;
            control_reg <= '0;
            araddr <= '0;
            arprot <= 3'b000;
        end else begin
            case (read_state)
                READ_IDLE: begin
                    arvalid <= 1'b1;  // 发起读请求
                    araddr <= '0;      // 设置读地址
                    arprot <= 3'b000;  // 普通安全访问
                    if (arready) begin
                        arvalid <= 1'b0;
                        rready <= 1'b1;  // 准备接收数据
                        read_state <= READ_DATA;
                    end
                end
                
                READ_DATA: begin
                    if (rvalid && rready) begin
                        if (rresp == 2'b00) begin  // OKAY
                            control_reg <= rdata;   // 只在正常响应时更新控制寄存器
                        end
                        rready <= 1'b0;
                        read_state <= READ_IDLE;
                    end
                end
            endcase
        end
    end

    // 只用低6位
    assign start = control_reg[0];
    assign mixed = control_reg[1];
    assign compute_type = compute_type_t'(control_reg[5:2]);

endmodule