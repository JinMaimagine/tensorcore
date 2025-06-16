// tb_axi_tensor_wr.cpp
#include "Vaxi_tensor_wr.h"
#include "verilated.h"
#include <iostream>
#include <vector>
#include <cstdint>
#include <cassert>

static vluint64_t main_time = 0;   // 仿真时间 ns
double sc_time_stamp() { return main_time; }

// ---- DUT 常量 —— 请按 params:: 定义自行调整 --------------------
enum {
    DTYPE_FP32 = 0,
    DTYPE_FP16 = 1,
    DTYPE_INT8 = 2,
    DTYPE_INT4 = 3
};
// ---------------------------------------------------------------

// 产生一个简明可预测的 128‑bit regfile 值：
//   4 个 32‑bit slice 依次存 (wave<<8)|pe_id
static void gen_regfile(uint32_t* w, int pe_id) {
    for (int wave = 0; wave < 4; ++wave) {
        w[wave] = (wave << 8) | pe_id;   // 低 word 在 w[0]
    }
}

// 根据设计规定，给出当前波次/模式的期望输出数据
static uint32_t expected_word(const uint32_t* reg128,
                              int wave, bool special_mode) {
    if (!special_mode) {           // 普通模式: 直接取 32‑bit slice
        return reg128[wave];
    }
    // 特殊模式：把两个 16‑bit 拼成 32‑bit
    if (wave == 0) {               // 波 0 : {47:32, 15:0}
        return (reg128[1] << 16) | (reg128[0] & 0xFFFF);
    } else {                       // 波 1 : {111:96, 79:64}
        return (reg128[3] << 16) | (reg128[2] & 0xFFFF);
    }
}

// ------------------------ 时钟工具 ------------------------------
static void tick(Vaxi_tensor_wr* dut, int n = 1) {
    for (int i = 0; i < n; ++i) {
        dut->clk = 0; dut->eval(); main_time += 5;
        dut->clk = 1; dut->eval(); main_time += 5;
    }
}

// ----------------------  单次模式测试 ---------------------------
static bool run_one_test(Vaxi_tensor_wr* dut,
                         bool special_mode /*false=普通, true=特殊*/) {

    // 1. 复位
    dut->rst  = 1;
    dut->axi_awready = 1;      // 接收端一直 ready
    dut->axi_wready  = 1;
    tick(dut, 5);
    dut->rst = 0;

    // 2. 初始化 regfiles[][][]  (Verilator 对多维数组的展开方式
    //    取决于版本; 典型形式是 regfiles[row][col][word])
    for (int r = 0; r < 8; ++r) {
        for (int c = 0; c < 8; ++c) {
            uint32_t tmp[4];
            int pe_id = r * 8 + c;
            gen_regfile(tmp, pe_id);
            // Verilator 会把三维 regfiles 展平成一维 256×32‑bit 词：
            // index = pe_id * 4 + word
            for (int w = 0; w < 4; ++w) {
                int idx = pe_id * 4 + w;          // 0..255
                dut->regfiles[idx] = tmp[w];
            }
        }
    }

    // 3. 配置输入
    // mixed=0 对于普通/特殊两种模式都成立；特殊模式的判断只看 addr_type
    dut->mixed = 0;

    // addr_type[1:0] = datatype (其余位清零)
    // dut->addr_type = special_mode ? DTYPE_FP16 : DTYPE_FP32;
    // datatype 位于打包结构高 2 bit (3:2)，低 2 bit 为 rc
    dut->addr_type = special_mode ? (DTYPE_FP16 << 2)
                              : (DTYPE_FP32 << 2);

    dut->wr_enb = 1;                    // 拉高 1 拍启动
    tick(dut);
    dut->wr_enb = 0;

    // 4. 期望输出序列
    const int waves     = special_mode ? 2   : 4;
    const int exp_beats = special_mode ? 16 : 32;   // row‑major, 1 beat per row
    std::vector<uint32_t> expect;
    expect.reserve(exp_beats * 8);
    for (int w = 0; w < waves; ++w) {
        for (int r = 0; r < 8; ++r) {            // one row per beat
            uint64_t row_words[8];
            for (int c = 0; c < 8; ++c) {
                uint32_t rf[4]; gen_regfile(rf, r * 8 + c);
                row_words[c] = expected_word(rf, w, special_mode);
            }
            expect.insert(expect.end(), row_words, row_words + 8);
        }
    }
    assert((int)expect.size() == exp_beats * 8);

    // 5. 采集并比对
    int beat_idx = 0;
    bool pass = true;
    while (beat_idx < exp_beats) {
        tick(dut);
        if (dut->axi_wvalid && dut->axi_wready) {
            // DUT wr_data is 256‑bit little‑endian word array wr_data[0..7]
            for (int seg = 0; seg < 8; ++seg) {
                uint32_t got = dut->wr_data[seg];
                uint32_t exp = expect[beat_idx*8 + seg];
                if (got != exp) {
                    std::cerr << "Mismatch beat " << beat_idx
                              << " seg " << seg
                              << "  exp=0x" << std::hex << exp
                              << "  got=0x" << got << std::dec << "\n";
                    pass = false;
                }
            }
            ++beat_idx;
        }
    }
    // 检查 axi_wlast
    if (!dut->axi_wlast) {
        std::cerr << "axi_wlast did not assert on final beat\n";
        pass = false;
    }

    std::cout << (special_mode ? "[SPECIAL]" : "[NORMAL] ")
              << (pass ? "PASS\n" : "FAIL\n");
    return pass;
}

// ----------------------------- 主函数 ---------------------------
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vaxi_tensor_wr;

    bool ok_normal  = run_one_test(dut, /*special=*/false);
    bool ok_special = run_one_test(dut, /*special=*/true);

    std::cout << "\nSUMMARY: "
              << (ok_normal && ok_special ? "ALL GOOD\n" : "SEE ERRORS ↑\n");

    delete dut;
    return (ok_normal && ok_special) ? 0 : 1;
}