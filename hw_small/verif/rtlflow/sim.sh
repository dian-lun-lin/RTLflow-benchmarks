#CYCLES=(500 1000 5000 10000 50000 100000 500000 1000000)
#NUM_TESTBENCHES=(64)
#VERILATOR_PARTITION_SIZE=($1)
#BATCH=($2)
#CYCLES=($3)
#NUM_TESTBENCHES=($4)
#WEIGHT_FILE=($5)
VERILATOR_PARTITION_SIZE=(8)
BATCH=(16384)
CYCLES=(100000)
NUM_TESTBENCHES=(16384)
WEIGHT_FILE=("./real_estimated_weights.out")

#BATCH=(256 512 1024)
#CYCLES=(10000)
#NUM_TESTBENCHES=(1024 4096 16384)
#VERILATOR_PARTITION_SIZE=(16 32)
#BATCH=(512 1024)
#CYCLES=(10000)
#NUM_TESTBENCHES=(1024)
TIMES=1

OUTPUT_DIR="../../../verif/rtlflow"

if [[ "$1" == "-h" ]]; then
  echo "usage: ./sim.sh verilator_partition_size batch_size num_cycles num_testbenches weight_file"
  exit
fi

for ((k=1; k<=$TIMES; ++k)); do
  
  for vps in ${VERILATOR_PARTITION_SIZE[@]}; do
    for bs in ${BATCH[@]}; do
      for nc in ${CYCLES[@]}; do
        for ntb in ${NUM_TESTBENCHES[@]}; do

        mkdir ../../outdir/nv_small/rtlflow_bs${bs}_vps${vps}
        #cp $WEIGHT_FILE ../../outdir/nv_small/rtlflow_bs${bs}_vps${vps}/weights.out

        make -j32 BATCH=$bs VERILATOR_PARTITION_SIZE=$vps

        cd ../../outdir/nv_small/

        cd rtlflow_bs${bs}_vps${vps}
        #printf "############################################# Verilator partition size: $vps\n" >> ./result.out
        #printf "======================================= Number of GPU threads: $BATCH =======================================" >> $OUTPUT_DIR/c$nc\_tb$ntb.out
        #printf "======================================= Number of testbenches: $ntb =======================================" >> $OUTPUT_DIR/c$nc\_tb$ntb.out
        #printf "======================================= Cycles: $nc =======================================" >> $OUTPUT_DIR/c$nc\_tb$ntb.out
        (time ./VNV_nvdla $ntb $nc ../../../verif/verilator/tb_gen_scripts/random_traces/ ) 2>> $OUTPUT_DIR/c$nc\_tb$ntb.out
        #./VNV_nvdla $ntb $nc ../../../verif/verilator/tb_gen_scripts/random_traces/

        cd ../../../verif/rtlflow

        done
      done
    done
  done
done

