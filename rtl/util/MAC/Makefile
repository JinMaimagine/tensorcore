# -----------------------------------------
# Top-level Makefile for MAC testbench run
# -----------------------------------------

VERILATOR_FLAGS += -Wall --trace --timing
VERILATOR_FLAGS += -cc testbench_MAC32/MAC32_top_tb.sv
VERILATOR_FLAGS += rtl/MAC32_top.sv
VERILATOR_FLAGS += rtl/include/fp32_to_fp16_conv.sv
VERILATOR_FLAGS += rtl/include/fp16_to_fp32_conv.sv
VERILATOR_FLAGS += --top-module MAC32_top_tb
VERILATOR_FLAGS += -CFLAGS "-std=c11"

all:
	verilator $(VERILATOR_FLAGS) dpi/float_to_half.c
	make -C obj_dir -f VMAC32_top_tb.mk
	./obj_dir/VMAC32_top_tb

clean:
	rm -rf obj_dir *.vcd logs
