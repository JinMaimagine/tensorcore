//将PE当中的计算结果写回
//当前版本输出到DRAM当中的存储格式与计算顺序有关，没有实现重整矩阵
//
module axi_tensor_wr#(
    parameter ADDR_WIDTH = 32,
    parameter MAX_BURST  = 256
)
(
    input  logic clk,
    input  logic rst,
    input  logic mixed,//混合精度
    input  logic wr_enb,//WriteBack模块可以进入WRITEBACK_ADDR状态，拉高一个周期即可
    input  params::addrgen_t addr_type,
        //如果addr_type.datatype=FP16且mixed=0,那这一次采用特殊送出模式
    output logic [31:0] wr_data, //每次送出的数据；
                                 //如果mixed=1，
    output logic axi_awvalid,  //进入WRITEBACK_ADDR状态送地址时置1
    output logic axi_wvalid, //送出数据时同步将valid拉高
    input  logic axi_awready,//接收者说我准备好了,用于address握手，
                            //WriteBack模块可以进入WRITEBACK_DATA状态
    input  logic axi_wready,//接收者说我准备好了,用于data握手
                           //每收到一个wready，代表送走了一个数据，可以将valid拉低并且换另一个数上了
                         //不过当前情况下是数据全部算完才给wr_enb信号,所以进入WRITEBACK_DATA
                         //状态之后，axi_wvalid信号可以常置为1，收到ready时切换输出data即可

    //refiles
    input  logic [7:0][7:0][127:0] regfiles,

    //axi辅助信号
    output logic [ADDR_WIDTH-1:0] axi_awaddr,//地址,默认置为0
    output logic [7:0] axi_awlen,//beats个数 256（普通模式）或者128（特殊模式）
    output logic [2:0] axi_awsize,//一个beat的大小 确定是32bits
    output logic [1:0] axi_awburst //传输类型 incr 2'b01
    output logic axi_wlast//最后一个数据
);
    // ------------------------------------------------------------
    // WriteBack state‑machine implementation
    // ------------------------------------------------------------

    // ─── State encoding ──────────────────────────────────────────
    typedef enum  logic [1:0] {IDLE, WRITEBACK_ADDR, WRITEBACK_DATA} state_t;
    state_t state, state_n;

    // ─── Special‑mode detection (FP16 accumulate & not mixed) ───
    logic special_mode;
    assign special_mode = (~mixed) && (addr_type.datatype == params::DTYPE_FP16);

    // ─── Burst‑length & fixed‑AW channel fields ─────────────────
    logic [8:0] total_beats;
    assign total_beats  = special_mode ? 9'd128 : 9'd256;  // #beats
    assign axi_awaddr   = '0;          // always start at 0
    assign axi_awsize   = 3'b010;      // 32‑bit beat
    assign axi_awburst  = 2'b01;       // INCR
    assign axi_awlen    = special_mode ? 8'd127 : 8'd255;  // AWLEN = beats‑1

    // ─── Handshake helpers ──────────────────────────────────────
    wire aw_hs = axi_awvalid & axi_awready;
    wire w_hs  = axi_wvalid  & axi_wready;

    // ─── Counters ───────────────────────────────────────────────
    logic [8:0]  beat_cnt;  // 0‑255
    logic [1:0]  wave_cnt;  // 0‑3
    logic [6:0]  pe_cnt;    // 0‑63

    // Row / column decode for PE index
    logic [2:0] row_idx, col_idx;
    assign row_idx = pe_cnt[5:3];
    assign col_idx = pe_cnt[2:0];

    // ─── Data path ──────────────────────────────────────────────
    logic [31:0] wr_data_r, wr_data_n;
    assign wr_data   = wr_data_r;

    // Function: choose 32‑bit slice from the 128‑bit regfile
    function automatic logic [31:0] sel_data
        (input logic [1:0] wave,
         input logic       sp_mode,
         input logic [127:0] rf);
        begin
            if (sp_mode) begin
                case (wave)
                    2'd0: sel_data = {rf[47:32],  rf[15:0]};
                    default: sel_data = {rf[111:96], rf[79:64]};
                endcase
            end else begin
                sel_data = rf[wave*32 +: 32];
            end
        end
    endfunction

    // ─── Next‑state & control‑signal logic ──────────────────────
    always_comb begin
        state_n     = state;
        axi_awvalid = 1'b0;
        axi_wvalid  = 1'b0;
        wr_data_n   = wr_data_r;

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
                if (w_hs) begin
                    wr_data_n = sel_data(wave_cnt, special_mode,
                                         regfiles[row_idx][col_idx]);

                    if (beat_cnt == total_beats - 1) begin
                        state_n = IDLE;
                    end
                end
            end
        endcase
    end

    // ─── Sequential section ─────────────────────────────────────
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state      <= IDLE;
            beat_cnt   <= 0;
            wave_cnt   <= 0;
            pe_cnt     <= 0;
            wr_data_r  <= 0;
            axi_wlast  <= 1'b0;
        end else begin
            state <= state_n;

            // initialise on start
            if (state == IDLE && wr_enb) begin
                beat_cnt   <= 0;
                wave_cnt   <= 0;
                pe_cnt     <= 0;
                wr_data_r  <= sel_data(2'd0, special_mode, regfiles[0][0]);
                axi_wlast  <= 1'b0;
            end
            // advance on each successful data beat
            else if (state == WRITEBACK_DATA && w_hs) begin
                beat_cnt <= beat_cnt + 1;

                if (pe_cnt == 7'd63) begin
                    pe_cnt   <= 0;
                    wave_cnt <= wave_cnt + 1;
                end else begin
                    pe_cnt   <= pe_cnt + 1;
                end

                wr_data_r <= wr_data_n;
                if(pe_cnt == 7'd62&&wave_cnt == 2'd3) begin
                    axi_wlast <= 1'b1; //下一个数据是最后一个，所以这里写62
                end else begin
                    axi_wlast <= 1'b0;
                end
            end
        end
    end

endmodule