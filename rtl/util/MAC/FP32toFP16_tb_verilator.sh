#!/usr/bin/env bash
# ==============================================================
# 用 Verilator 先做语法 / 风格检查，再生成 C++ 级仿真模型
# ==============================================================

set -e                          # 出错即退出
TOP=FP32toFP16                  # DUT 顶层模块名
SRC_DIR=rtl/include            # Verilog 源码目录（可按实际路径修改）

echo "=== ① 语法 / 风格检查 (lint‑only) ==="
verilator --lint-only -Wall \
  -Wno-UNOPTFLAT -Wno-WIDTHCONCAT -Wno-TIMESCALEMOD \
  -Wno-LATCH -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
  -Wno-DECLFILENAME \
  -Wno-BLKANDNBLK -Irtl/include rtl/include/FP32toFP16.v

echo "=== ② 生成 C++ 仿真模型并编译 testbench ==="
verilator -Wall \
  -Wno-UNOPTFLAT -Wno-WIDTHCONCAT -Wno-TIMESCALEMOD \
  -Wno-LATCH -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
  -Wno-DECLFILENAME \
  -Wno-BLKANDNBLK \
    -cc --trace -I${SRC_DIR} \
        --top-module ${TOP} \
        ${SRC_DIR}/FP32toFP16.v \
        -exe tb_FP32toFP16.cpp

echo "=== ③ make 生成最终可执行文件 ==="
    make -C obj_dir -f V${TOP}.mk V${TOP}
echo "=== 完成：可执行文件位于 obj_dir/V${TOP} ==="