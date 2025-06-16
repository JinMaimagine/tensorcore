#include "ref.cpp"
// Assuming the previous sections are implemented
// We'll continue the code and focus on the IO signal control, state machine, and AXI communication
#include "Vtensorcore.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdint>

#define MAX_BURST_SIZE 8

/*
input logic clk,
input logic rst,
input logic start,
input logic mixed,
output axi_out_request_valid,
output logic [2:0] axi_out_sel,
output logic [31:0] axi_out_BASE,
output logic [5:0] axi_out_burst_num,
output logic [2:0] axi_out_burst_size,
input logic axi_in_arready,
input logic axi_in_finish,
input logic axi_in_valid,
input logic [255:0] axi_in_data,
input logic [31:0] axi_in_burst_id,
input params::compute_type_t compute_type
*/

struct DUT: public Vtensorcore {
protected:
    VerilatedVcdC * tfp = nullptr;
    uint64_t sim_clock = 0;
public:
    using Vtensorcore::Vtensorcore;
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
    void step(int num_clocks=1) {
        for(int i = 0; i < num_clocks; i++) {
            this->clk = 0;
            this->eval();
            if(this->tfp) {
                tfp->dump(sim_clock);
                sim_clock++;
            }
            this->clk = 1;
            this->eval();
            if(this->tfp) {
                tfp->dump(sim_clock);
                sim_clock++;
            }
        }
    }
    // uint8_t * lhs_ptr = (uint8_t*)&lhs_ptr_0;
    // uint8_t * lhs_col = (uint8_t*)&lhs_col_0;
    // uint8_t * lhs_data = (uint8_t*)&lhs_data_0;
    // uint8_t * rhs = (uint8_t*)&rhs_0;
    // uint8_t * out = (uint8_t*)&out_0;
};


