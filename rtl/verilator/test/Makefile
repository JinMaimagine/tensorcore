default: compile
TOP ?= alu

obj_dir/V$(TOP).mk:
	verilator -Wall $(TOP).sv main.cpp --cc --exe --trace --top-module $(TOP)

compile: obj_dir/V$(TOP).mk
	make -C obj_dir -f V$(TOP).mk V$(TOP)  

run:compile
	obj_dir/V$(TOP)
	
.PHONY: default compile clean run

clean:
	rm -rf obj_dir
