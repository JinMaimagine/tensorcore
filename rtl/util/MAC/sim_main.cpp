#include "VMAC32_top_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0; // 仿真时间变量

double sc_time_stamp() { // Verilator 需要的回调
    return main_time;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VMAC32_top_tb* tb = new VMAC32_top_tb;

    while (!Verilated::gotFinish()) {
        tb->eval();
        main_time++; // 推进仿真时间
    }

    delete tb;
    return 0;
}