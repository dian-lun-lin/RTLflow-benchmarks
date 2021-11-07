#!/usr/bin/bash

path=$1
NUM_THREADS=$2
TESTBENCHES=(64 256 1024 4096 16384)
cd ../../outdir/nv_small/verilator

for ntb in ${TESTBENCHES[@]}; do
  printf "======================================= Number of testbenches: $ntb =======================================" >> ~/RTLflow-benchmarks/hw_small/verif/verilator/$ntb.out
  files=()
  for (( k=1; k<=$ntb;++k )); do  
    gtb=$path/tb$k
    while read -r line; do
      files+=("../../../verif/verilator/traces/$line/trace.bin")
    done < "$gtb"
  done

  time(
    for f in ${files[@]}; do
      ./VNV_nvdla $f &
      if [[ $(jobs -r -p | wc -l) -ge $NUM_THREADS ]]; then wait -n; fi
    done
    wait
  ) 2>> ~/RTLflow-benchmarks/hw_small/verif/verilator/$ntb.out
done
#PATH=

#file=${files[0]}
#file="sdp_pdp_32x16x32_pass_through_int8_0"
#file="cdp_1x1x1_lrn3_int8_0"

#LOOP_TESTBENCHES=(10 20 30 40 50 60 70 80 90 100)


for tb in ${TESTBENCHES[@]}; do

  # shuffle testbenches
  #  tbs=( $(shuf -e "${tbs[@]}") )
  remains=${#files[*]}

  #time(
  #while (($(($remains != 0)))); do
    #if (($(($remains < $NUM_THREADS)))); then
      #for (( i=$(($remains-1)); i>=0; i-- )); do
        #./VNV_nvdla ${tbs[$i]}/trace.bin &
      #done
      #wait
      #remains=0
    #else
      #for (( i=$(($remains-1)); i>=$(($remains-$NUM_THREADS)); i-- )); do
        #./VNV_nvdla ${tbs[$i]}/trace.bin &
      #done
      #wait
      #remains=$(($remains - $NUM_THREADS))
    #fi
  #done
    #for (( i=0; i<$(($remains)); i++ )); do
      #./VNV_nvdla ${tbs[$i]}/trace.bin &
      #if [[ $(jobs -r -p | wc -l) -ge $NUM_THREADS ]]; then wait -n; fi
    #done
    #wait
  #) 2>> ~/RTLflow-benchmarks/hw_small/verif/verilator/res_time.out

done
