#include "ref.cpp"
// Assuming the previous sections are implemented
// We'll continue the code and focus on the IO signal control, state machine, and AXI communication
#include "Vtensorcore.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

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



// Function to drive the tensorcore IO signals and implement the state machine
void run_tensorcore_test(Vtensorcore* top, VerilatedVcdC* tfp, size_t chunk) {
    // Clock and reset
    bool clk = false;
    bool rst = true; // Start with reset high
    top->clk = clk;
    top->rst = rst;
    top->start = 0;
    top->mixed = 0; // 先设置正常的测试
    top->axi_in_arready = 0;
    top->axi_in_finish = 0;
    top->axi_in_valid = 0;
    top->axi_in_burst_id = 0;
    //此时对于data dont care

    // Simulation setup
    int cycle_count = 0;
    bool in_transfer_state = false;
    bool transfer_done = false;

    uint32_t burst_id = 0;
    uint32_t burst_num = 31; // Example burst_num: 32 data items to transfer
    uint32_t burst_size = 4; // Burst size in bytes (e.g., 4 bytes per burst)

    std::mt19937 rng(std::random_device{}());

    // Example setup, change for different precisions
    const char* argv[] = {"./tensorcore_test", "fp16", "mixed"};
    Options opt = parse_opts(3, const_cast<char**>(argv));


    // Prepare buffers for A, B, C, D
    

    // Now initialize the axi_in values for transfer (to simulate input data from Verilator)
    while (!Verilated::gotFinish() && cycle_count < 1000) {
        clk = !clk;
        top->clk = clk;

        // Reset logic (to keep simulation clean)
        if (cycle_count == 0) {
            top->rst = 1;
        } else {
            top->rst = 0;
        }

        // Simulation of the "start" signal (can be set externally in a real test)
        if (cycle_count == 10) { // Example: activate start after 10 cycles
            top->start = 1;
        } else if (cycle_count == 20) {
            top->start = 0; // Deactivate after starting
        }

        // Handle the state machine logic
        if (top->start && !in_transfer_state && top->axi_out_request_valid) {
            in_transfer_state = true;
            burst_id = 0;
            switch(top->axi_out_sel) {
            case 0:
                top->axi_out_sel = 0; // A
                break;
            case 1:
                top->axi_out_sel = 1; // B
                break;
            case 2:
                top->axi_out_sel = 2; // C
                break;
            default:
                assert(false); // Invalid state
                break;
        }

        }

        top->axi_in_valid=1;


        if (in_transfer_state) {
            if (top->axi_in_valid) {
                if (burst_id < burst_num) {
                    top->axi_in_burst_id = burst_id;
                    burst_id++;
                } else {
                    top->axi_in_finish = 1;
                    in_transfer_state = false; 
                }
            }
        }

        top->eval();

        if (tfp) {
            tfp->dump(cycle_count);
        }

        cycle_count++;
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator context
    Verilated::commandArgs(argc, argv);
    Vtensorcore* top = new Vtensorcore;

    // Prepare the VCD trace file if you want to visualize waveforms
    VerilatedVcdC* tfp = nullptr;
    if (true) { // Enable waveform output
        tfp = new VerilatedVcdC;
        top->trace(tfp, 99);
        tfp->open("tensorcore_test.vcd");
    }

    // Run the test simulation
    run_tensorcore_test(top, tfp, 32); // Adjust chunk_size (default is 32)

    // Clean up
    if (tfp) {
        tfp->close();
    }

    delete top;
    return 0;
}
