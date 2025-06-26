# TensorCore Verilator Makefile
# Enhanced build system with configuration options and additional targets

# Configuration variables
TOP         ?= tensorcore
CONFIG      ?= debug
PRECISION   ?= mixed
ARRAY_SIZE  ?= 8

# Directory paths
TOPDIR      = $(abspath $(CURDIR)/../util)
OBJDIR      = $(abspath $(CURDIR)/../../obj_dir)
VERILATORDIR = $(abspath $(CURDIR))

# Build configuration
ifeq ($(CONFIG),release)
    CFLAGS_CONFIG = -O3 -DNDEBUG
    VFLAGS_CONFIG = -O3
else
    CFLAGS_CONFIG = -O0 -g -DDEBUG
    VFLAGS_CONFIG = --debug
endif

# Precision configuration
ifeq ($(PRECISION),mixed)
    CFLAGS_PRECISION = -DMIXED_PRECISION
    VFLAGS_PRECISION = -DMIXED_PRECISION
else
    CFLAGS_PRECISION = 
    VFLAGS_PRECISION = 
endif

# Combined flags
CFLAGS_EXTRA = $(CFLAGS_CONFIG) $(CFLAGS_PRECISION) -DARRAY_SIZE=$(ARRAY_SIZE)
VFLAGS_EXTRA = $(VFLAGS_CONFIG) $(VFLAGS_PRECISION)

