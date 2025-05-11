#!/bin/sh

# Get path of this script
DIR=$(dirname "$0")

# List all SV/V files you want to lint
FILES="
  $DIR/rtl/MAC32_top.sv
  $DIR/rtl/include/fp32_to_fp16_conv.sv
  $DIR/rtl/include/fp16_to_fp32_conv.sv
  $DIR/testbench_MAC32/MAC32_top_tb.sv
"

# Include paths (for `include ""` support)
INCLUDES="
  -I$DIR/rtl
  -I$DIR/rtl/include
  -I$DIR/testbench_MAC32
"

echo "## Linting all files..."
for f in $FILES; do
  echo "## Checking $f"
  verilator --lint-only -Wall --timing $INCLUDES "$f"
done
