#CYCLES=(500 1000 5000 10000 50000 100000 500000 1000000)
#NUM_TESTBENCHES=(64)
CYCLES=($1)
NUM_TESTBENCHES=($2)
TIMES=1

OUTPUT_DIR="../../../verif/rtlflow"

for ((k=1; k<=$TIMES; ++k)); do
  for nc in ${CYCLES[@]}; do
    for ntb in ${NUM_TESTBENCHES[@]}; do

    make -j32 GPU_THREADS=$ntb

    cd ../../outdir/nv_small/

    cd rtlflow_$ntb
    printf "======================================= Number of testbenches: $ntb =======================================" >> $OUTPUT_DIR/c$nc\_tb$ntb.out
    printf "======================================= Cycles: $nc =======================================" >> $OUTPUT_DIR/c$nc\_tb$ntb.out
    (time ./VNV_nvdla $ntb $nc ../../../verif/verilator/tb_gen_scripts/random_traces/ ) 2>> $OUTPUT_DIR/c$nc\_tb$ntb.out

    cd ../../../verif/rtlflow

    done
  done
done

