#CYCLES=(500 1000 5000 10000 50000 100000 500000 1000000)
#NUM_TESTBENCHES=(64)
#GPU_THREADS=$1
#CYCLES=($2)
#NUM_TESTBENCHES=($3)
VERILATOR_PARTITION_SIZE=(8 16 32)
GPU_THREADS=(256 512 1024)
CYCLES=(10000)
NUM_TESTBENCHES=(1024 4096 16384)
#VERILATOR_PARTITION_SIZE=(16 32)
#GPU_THREADS=(512 1024)
#CYCLES=(10000)
#NUM_TESTBENCHES=(1024)
TIMES=1

OUTPUT_DIR="../../../verif/rtlflow"

for ((k=1; k<=$TIMES; ++k)); do
  
  for vps in ${VERILATOR_PARTITION_SIZE[@]}; do
    for gt in ${GPU_THREADS[@]}; do
      for nc in ${CYCLES[@]}; do
        for ntb in ${NUM_TESTBENCHES[@]}; do

        make -j32 GPU_THREADS=$gt VERILATOR_PARTITION_SIZE=$vps

        cd ../../outdir/nv_small/

        cd rtlflow_thr${gt}_vps${vps}
        #printf "############################################# Verilator partition size: $vps\n" >> ./result.out
        #printf "======================================= Number of GPU threads: $GPU_THREADS =======================================" >> $OUTPUT_DIR/c$nc\_tb$ntb.out
        #printf "======================================= Number of testbenches: $ntb =======================================" >> $OUTPUT_DIR/c$nc\_tb$ntb.out
        #printf "======================================= Cycles: $nc =======================================" >> $OUTPUT_DIR/c$nc\_tb$ntb.out
        #(time ./VNV_nvdla $ntb $nc ../../../verif/verilator/tb_gen_scripts/random_traces/ ) 2>> $OUTPUT_DIR/c$nc\_tb$ntb.out
        ./VNV_nvdla $ntb $nc ../../../verif/verilator/tb_gen_scripts/random_traces/

        cd ../../../verif/rtlflow

        done
      done
    done
  done
done

