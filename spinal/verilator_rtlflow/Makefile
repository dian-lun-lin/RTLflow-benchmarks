

SRC_FILE 			= ../spinal/ExampleTop.sim.v
RF_VERILATOR_PREFIX	= /home/scratch.dianlunl_nvresearch/github/verilator_rtlflow
#VERILATOR_PREFIX	= /home/dian-lun/verilator

all: tb

#============================================================
# No tracing
#============================================================
	#nvcc -arch=sm_75 -std=c++17 -O2 -DNUM_TESTBENCHES=$(NUM_TESTBENCHES) -I$(VERILATOR_PREFIX)/include/ -I$(RF_VERILATOR_PREFIX)/include/ --extended-lambda -DVL_THREADED=2 -I/home/dian-lun/taskflow/taskflow/ -I$(VERILATOR_PREFIX)/include/vltstd -I$(RF_VERILATOR_PREFIX)/include/vltstd -Iobj_dir_rtlflow \
      #./obj_dir_rtlflow/check.o \
      #$(VERILATOR_PREFIX)/include/verilated_threads.cpp \
			#$(VERILATOR_PREFIX)/include/verilated.cpp \
      #./verilator/VExampleTop__ALL.a \

tb: verilator
	nvcc -arch=sm_80 -std=c++17 -O2 -DNUM_TESTBENCHES=$(NUM_TESTBENCHES) -I$(RF_VERILATOR_PREFIX)/include/ --extended-lambda -DVL_THREADED=2 -I/home/scratch.dianlunl_nvresearch/github/taskflow/taskflow/ -I$(RF_VERILATOR_PREFIX)/include/vltstd -Iobj_dir_rtlflow \
			$(RF_VERILATOR_PREFIX)/include/rf_verilated.cu \
      ./obj_dir_rtlflow/VExampleTop__ALL.a \
			 main.cu \
			-o tb

.PHONY: verilator
verilator: 
	rm -fr obj_dir_rtlflow
	verilator --threads 2 -CFLAGS "-O2 -DNUM_TESTBENCHES=$(NUM_TESTBENCHES)" --Mdir obj_dir_rtlflow -Wno-fatal -cc  $(SRC_FILE)
	cd obj_dir_rtlflow && make -f VExampleTop.mk
	cp ../spinal/*.bin .

clean:
	\rm -fr *.bin obj_dir_rtlflow

##============================================================
## VCD
##============================================================

#tb_vcd: verilator_vcd
	#clang++-9 -std=c++14 -g -O3 -DTRACE_VCD -I$(VERILATOR_PREFIX)/share/verilator/include/ -I$(VERILATOR_PREFIX)/share/verilator/include/vltstd -Iobj_dir_vcd \
			 #main.cpp \
			#$(VERILATOR_PREFIX)/share/verilator/include/verilated.cpp \
			#$(VERILATOR_PREFIX)/share/verilator/include/verilated_vcd_c.cpp \
			#./obj_dir_vcd/Vtb__ALL.a -o tb_vcd

#.PHONY: verilator_vcd
#verilator_vcd: 
	#rm -fr obj_dir_vcd
	#verilator -CFLAGS "-g -O3" --trace --Mdir obj_dir_vcd -Wno-fatal -cc tb.v $(SRC_FILE)
	#cd obj_dir_vcd && make -f Vtb.mk
	#cp ../spinal/*.bin .

##============================================================
## FST
##============================================================

#tb_fst: verilator_fst
	#clang++-9 -std=c++14 -g -O3 -DTRACE_FST -I$(VERILATOR_PREFIX)/share/verilator/include/ -I$(VERILATOR_PREFIX)/share/verilator/include/vltstd -Iobj_dir_fst \
			 #main.cpp \
			#$(VERILATOR_PREFIX)/share/verilator/include/verilated.cpp \
			#$(VERILATOR_PREFIX)/share/verilator/include/verilated_fst_c.cpp \
			#./obj_dir_fst/Vtb__ALL.a -lz -o tb_fst

#.PHONY: verilator_fst
#verilator_fst: 
	#rm -fr obj_dir_fst
	#verilator -CFLAGS "-g -O3" --trace-fst --Mdir obj_dir_fst -Wno-fatal -cc tb.v $(SRC_FILE)
	#cd obj_dir_fst && make -f Vtb.mk
	#cp ../spinal/*.bin .

#clean:
	#\rm -fr *.bin obj_dir obj_dir_vcd obj_dir_fst tb
