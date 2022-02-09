# Makefile
# Build system for Verilator testbench
# NVDLA Open Source Project
#
# Copyright (c) 2017 NVIDIA Corporation.  Licensed under the NVDLA Open
# Hardware License.  For more information, see the "LICENSE" file that came
# with this distribution.

DEPTH = ../..
include $(DEPTH)/tools/make/common.make

default: $(DEPTH)/$(OUTDIR)/$(PROJECT)/rtlflow_$(GPU_THREADS)/VNV_nvdla

RTLFLOW_PARAMS ?= -CFLAGS "-O2 -DGPU_THREADS=$(GPU_THREADS)" 
# Perhaps you need to trace?
#   VERILATOR_PARAMS += --trace --trace-depth 7 --trace-max-array 8

# Perhaps you want to optimize?
#   VERILATOR_PARAMS += -O3
#   VMAKE_PARAMS += OPT_FAST=-O

# We end up hardcoding this, because the .f file applies only to nv_full,
# living in outdir, right now.  Otherwise, you're on your own...
$(DEPTH)/outdir/$(PROJECT)/rtlflow_$(GPU_THREADS)/VNV_nvdla.mk: rtlflow_$(PROJECT).f ../../outdir/$(PROJECT)/vmod # and a lot of RTL...
	#$(VERILATOR) $(VERILATOR_PARAMS) --cc --threads 4 --exe nvdla.cu -f verilator_$(PROJECT).f --Mdir ../../outdir/$(PROJECT)/verilator_rtlflow/ --compiler clang --output-split 250000000
	$(RTLFLOW) $(RTLFLOW_PARAMS) --stats --threads-max-mtasks 655360 --cc --threads 32 --exe nvdla.cu -f rtlflow_$(PROJECT).f --Mdir ../../outdir/$(PROJECT)/rtlflow_$(GPU_THREADS)/ --output-split 250000000

$(DEPTH)/$(OUTDIR)/$(PROJECT)/rtlflow_$(GPU_THREADS)/VNV_nvdla: $(DEPTH)/$(OUTDIR)/$(PROJECT)/rtlflow_$(GPU_THREADS)/VNV_nvdla.mk nvdla.cu
	#rm -f $(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator_rtlflow/nvdla.cu
	cp nvdla.cu $(DEPTH)/$(OUTDIR)/$(PROJECT)/rtlflow_$(GPU_THREADS)/nvdla.cu
	make GPU_THREADS=$(GPU_THREADS) VM_PARALLEL_BUILDS=1 -j32 -C $(DEPTH)/$(OUTDIR)/$(PROJECT)/rtlflow_$(GPU_THREADS) -f VNV_nvdla.mk $(VMAKE_PARAMS)

#$(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator_rtlflow/test/%/trace.bin: $(DEPTH)/verif/tests/trace_tests/$(PROJECT)/%/ new_trace_to_verilator.py
	#rm -rf $@
	#mkdir -p $(dir $@)
	#cd $(dir $@) && $(abspath $(DEPTH))/verif/tools/nvdla_trace_parser.py --file_path $(abspath $</$*.cfg)
	#PYTHONPATH=$(DEPTH)/outdir/nv_small/spec/manual $(PYTHON) new_trace_to_verilator.py $(dir $@) $@

#run: $(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator_rtlflow/test/$(TEST)/trace.bin $(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator_rtlflow/VNV_nvdla
	#cd $(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator_rtlflow/test/$(TEST) && ../../VNV_nvdla trace.bin
