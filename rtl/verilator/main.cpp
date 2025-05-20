#include "ref.cpp"
// Assuming the previous sections are implemented
// We'll continue the code and focus on the IO signal control, state machine, and AXI communication
#include "Vtensorcore.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#define MAX_BURST_SIZE 8

// Function to drive the tensorcore IO signals and implement the state machine
void run_tensorcore_test(Vtensorcore* top, VerilatedVcdC* tfp, size_t chunk) {
    // Clock and reset
    bool clk = false;
    bool rst = true; // Start with reset high
    top->clk = clk;
    top->rst = rst;
    top->start = 0;
    top->mixed = 0; // 先设置正常的测试
    for(int wi = 0; wi < 10; ++wi) {
        top->axi_in[wi] = 0;
    }
    

    // Simulation setup
    int cycle_count = 0;
    bool in_transfer_state = false;
    bool transfer_done = false;

    uint32_t burst_id = 0;
    uint32_t burst_num = 31; // Example burst_num: 32 data items to transfer
    uint32_t burst_size = 4; // Burst size in bytes (e.g., 4 bytes per burst)

    std::mt19937 rng(std::random_device{}());

    // Example setup, change for different precisions
    Options opt = parse_opts(2, (char*[]){"./tensorcore_test", "fp16", "mixed", "32"});

    // Prepare buffers for A, B, C, D
    std::vector<uint8_t> bufA, bufB, bufC, bufD;

    // We assume matrices A, B, C, D are filled correctly here:
    // Fill them based on the specified options
    if (opt.dtype == DType::FP16 && opt.mixed) {
        // A and B are FP16, C and D are FP32 in mixed mode
        fma_case<half, half, float, float, 32, 16, 8>("Mixed FP16 for A,B and FP32 for C,D", rng, chunk);
    } else {
        // Handle other cases as per previous logic
        fma_case<half, half, half, half, 32, 16, 8>("Pure FP16", rng, chunk);
    }

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
        if (top->start && !in_transfer_state) {
            in_transfer_state = true;
            top->axi_out.request_valid = 1; // Start AXI transaction
            burst_id = 0;
        }

        if (in_transfer_state) {
            if (top->axi_out.request_valid) {
                // Simulate data transfer by filling the AXI output signal
                // Here we are sending data from tensorcore to Verilator (axi_out)
                if (burst_id < burst_num) {
                    // Fill data from the matrix buffer (for simplicity, we use a dummy value here)
                    // Normally, we'd extract the actual data from the matrix buffer based on burst_id
                    top->axi_out.data = 0x12345678; // Dummy data, to be replaced by actual matrix data

                    // Simulate burst size
                    top->axi_out.burst_id = burst_id;

                    // Simulate delay between bursts (1 to 8 cycles random delay)
                    std::uniform_int_distribution<int> dist(1, 8);
                    int delay = dist(rng);
                    if (delay > 1) {
                        // No data transfer for the next few cycles, keep valid = 0
                        top->axi_out.valid = 0;
                    } else {
                        top->axi_out.valid = 1; // Only valid for 1 cycle of transfer
                    }

                    burst_id++;
                } else {
                    // Set finish signal once all bursts are done
                    top->axi_out.finish = 1;
                    in_transfer_state = false; // Back to idle state
                }
            }
        }

        // Handle axi_in to simulate input data from Verilator (to tensorcore)
        if (top->axi_in.valid) {
            // Simulate the reception of data from Verilator to tensorcore
            // You can add more logic here to interact with tensorcore based on axi_in
            // E.g., you can modify tensorcore's input matrix or control signals here
            top->axi_in.arready = 1; // Acknowledge the data reception
        }

        // Call the Verilator simulation tick function
        top->eval();

        // Write the VCD trace (if enabled)
        if (tfp) {
            tfp->dump(cycle_count);
        }

        // Increment the cycle count
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
