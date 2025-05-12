# -----------------------------------------
# Top-level Makefile for MAC testbench run
# -----------------------------------------

# 基础选项
VERILATOR_FLAGS += -Wall --trace --timing -cc

# 架构相关选项 (for Apple Silicon)
VERILATOR_FLAGS += -CFLAGS "-arch arm64"
VERILATOR_FLAGS += -LDFLAGS "-arch arm64"

# 忽略不影响功能的警告
VERILATOR_FLAGS += -Wno-DECLFILENAME   # 文件名不匹配警告
VERILATOR_FLAGS += -Wno-MULTITOP       # 多个顶层模块警告  
VERILATOR_FLAGS += -Wno-UNUSED         # 未使用信号警告
VERILATOR_FLAGS += -Wno-UNDRIVEN       # 未驱动信号警告
VERILATOR_FLAGS += -Wno-UNUSEDSIGNAL   # 未使用信号警告
VERILATOR_FLAGS += -Wno-WIDTHEXPAND    # 位宽扩展警告
VERILATOR_FLAGS += -Wno-WIDTHTRUNC     # 位宽截断警告
VERILATOR_FLAGS += -Wno-LATCH          # 锁存器警告
VERILATOR_FLAGS += -Wno-PINCONNECTEMPTY # 空连接警告
VERILATOR_FLAGS += -Wno-MODDUP         # 模块重复定义警告
VERILATOR_FLAGS += -Wno-SHORTREAL      # shortreal 类型警告

# 源文件
VERILATOR_FLAGS += testbench_MAC32/MAC32_top_tb.sv
VERILATOR_FLAGS += rtl/MAC32_top.sv
VERILATOR_FLAGS += rtl/include/fp32_to_fp16_conv.sv
VERILATOR_FLAGS += rtl/include/fp16_to_fp32_conv.sv
VERILATOR_FLAGS += --top-module MAC32_top_tb
VERILATOR_FLAGS += sim_main.cpp        # 添加 C++ main
VERILATOR_FLAGS += dpi/float_to_half.c # 保持原有的 DPI C 实现
VERILATOR_FLAGS += -CFLAGS "-std=c++11"
VERILATOR_FLAGS += -CFLAGS "-I/opt/homebrew/include"
VERILATOR_FLAGS += -LDFLAGS "-L/opt/homebrew/lib"

# DPI 编译选项
VERILATOR_FLAGS += -CFLAGS "-I$(VERILATOR_ROOT)/include"
VERILATOR_FLAGS += -CFLAGS "-I$(VERILATOR_ROOT)/include/vltstd"

# 环境变量设置
VERILATOR_ROOT ?= /opt/homebrew/share/verilator

# Include 路径
VERILATOR_FLAGS += -Irtl
VERILATOR_FLAGS += -Irtl/include
VERILATOR_FLAGS += -Itestbench_MAC32

# 添加生成可执行文件的选项
VERILATOR_FLAGS += --exe
VERILATOR_FLAGS += --build

all:
	VERILATOR_ROOT=$(VERILATOR_ROOT) verilator $(VERILATOR_FLAGS) dpi/float_to_half.c
	@if [ -f obj_dir/VMAC32_top_tb ]; then \
		./obj_dir/VMAC32_top_tb; \
    else \
		echo "Error: Simulation executable not generated"; \
    	exit 1; \
	fi

clean:
	rm -rf obj_dir *.vcd logs