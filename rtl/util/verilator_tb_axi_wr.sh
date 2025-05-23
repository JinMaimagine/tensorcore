# 1) 生成 C++/仿真模型（顶层是 axi_tensor_wr）
verilator -Wall -cc axi_wr.sv \
         --top-module axi_tensor_wr \
         --timing -CFLAGS -std=c++17 \
		 -Wno-EOFNEWLINE \
		 -Wno-DECLFILENAME \
         --exe tb_axi_tensor_wr.cpp

# 2) 编译
make -C obj_dir -f Vaxi_tensor_wr.mk -j

# 3) 运行
./obj_dir/Vaxi_tensor_wr          # 成功应打印 2 行 PASS，再 SUMMARY ALL GOOD