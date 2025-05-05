# tensorcore
## 目录说明
```  
dataprocess:python对于bin文件的处理,作为基础数据
rtl/verilator:利用verilator进行最终的rtl验证
obj_dir:verilator的生成
rtl/util:最终的rtl实现
```  
## rtl/util部分:
**top.sv**:最终的top文件,由tensorcore+AXI共同构成
**tensorcore.sv**:tensorcore本身的部分,需要留出AXI的三个接口(数据/状态,master,slave)
**systolic.sv**:要实现的systolic部分
**PE.sv**:要实现的PE部分
**MAC**:是我要实现的FMA单元
*还有控制逻辑的sv由你们自己写,但是要按照上面的文件必须实现,方便验证*


