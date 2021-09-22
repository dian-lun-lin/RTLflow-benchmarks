
VERILATOR_PREFIX	= /home/dian-lun/verilator_rtlflow

clang++ -std=c++14 -g -O3 -I$(VERILATOR_PREFIX)/share/verilator/include/ -I$(VERILATOR_PREFIX)/share/verilator/include/vltstd -Iobj_dir \
 main.cpp \
$(VERILATOR_PREFIX)/share/verilator/include/verilated.cpp \
./obj_dir/Vtb__ALL.a -o tb
