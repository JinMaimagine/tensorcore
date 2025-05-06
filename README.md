# tensorcore
## 目录说明
```  
dataprocess:python对于bin文件的处理,作为基础数据
rtl/verilator:利用verilator进行最终的rtl验证
obj_dir:verilator的生成
rtl/util:最终的rtl实现
```  
## rtl/util部分:
- **top.sv**  
  顶层模块，将 TensorCore 与 AXI 总线相连接。  
- **tensorcore.sv**  
  核心模块，暴露三个 AXI 接口：数据/状态口、Master 口、Slave 口。  
- **systolic.sv**  
  实现矩阵乘法的 Systolic 阵列结构。  
- **PE.sv**  
  处理单元 (Processing Element)，负责子矩阵的乘累加。  
- **MAC.sv**  
  FMA 单元 (乘加器)，实现乘法累加操作。  
- **control.sv**  
  （示例）负责启动、握手、完成等控制逻辑。