// Function to drive the tensorcore IO signals and implement the state machine
void run_tensorcore_test(DUT* top,size_t chunk) {
    // Clock and reset
    std::cout<<"running tensorcore test"<<std::endl;
    top->start = 0;
    top->mixed = 0; // 先设置正常的测试
    top->axi_in_arready = 0;
    top->axi_in_finish = 0;
    top->axi_in_valid = 0;
    top->axi_in_burst_id = 0;
    top->aw_hs=1;
    top->w_hs=1;


    //top->compute_type=0;//float,32,16,8
    //top->compute_type=4;
    //top->compute_type=8;//float,8,16,32

    //top->compute_type = 1;//fp16 32,16,8   //{compute_shape,compute_type}
    //top->compute_type=5;//fp16,16,16,16
    top->compute_type=9;//fp16,8,16,32

    //mixed:
    //top->mixed = 1;

    //top->compute_type = 2;//int8,32,16,8 //{compute_shape,data_type}
    //top->compute_type = 6;//int8,16,16,16
    //top->compute_type = 10;//int8,8,16,32

    //top->compute_type = 3;//int4,32,16,8 //{compute_shape,data_type}
    //top->compute_type = 7;//int4,16,16,16
    //top->compute_type = 11;//int4,8,16,32
    top->init();
    //此时对于data dont care

    //这里指定测试的类型
    std::mt19937 rng(std::random_device{}());
    //auto fmacase=FmaCase<float,float,float,float,32,16,8>("M32K16×K16N8+M32N8", rng,chunk);
    //auto fmacase=FmaCase<float,float,float,float,16,16,16>("M16K16×K16N16+M16N16", rng,chunk); 
    //auto fmacase=FmaCase<float,float,float,float,8,16,32>("M8K16×K16N32+M8N32", rng,chunk);

    //auto fmacase=FmaCase<half,half,half,half,32,16,8>("M32K16×K16N8+M32N8 ", rng,chunk);    
    //auto fmacase=FmaCase<half,half,half,half,16,16,16>("M32K16×K16N8+M32N8 ", rng,chunk);
    auto fmacase=FmaCase<half,half,half,half,8,16,32>("M32K16×K16N8+M32N8 ", rng,chunk);
       
    //mixed:
    //auto fmacase=FmaCase<half,half,float,float,32,16,8>("M32K16×K16N8+M32N8", rng,chunk);    
    //auto fmacase=FmaCase<half,half,float,float,16,16,16>("M16K16×K16N16+M16N16", rng,chunk);
    //auto fmacase=FmaCase<half,half,float,float,8,16,32>("M8K16×K16N32+M8N32", rng,chunk);

    //auto fmacase=FmaCase<int8_t,int8_t,int8_t,int,32,16,8>("M32K16×K16N8+M32N8", rng,chunk);
    //auto fmacase=FmaCase<int8_t,int8_t,int8_t,int,16,16,16>("M16K16×K16N16+M16N16", rng,chunk);
    //auto fmacase=FmaCase<int8_t,int8_t,int8_t,int,8,16,32>("M8K16×K16N32+M8N32", rng,chunk);

    //auto fmacase=FmaCase<int4_t,int4_t,int4_t,int,32,16,8>("M32K16×K16N8+M32N8", rng,chunk);
    //auto fmacase=FmaCase<int4_t,int4_t,int4_t,int,16,16,16>("M16K16×K16N16+M16N16", rng,chunk);
    //auto fmacase=FmaCase<int4_t,int4_t,int4_t,int,8,16,32>("M8K16×K16N32+M8N32", rng,chunk);
    // Simulation setup
    int cycle_count = 0;
    bool in_transfer_state = false;

    uint32_t burst_id = 0;

    // Example setup, change for different precisions

    // Prepare buffers for A, B, C, D
    
    int bytes_per_beat;
    // Now initialize the axi_in values for transfer (to simulate input data from Verilator)
     std::vector<uint8_t>buf;
     std::cout<<"will display regfile in PE"<<std::endl;
     int delaytime=0;
    while (!Verilated::gotFinish() && cycle_count < 500) {
        top->axi_in_finish=0;//每次清零
        top->axi_in_valid = 0;//正常每次清零
        // Simulation of the "start" signal (can be set externally in a real test)
        if (cycle_count == 10) { // Example: activate start after 10 cycles
            top->start = 1;
        } else if (cycle_count == 20) {
            top->start = 0; // Deactivate after starting
        }
        top->axi_in_arready = 0;
        // Handle the state machine logic
        if (!in_transfer_state && top->axi_out_request_valid) {
            in_transfer_state = true;
            burst_id = 0;
            top->axi_in_arready = 1;
            switch(top->axi_out_sel) {
            case 4:
                buf=fmacase.bufA;
                break;
            case 2:
                buf=fmacase.bufB;
                break;
            case 1:
                buf=fmacase.bufC;
                break;
            default:
                assert(false); // Invalid state
                break;
        }

        }


        //burst_id*burst_size开始,将buf往后读取burst_size个byte,传入axi_in_data开始的burst_size个byte,
        //axi_in_data是int [8]的数组
        if (in_transfer_state) {
            top->axi_in_valid=delaytime==0;
            if(delaytime>0)
            {
                delaytime--;
            }
            else
            {
                std::uniform_int_distribution<int> dist(1, 3);
                delaytime=dist(rng);
            }
            if (top->axi_in_valid) {
                top->axi_in_burst_id = burst_id;
                for (int w = 0; w < 8; ++w) {
                    top->axi_in_data[w] = 0;//后面为了验证稳定性,可能就会赋随机值
                }
                if(top->compute_type==3||top->compute_type==7||top->compute_type==11)
                {
                    //todo:
                    bytes_per_beat = 1u << top->axi_out_burst_size;
                    int base = 2 * burst_id * bytes_per_beat;
                    for (int i = 0; i < 2*bytes_per_beat; ++i) {
                    uint8_t v = buf[base + i];
                    v&= 0x0F; // 避免对后面的|发生影响
                    int word_idx   = i / 8;         // 每 8 个uint4一个 32bit word
                    int byte_shift = (i % 8) * 4;   // byte 在 word 内的偏移
                    top->axi_in_data[word_idx] |= uint32_t(v) << byte_shift;
                }
                }
                else
                {
                // 从 buf 的 offset = burst_id*burst_size 开始，取 burst_size 字节
                bytes_per_beat = 1u << top->axi_out_burst_size;
                int base = burst_id * bytes_per_beat;
                for (int i = 0; i < bytes_per_beat; ++i) {
                    uint8_t v = buf[base + i];
                    int word_idx   = i / 4;         // 每 4 字节一个 32bit word
                    int byte_shift = (i % 4) * 8;   // byte 在 word 内的偏移
                    top->axi_in_data[word_idx] |= uint32_t(v) << byte_shift;
                }
            }
                if (top->axi_in_burst_id < top->axi_out_burst_num) {
                    burst_id++;
                } else {
                    top->axi_in_finish = 1;
                    in_transfer_state = false; 
                }
            }
        }

        top->step();
        cycle_count++;
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator context
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    DUT* top = new DUT;
    top->open_vcd("tensorcore.vcd"); 
    // Prepare the VCD trace file if you want to visualize waveforms
    // Run the test simulation
    run_tensorcore_test(top,32); // Adjust chunk_size (default is 32)
    //目前还在可视化阶段,我应该弄一个函数,将D矩阵切成8*8的大块(先按行,然后再按照列),然后维度在3维,先按照行切在按照列切,这样能与原来的部分很好的相融合
    //上面的已完成
    delete top;
    return 0;
}
