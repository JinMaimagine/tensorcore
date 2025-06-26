# TensorCore Hardware Accelerator

A high-performance tensor processing unit (TPU) implementation with systolic array architecture, supporting multiple precision formats and optimized for AI/ML workloads.

## 🚀 Features

- **Multi-Precision Support**: FP32, FP16, INT8, INT4 with mixed precision capabilities
- **Systolic Array Architecture**: 8x8 processing element array for efficient matrix multiplication
- **Configurable Matrix Shapes**: M32K16N8, M16K16N16, M8K16N32 for workload optimization
- **AXI4 Interface**: Full AXI4 compliance with burst optimization
- **Comprehensive Verification**: Verilator-based testbenches with C++ reference models

## 📊 Performance Specifications

| Data Type | Matrix Shape | Throughput | Power Efficiency |
|-----------|--------------|------------|------------------|
| FP32      | 16x16x16     | TBD GOPS   | TBD GOPS/W      |
| FP16      | 16x16x16     | TBD GOPS   | TBD GOPS/W      |
| INT8      | 16x16x16     | TBD GOPS   | TBD GOPS/W      |
| INT4      | 16x16x16     | TBD GOPS   | TBD GOPS/W      |

## 🏗️ Architecture Overview

```
┌─────────────────────────────────────────────────────────────┐
│                    TensorCore Top                           │
├─────────────────┬─────────────────┬─────────────────────────┤
│   AXI-Lite      │   AXI4 Master   │   AXI4 Slave           │
│   (Control)     │   (Memory Read) │   (Memory Write)       │
├─────────────────┴─────────────────┴─────────────────────────┤
│                 TensorCore Core                             │
├─────────────────┬─────────────────┬─────────────────────────┤
│   Control Unit  │  Address Gen    │   Data Transform       │
├─────────────────┼─────────────────┼─────────────────────────┤
│              Systolic Array (8x8)                          │
│  ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐          │
│  │ PE  │ PE  │ PE  │ PE  │ PE  │ PE  │ PE  │ PE  │          │
│  ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤          │
│  │ PE  │ PE  │ PE  │ PE  │ PE  │ PE  │ PE  │ PE  │          │
│  └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘          │
├─────────────────────────────────────────────────────────────┤
│                    SRAM Banks                               │
└─────────────────────────────────────────────────────────────┘
```

## 📁 Directory Structure

```
tensorcore/
├── rtl/                          # RTL source files
│   ├── util/                     # Main RTL implementation
│   │   ├── tensorcore_top.sv     # Top-level module with AXI interfaces
│   │   ├── tensorcore.sv         # Core tensor processing logic
│   │   ├── systolic.sv           # 8x8 systolic array implementation
│   │   ├── PE.sv                 # Processing Element (320 lines)
│   │   ├── MAC/                  # Multiply-Accumulate units
│   │   ├── control.sv            # Control and state machine logic
│   │   ├── sram.sv               # Memory subsystem
│   │   └── para_pkg.sv           # Parameter package and type definitions
│   └── verilator/                # Verification environment
│       ├── Makefile              # Build system
│       ├── main.cpp              # Main testbench
│       └── ref.cpp               # Reference model
├── dataprocess/                  # Python data processing tools
│   ├── dataprocess.py            # Data format conversion utilities
│   ├── calculate.py              # Reference calculations
│   └── process.py                # Test vector generation
├── axi/                          # AXI interface testbenches
└── obj_dir/                      # Verilator build output
```

## 🛠️ Build Instructions

### Prerequisites
- Verilator (>= 4.0)
- GCC/Clang with C++17 support
- Python 3.7+ with NumPy
- Make

### Quick Start
```bash
# Clone the repository
git clone https://github.com/JinMaimagine/tensorcore.git
cd tensorcore

# Build and run simulation
cd rtl/verilator
make compile
make run

# Generate test vectors
cd ../../dataprocess
python dataprocess.py
```

### Advanced Build Options
```bash
# Build with specific configuration
make compile CONFIG=release PRECISION=mixed ARRAY_SIZE=8

# Run regression tests
make regression

# Generate synthesis reports
make synth
```

## 🧪 Verification

The design includes comprehensive verification:

- **Unit Tests**: Individual module verification
- **Integration Tests**: Full system validation
- **Reference Models**: C++ golden reference for comparison
- **Coverage Analysis**: Functional and code coverage metrics

```bash
# Run all tests
cd rtl/verilator
make test

# Run specific test
./obj_dir/Vtensorcore --test=fp16_mixed_precision
```

## 📈 Performance Analysis

### Throughput Calculations
- **Peak Performance**: 8x8 = 64 MAC operations per cycle
- **FP16 Mixed Precision**: ~2x performance boost over FP32
- **INT8 Quantization**: ~4x performance boost with minimal accuracy loss

### Resource Utilization (Target FPGA: Xilinx ZU9EG)
- **LUTs**: ~45,000 (estimated)
- **DSP48E2**: 64 (for MAC units)
- **BRAM**: 128 blocks (for data buffering)
- **Clock Frequency**: Target 200MHz

## 🔧 Configuration

The design supports runtime configuration through AXI-Lite interface:

```c
// Configuration registers
#define TENSORCORE_CTRL_REG     0x00  // Control and status
#define TENSORCORE_CONFIG_REG   0x04  // Data type and shape
#define TENSORCORE_ADDR_A_REG   0x08  // Matrix A base address
#define TENSORCORE_ADDR_B_REG   0x0C  // Matrix B base address
#define TENSORCORE_ADDR_C_REG   0x10  // Matrix C base address
```

## 🎯 Supported Operations

### Matrix Multiplication Modes
- **Standard GEMM**: C = A × B + C
- **Mixed Precision**: FP16 inputs, FP32 accumulation
- **Quantized Inference**: INT8/INT4 with INT32 accumulation

### Data Type Support
| Input A | Input B | Accumulator | Output |
|---------|---------|-------------|--------|
| FP32    | FP32    | FP32        | FP32   |
| FP16    | FP16    | FP16        | FP16   |
| FP16    | FP16    | FP32        | FP32   |
| INT8    | INT8    | INT32       | INT32  |
| INT4    | INT4    | INT32       | INT32  |

## 🏆 Competition Context

This design was developed for the 2025 集创赛中科芯杯 (IC Design Competition), focusing on:
- **Innovation**: Multi-precision systolic array architecture
- **Performance**: Optimized for AI/ML workloads
- **Efficiency**: Power and area optimized design
- **Completeness**: Full system with verification

## 📚 Documentation

- [Architecture Guide](docs/architecture.md) - Detailed design documentation
- [Programming Guide](docs/programming.md) - Software interface
- [Performance Guide](docs/performance.md) - Optimization techniques
- [Verification Guide](docs/verification.md) - Testing methodology

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- Competition organizers: 集创赛中科芯杯
- Reference implementations from academic literature
- Open-source verification tools and methodologies

---

**Note**: This is an active development project. Performance numbers and resource utilization are estimates and subject to change based on implementation and optimization.


