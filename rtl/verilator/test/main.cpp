#include <stdlib.h>
#include <iostream>
#include <verilated.h>   //Verilator库的头文件
#include <verilated_vcd_c.h>  //VCD波形输出头文件
#include "Valu.h"
#include "Valu___024unit.h"

#define MAX_SIM_TIME 200 //定义模拟的时钟边沿数（包括上下边沿）
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    // 实例化一个 Valu 类型的对象 dut
    Valu *dut = new Valu;

    // 开启波形跟踪
    Verilated::traceEverOn(true);
    // 实例化一个 VerilatedVcdC 类型的对象 m_trace，用于波形跟踪
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    // 将 m_trace 与 dut 进行关联，其中5表示波形的采样深度为5级以下
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    int a,b,invalid;
    while (sim_time < MAX_SIM_TIME) {// 循环执行仿真
        dut->clk ^= 1;// 取反时钟信号

        if(dut->clk == 0){
            a = rand() % 32;// 生成随机数 a
            b = rand() % 32;// 生成随机数 b
            dut->a_in = a;
            dut->b_in = b;
            dut->op_in = rand() % 3;
            invalid = rand() % 2;
            dut->in_valid = invalid;
        }

        //调用eval(), 计算 ALU 模块中的所有信号值
        dut->eval();

        if(dut->clk == 0 && invalid == 1){
            printf("sim_time = %ld,a = %d, b = %d, out = %d out_valid = %d\n",sim_time, a, b, dut->out,dut->out_valid);
        }
        
        //将所有跟踪的信号值写入波形转储文件
        m_trace->dump(sim_time);
        sim_time++; // 模拟时钟边沿数加1
    }
    // 关闭波形文件
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
