#!/usr/bin/bash

NUM_THREADS=$1
NUM_TESTBENCHES=(4096 16384 65536)
NUM_CYCLES=(500000)
#TESTBENCHES=(1024 4096 16384 65536)
#cd ../../../outdir/nv_small/verilator
OUTPUT_DIR="./verilator_results"

#if [[ "$1" == "-h" ]]; then
  #echo "usage: ./verilator_sim.sh num_testbenches num_threads num_cycles"
  #exit
#fi

for ntb in ${NUM_TESTBENCHES[@]}; do
  for nc in ${NUM_CYCLES[@]}; do
    printf "======================================= Number of testbenches: $ntb =======================================" >> $OUTPUT_DIR/tb${ntb}_c${nc}.out
    printf "======================================= Number of cycles: $nc =======================================" >> $OUTPUT_DIR/tb${ntb}_c${nc}.out

    files=()
    for (( k=0; k<$ntb;++k )); do  
      files+=("./random_traces/tb$k.hex")
    done

    time(
      for f in ${files[@]}; do
        ./VTile $f $nc &
        if [[ $(jobs -r -p | wc -l) -ge $NUM_THREADS ]]; then wait -n; fi
      done
      wait
    ) 2>> $OUTPUT_DIR/tb${ntb}_c${nc}.out
  done
done
#PATH=

#file=${files[0]}
#file="sdp_pdp_32x16x32_pass_through_int8_0"
#file="cdp_1x1x1_lrn3_int8_0"

#LOOP_TESTBENCHES=(10 20 30 40 50 60 70 80 90 100)


#for tb in ${TESTBENCHES[@]}; do

  ## shuffle testbenches
  ##  tbs=( $(shuf -e "${tbs[@]}") )
  #remains=${#files[*]}

  ##time(
  ##while (($(($remains != 0)))); do
    ##if (($(($remains < $NUM_THREADS)))); then
      ##for (( i=$(($remains-1)); i>=0; i-- )); do
        ##./VNV_nvdla ${tbs[$i]}/trace.bin &
      ##done
      ##wait
      ##remains=0
    ##else
      ##for (( i=$(($remains-1)); i>=$(($remains-$NUM_THREADS)); i-- )); do
        ##./VNV_nvdla ${tbs[$i]}/trace.bin &
      ##done
      ##wait
      ##remains=$(($remains - $NUM_THREADS))
    ##fi
  ##done
    ##for (( i=0; i<$(($remains)); i++ )); do
      ##./VNV_nvdla ${tbs[$i]}/trace.bin &
      ##if [[ $(jobs -r -p | wc -l) -ge $NUM_THREADS ]]; then wait -n; fi
    ##done
    ##wait
  ##) 2>> ~/RTLflow-benchmarks/hw_small/verif/verilator/res_time.out

#done
