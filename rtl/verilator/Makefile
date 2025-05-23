TOP       	?= tensorcore
TOPDIR		= $(abspath $(CURDIR)/../util)
OBJDIR      = $(abspath $(CURDIR)/../../obj_dir)
VERILATORDIR = $(abspath $(CURDIR))

# 让 verilator 生成到 obj_dir
#--Wno-UNDRIVEN 信号被读取但是没有驱动
$(OBJDIR)/V$(TOP).mk:
	@mkdir -p $(OBJDIR)
	verilator -Wall --trace \
	-CFLAGS   "-std=c++17" \
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
	--Wno-EOFNEWLINE \
	-I$(abspath $(CURDIR)/../util) \
	-I$(abspath $(CURDIR)/../util/MAC) \
	-I$(abspath $(CURDIR)/../util/MAC/mac) \
	--cc --exe --Mdir $(OBJDIR) \
	$(TOPDIR)/$(TOP).sv main.cpp \
	--top-module $(TOP)
	ln -sf $(VERILATORDIR)/main.cpp $(OBJDIR)/main.cpp
	ln -sf $(VERILATORDIR)/ref.cpp $(OBJDIR)/ref.cpp
	ln -sf $(VERILATORDIR)/half.hpp $(OBJDIR)/half.hpp

# 调用 verilator 生成的 Makefile 编译可执行文件

compile: $(OBJDIR)/V$(TOP).mk
	$(MAKE) -C $(OBJDIR) -f V$(TOP).mk V$(TOP)
	

# 运行仿真程序
run: compile
	$(OBJDIR)/V$(TOP)

# 清理
.PHONY: all compile run clean
clean:
	rm -rf $(OBJDIR)