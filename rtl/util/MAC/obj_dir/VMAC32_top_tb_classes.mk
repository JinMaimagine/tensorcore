# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VMAC32_top_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VMAC32_top_tb \
	VMAC32_top_tb___024root__DepSet_h4a014256__0 \
	VMAC32_top_tb___024root__DepSet_h2cfbdbfb__0 \
	VMAC32_top_tb_Compressor32__DepSet_h51f864a4__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VMAC32_top_tb___024root__Slow \
	VMAC32_top_tb___024root__DepSet_h4a014256__0__Slow \
	VMAC32_top_tb___024root__DepSet_h2cfbdbfb__0__Slow \
	VMAC32_top_tb_Compressor32__Slow \
	VMAC32_top_tb_Compressor32__DepSet_h3f3392bb__0__Slow \
	VMAC32_top_tb___024unit__Slow \
	VMAC32_top_tb___024unit__DepSet_h697824c9__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VMAC32_top_tb__Trace__0 \
	VMAC32_top_tb__Trace__1 \
	VMAC32_top_tb__Trace__2 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VMAC32_top_tb__Syms \
	VMAC32_top_tb__Trace__0__Slow \
	VMAC32_top_tb__TraceDecls__0__Slow \
	VMAC32_top_tb__Trace__1__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