# Source files
RTL_SOURCES = $(wildcard $(TOPDIR)/*.sv) $(wildcard $(TOPDIR)/MAC/*.sv) $(wildcard $(TOPDIR)/MAC/mac/*.sv)
CPP_SOURCES = main.cpp ref.cpp
HEADERS = half.hpp

# Verilator warning suppressions
VFLAGS_WARNINGS = \
	--Wno-LATCH \
	--Wno-UNDRIVEN \
	--Wno-UNUSEDSIGNAL \
	--Wno-CASEINCOMPLETE \
	--Wno-UNUSEDPARAM \
	--Wno-WIDTHTRUNC \
	--Wno-WIDTHEXPAND \
	--Wno-GENUNNAMED \
	--Wno-TIMESCALEMOD \
	--Wno-DECLFILENAME \
	--Wno-VARHIDDEN \
	--Wno-PINCONNECTEMPTY \
	--Wno-MODDUP \
	--Wno-EOFNEWLINE

# Include paths
VFLAGS_INCLUDES = \
	-I$(abspath $(CURDIR)/../util) \
	-I$(abspath $(CURDIR)/../util/MAC) \
	-I$(abspath $(CURDIR)/../util/MAC/mac)

# Main build target
$(OBJDIR)/V$(TOP).mk: $(RTL_SOURCES) $(CPP_SOURCES) $(HEADERS)
	@echo "Building TensorCore with CONFIG=$(CONFIG), PRECISION=$(PRECISION), ARRAY_SIZE=$(ARRAY_SIZE)"
	@mkdir -p $(OBJDIR)
	verilator -Wall --trace \
		-CFLAGS "-std=c++17 $(CFLAGS_EXTRA)" \
		$(VFLAGS_WARNINGS) \
		$(VFLAGS_INCLUDES) \
		$(VFLAGS_EXTRA) \
		--cc --exe --Mdir $(OBJDIR) \
		$(TOPDIR)/$(TOP).sv main.cpp \
		--top-module $(TOP)
	@for file in $(CPP_SOURCES) $(HEADERS); do \
		ln -sf $(VERILATORDIR)/$$file $(OBJDIR)/$$file; \
	done

# Compile the executable
compile: $(OBJDIR)/V$(TOP).mk
	@echo "Compiling executable..."
	$(MAKE) -C $(OBJDIR) -f V$(TOP).mk V$(TOP)

# Run simulation
run: compile
	@echo "Running simulation..."
	$(OBJDIR)/V$(TOP)

# Lint RTL code
lint:
	@echo "Linting RTL code..."
	verilator --lint-only \
		$(VFLAGS_WARNINGS) \
		$(VFLAGS_INCLUDES) \
		$(TOPDIR)/$(TOP).sv

# Run tests
test: compile
	@echo "Running test suite..."
	@if [ -f test_runner.sh ]; then \
		./test_runner.sh; \
	else \
		echo "No test runner found. Running basic simulation..."; \
		$(OBJDIR)/V$(TOP); \
	fi

# Run regression tests
regression: clean
	@echo "Running regression tests..."
	@for config in debug release; do \
		for precision in normal mixed; do \
			echo "Testing CONFIG=$$config PRECISION=$$precision"; \
			$(MAKE) compile CONFIG=$$config PRECISION=$$precision; \
			$(OBJDIR)/V$(TOP) || exit 1; \
		done; \
	done
	@echo "All regression tests passed!"

# Generate waveforms
waves: compile
	@echo "Generating waveforms..."
	$(OBJDIR)/V$(TOP) --trace
	@if command -v gtkwave >/dev/null 2>&1; then \
		echo "Opening waveforms in GTKWave..."; \
		gtkwave $(TOP).vcd & \
	else \
		echo "GTKWave not found. Waveform saved as $(TOP).vcd"; \
	fi

# Run code optimization analysis
optimize:
	@echo "Running code optimization analysis..."
	@if [ -f ../../scripts/code_optimizer.py ]; then \
		python3 ../../scripts/code_optimizer.py $(TOPDIR); \
	else \
		echo "Code optimizer not found. Please ensure scripts/code_optimizer.py exists."; \
	fi

# Estimate FPGA resource utilization
resource:
	@echo "Estimating FPGA resource utilization..."
	@if [ -f ../../scripts/resource_estimator.py ]; then \
		python3 ../../scripts/resource_estimator.py \
			--fpga $(or $(FPGA),zynq_ultrascale) \
			--array-size $(ARRAY_SIZE) \
			--data-type $(if $(filter mixed,$(PRECISION)),fp16,fp32); \
	else \
		echo "Resource estimator not found. Please ensure scripts/resource_estimator.py exists."; \
	fi

# Run performance analysis
performance:
	@echo "Running performance analysis..."
	@if [ -f ../../scripts/performance_analysis.py ]; then \
		python3 ../../scripts/performance_analysis.py --clock-freq 200; \
	else \
		echo "Performance analyzer not found. Please ensure scripts/performance_analysis.py exists."; \
	fi

# Run comprehensive test framework
test-suite: compile
	@echo "Running comprehensive test framework..."
	@if [ -f ../../scripts/test_framework.py ]; then \
		python3 ../../scripts/test_framework.py \
			--build-dir $(OBJDIR) \
			--exe V$(TOP) \
			--test-types unit integration; \
	else \
		echo "Test framework not found. Please ensure scripts/test_framework.py exists."; \
	fi

# Show build information
info:
	@echo "TensorCore Build Configuration:"
	@echo "  TOP         = $(TOP)"
	@echo "  CONFIG      = $(CONFIG)"
	@echo "  PRECISION   = $(PRECISION)"
	@echo "  ARRAY_SIZE  = $(ARRAY_SIZE)"
	@echo "  TOPDIR      = $(TOPDIR)"
	@echo "  OBJDIR      = $(OBJDIR)"
	@echo "  RTL Sources = $(words $(RTL_SOURCES)) files"
	@echo "  C++ Sources = $(CPP_SOURCES)"

# Help target
help:
	@echo "TensorCore Makefile Help"
	@echo "========================"
	@echo ""
	@echo "Targets:"
	@echo "  compile     - Build the simulation executable"
	@echo "  run         - Run the simulation"
	@echo "  lint        - Lint RTL code for syntax errors"
	@echo "  test        - Run test suite"
	@echo "  regression  - Run regression tests with all configurations"
	@echo "  waves       - Generate and view waveforms"
	@echo "  optimize    - Run code optimization analysis"
	@echo "  resource    - Estimate FPGA resource utilization"
	@echo "  performance - Run performance analysis"
	@echo "  test-suite  - Run comprehensive test framework"
	@echo "  clean       - Clean build artifacts"
	@echo "  info        - Show build configuration"
	@echo "  help        - Show this help message"
	@echo ""
	@echo "Configuration Variables:"
	@echo "  CONFIG      - Build configuration (debug|release) [default: debug]"
	@echo "  PRECISION   - Precision mode (normal|mixed) [default: mixed]"
	@echo "  ARRAY_SIZE  - Systolic array size [default: 8]"
	@echo "  FPGA        - Target FPGA family for resource estimation [default: zynq_ultrascale]"
	@echo ""
	@echo "Examples:"
	@echo "  make compile CONFIG=release PRECISION=mixed"
	@echo "  make run ARRAY_SIZE=16"
	@echo "  make regression"
	@echo "  make optimize"
	@echo "  make resource FPGA=kintex_ultrascale"
	@echo "  make performance"

# Clean build artifacts
clean:
	@echo "Cleaning build artifacts..."
	rm -rf $(OBJDIR)
	rm -f *.vcd *.fst

# Declare phony targets
.PHONY: all compile run lint test regression waves optimize resource performance test-suite info help clean

# Default target
all: compile