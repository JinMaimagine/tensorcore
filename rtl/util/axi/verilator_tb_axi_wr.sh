source verilator_include.sh
SOURCE_DIR=$(cd $(dirname $0); pwd)
cd ${SOURCE_DIR}
# 1) 生成 C++/仿真模型（顶层是 axi_tensor_wr）
verilator -Wall -cc tensorcore_top.sv \
        ${Verilator_INC} \
        --top-module tensorcore_top \
        --timing -CFLAGS -std=c++17 \
        -Wno-EOFNEWLINE \
        -Wno-DECLFILENAME \
        > lint.log 2>&1

# # 2) 编译
# make -C obj_dir -f Vaxi_tensor_wr.mk -j

# # 3) 运行
# ./obj_dir/Vaxi_tensor_wr          # 成功应打印 2 行 PASS，再 SUMMARY ALL GOOD