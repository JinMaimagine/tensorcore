#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cmath>
#include <iomanip>
#include <memory>
#include <iostream>
#include <fstream>
#include <numeric>


#define MAX_SIM_TIME 200 //定义模拟的时钟边沿数（包括上下边沿）
vluint64_t sim_time = 0;

struct DUT: public Vtop {
    protected:
        VerilatedVcdC * tfp = nullptr;
        uint64_t sim_clk = 0;
    public:
        using Vtop::Vtop;
        ~DUT() {
            if(tfp) tfp->close();
            delete tfp;
        }
        void open_vcd(const char * file) {
            tfp = new VerilatedVcdC;
            this->trace(tfp, 99);
            tfp->open(file);
        }
        void init() {
            this->rst = 1;
            this->step(1);
            this->rst = 0;
        }
        void step(int num_clks=1) {
            for(int i = 0; i < num_clks; i++) {
                this->clk = 0;
                this->eval();
                if(this->tfp) {
                    tfp->dump(sim_clk);
                    sim_clk++;
                }
                this->clk = 1;
                this->eval();
                if(this->tfp) {
                    tfp->dump(sim_clk);
                    sim_clk++;
                }
            }
        }
        // uint8_t * lhs_ptr = (uint8_t*)&lhs_ptr_0;
        // uint8_t * lhs_col = (uint8_t*)&lhs_col_0;
        // uint8_t * lhs_data = (uint8_t*)&lhs_data_0;
        // uint8_t * rhs = (uint8_t*)&rhs_0;
        // uint8_t * out = (uint8_t*)&out_0;
    };
    int main(int argc, char** argv, char** env) {
        // 实例化一个 Vtop 类型的对象 dut
        Vtop *dut = new Vtop;
    
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