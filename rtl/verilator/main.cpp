#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cmath>
#include <iomanip>
#include <memory>
#include <iostream>
#include <fstream>
#include <numeric>

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