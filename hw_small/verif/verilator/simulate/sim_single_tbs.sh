#!/usr/bin/bash

file=("../../../verif/verilator/traces/$1")

#file=${files[0]}
#file="sdp_pdp_32x16x32_pass_through_int8_0"
#file="cdp_1x1x1_lrn3_int8_0"

TESTBENCHES=(1 4 16 64 256 1024 4096 16384 65536)
NUM_THREADS=$2

cd ../../outdir/nv_small/verilator

for tb in ${TESTBENCHES[@]}; do
  #echo $ltb
  # duplicate testbenches
  tbs=()
  for ((i=1;i<=$tb;i++)); do
    tbs+=($file)
  done
  
  # shuffle testbenches
#  tbs=( $(shuf -e "${tbs[@]}") )


  remains=${#tbs[*]}
  printf "================================== File name: $file" >> ~/RTLflow-benchmarks/hw_small/verif/verilator/res_single_time.out
  printf "======================================= Number of testbenches: $remains =======================================" >> ~/RTLflow-benchmarks/hw_small/verif/verilator/res_single_time.out
  #for (( i=0; i<$(($remains)); i++ )); do
    #echo "==========file name: $file[$i]"
    #./VNV_nvdla ${tbs[$i]}/trace.bin &
  #done

  time(
    for (( i=0; i<$(($remains)); i++ )); do
      ./VNV_nvdla ${tbs[$i]}/trace.bin &
      if [[ $(jobs -r -p | wc -l) -ge $NUM_THREADS ]]; then wait -n; fi
    done
    wait
  ) 2>> ~/RTLflow-benchmarks/hw_small/verif/verilator/res_single_time.out

done
