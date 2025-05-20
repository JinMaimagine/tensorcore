#!/bin/bash

# 获取当前脚本所在目录
DIR=$(cd "$(dirname "$0")"; pwd)
TOP_MODULE="tensorcore"  # 修改为你希望作为顶层的模块名
SRC_DIR="$DIR"        # 源码目录
# TB_NAME="tb_${TOP_MODULE}"  # testbench文件名，例如 tb_MAC_top.cpp
BUILD_DIR="$DIR/build"      # 生成文件输出目录
INCLUDE_DIR="-I$DIR \
            -I$DIR/MAC \
            -I$DIR/MAC/mac"

# 检查testbench是否存在
# if [ ! -f "$SRC_DIR/${TB_NAME}.cpp" ]; then
#     echo "❌ ERROR: Testbench ${TB_NAME}.cpp not found in $SRC_DIR"
#     exit 1
# fi

# 创建构建目录
# mkdir -p $BUILD_DIR

echo "🔍 Step 1: Linting..."
verilator --lint-only -Wall \
    -Wno-DECLFILENAME \
    -Wno-UNUSEDSIGNAL \
    -Wno-EOFNEWLINE \
    -Wno-LATCH \
    -Wno-TIMESCALEMOD \
    -Wno-MODDUP \
    -Wno-PINCONNECTEMPTY \
    -Wno-MULTITOP \
    -Wno-UNOPTFLAT \
    ${INCLUDE_DIR} \
    ${SRC_DIR}/${TOP_MODULE}.sv
if [ $? -ne 0 ]; then
    echo "❌ Linting failed"
    exit 1
fi

echo "✅ Linting passed"

# echo "⚙️  Step 2: Generating C++ simulation model..."
# verilator -Wall -Wno-DECLFILENAME \
#     -Wno-UNUSEDSIGNAL \
#     -Wno-EOFNEWLINE \
#     -Wno-LATCH \
#     -Wno-TIMESCALEMOD \
#     -Wno-MODDUP \
#     -Wno-PINCONNECTEMPTY \
#     -Wno-MULTITOP \
#     -cc --exe \
#     -Mdir ${BUILD_DIR} \
#     ${INCLUDE_DIR} \
#     -std-waiver ${SRC_DIR}/lint.vlt \
#   ${SRC_DIR}/${TOP_MODULE}.sv \
#   ${SRC_DIR}/${TB_NAME}.cpp \
#   -o ${BUILD_DIR}/${TB_NAME}

# if [ $? -ne 0 ]; then
#     echo "❌ Verilator code generation failed"
#     exit 1
# fi

# echo "🔧 Step 3: Building C++ simulation..."
# make -C ${BUILD_DIR} -f V${TOP_MODULE}.mk

# if [ $? -ne 0 ]; then
#     echo "❌ Compilation failed"
#     exit 1
# fi

# echo "🚀 Step 4: Running simulation..."
# ${BUILD_DIR}/${TB_NAME}