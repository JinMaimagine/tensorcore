//将PE当中的计算结果写回
//当前版本输出到DRAM当中的存储格式与计算顺序有关，没有实现重整矩阵
`include "para_pkg.sv"
module axi_tensor_wr#(
    parameter ADDR_WIDTH = 32
)
(
    input  logic clk,
    input  logic rst,
    input  logic mixed,//混合精度
    input  logic wr_enb,//WriteBack模块可以进入WRITEBACK_ADDR状态，拉高一个周期即可
    input  params::addrgen_t addr_type,
        //如果addr_type.datatype=FP16且mixed=0,那这一次采用特殊送出模式
                                 //如果mixed=1，
    output logic axi_awvalid,  //进入WRITEBACK_ADDR状态送地址时置1
    output logic axi_wvalid, //送出数据时同步将valid拉高
    input  logic axi_awready,//接收者说我准备好了,用于address握手，
                            //WriteBack模块可以进入WRITEBACK_DATA状态
    input  logic axi_wready,//接收者说我准备好了,用于data握手
                           //每收到一个wready，代表送走了一个数据，可以将valid拉低并且换另一个数上了
                         //不过当前情况下是数据全部算完才给wr_enb信号,所以进入WRITEBACK_DATA
                         //状态之后，axi_wvalid信号可以常置为1，收到ready时切换输出data即可

    

    //axi辅助信号
    output logic [ADDR_WIDTH-1:0] axi_awaddr,//地址,默认置为0
    output logic [7:0] axi_awlen,//beats个数 32（普通模式）或者16（特殊模式）
    output logic [2:0] axi_awsize,//一个beat的大小 确定是256bits
    output logic [1:0] axi_awburst, //传输类型 incr 2'b01
    output logic axi_wlast,//最后一个数据
    output logic aw_hs,
    output logic w_hs
);
    // ------------------------------------------------------------
    // WriteBack state‑machine implementation
    // ------------------------------------------------------------

    // ─── State encoding ──────────────────────────────────────────
    typedef enum  logic [1:0] {IDLE, WRITEBACK_ADDR, WRITEBACK_DATA} state_t;
    state_t state, state_n;

    // ─── Special‑mode detection (FP16 accumulate & not mixed) ───
    logic special_mode;
    assign special_mode = (~mixed) && (addr_type.datatype == params::FP16);

    // ─── Burst‑length & fixed‑AW channel fields ─────────────────
    logic [8:0] total_beats;
    assign total_beats  = special_mode ? 9'd16 : 9'd32;  // beats
    assign axi_awaddr   = '0;          // always start at 0
    assign axi_awsize   = 3'b101;      // 256‑bit beat
    assign axi_awburst  = 2'b01;       // INCR
    assign axi_awlen    = special_mode ? 8'd15 : 8'd31;  // AWLEN = beats‑1

    // ─── Handshake helpers ──────────────────────────────────────
    assign aw_hs = axi_awvalid & axi_awready;
    assign w_hs  = axi_wvalid  & axi_wready;

    // ─── Counters ───────────────────────────────────────────────
    logic [8:0]  beat_cnt;  // 0‑32
    logic [1:0]  wave_cnt;  // 0‑3
    logic [2:0]  pe_row_cnt;    // 0-7

    // Row / column decode for PE index
    // logic [2:0] row_idx, col_idx;
    // assign row_idx = pe_cnt[5:3];
    // assign col_idx = pe_cnt[2:0];

    // ─── Data path ──────────────────────────────────────────────
    // Drive current slice combinationally, so wr_data is
    // valid in the *same* cycle as axi_wvalid.


    // ─── Next‑state & control‑signal logic ──────────────────────
    always_comb begin
        state_n     = state;
        axi_awvalid = 1'b0;
        axi_wvalid  = 1'b0;

        case (state)
            IDLE: begin
                if (wr_enb) begin
                    state_n     = WRITEBACK_ADDR;
                    axi_awvalid = 1'b1; 
                end
            end

            WRITEBACK_ADDR: begin
                axi_awvalid = 1'b1;
                if (aw_hs) begin
                    state_n = WRITEBACK_DATA;
                end
            end

            WRITEBACK_DATA: begin
                axi_wvalid = 1'b1;
                if (w_hs) begin//实际上不可能一个周期一直变,一定要等cycle
                    if (beat_cnt == total_beats - 1) begin
                        state_n = IDLE;
                    end
                end
            end

            default: begin
                state_n = IDLE;
            end
        endcase
    end

    // ─── Sequential section ─────────────────────────────────────
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state      <= IDLE;
            beat_cnt   <= 0;
            wave_cnt   <= 0;
            pe_row_cnt     <= 0;
        end else begin
            state <= state_n;

            // initialise on start
            if (state == IDLE && wr_enb) begin
                beat_cnt   <= 0;
                wave_cnt   <= 0;
                pe_row_cnt     <= 0;
            end
            // advance on each successful data beat
            else if (state == WRITEBACK_DATA && w_hs) begin
                beat_cnt <= beat_cnt + 1;

                if (pe_row_cnt == 3'd7) begin
                    pe_row_cnt   <= 0;
                    wave_cnt <= wave_cnt + 1;
                end else begin
                    pe_row_cnt   <= pe_row_cnt + 1;
                end
            end
        end
    end

    // wlast asserts with the final data beat
    assign axi_wlast = (state == WRITEBACK_DATA) &&
                       axi_wvalid && (beat_cnt == total_beats - 1);

endmodule