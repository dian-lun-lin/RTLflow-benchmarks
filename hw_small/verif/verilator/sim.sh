#!/usr/bin/bash

filename="$1"
files=()

while read -r line; do
  files+=("../../../verif/verilator/traces/$line")
done < "$filename"
#PATH=

trace_dir="traces"


#file=${files[0]}
#file="sdp_pdp_32x16x32_pass_through_int8_0"
#file="cdp_1x1x1_lrn3_int8_0"

LOOP_TESTBENCHES=(1 10 20 30 40 50 60 70 80 90 100)
#LOOP_TESTBENCHES=(1)
NUM_THREADS=$2

cd ../../outdir/nv_small/verilator
tbs=()
TOTAL_TESTBENCHES=${#files[*]}

for ltb in ${LOOP_TESTBENCHES[@]}; do
  #echo $ltb
  # duplicate testbenches
  for file in ${files[@]}; do
    for ((i=1;i<=$ltb;i++)); do
      tbs+=($file)
    done
  done
  
  # shuffle testbenches
  tbs=( $(shuf -e "${tbs[@]}") )


  remains=${#tbs[*]}
  printf "======================================= Number of testbenches: $remains =======================================" >> ~/RTLflow-benchmarks/hw_small/verif/verilator/res_time.out

  time(
  while (($(($remains != 0)))); do
    if (($(($remains < $NUM_THREADS)))); then
      for (( i=$(($remains-1)); i>=0; i-- )); do
        ./VNV_nvdla ${files[$i]}/trace.bin &
      done
      wait
      remains=0
    else
      for (( i=$(($remains-1)); i>=$(($remains-$NUM_THREADS)); i-- )); do
        ./VNV_nvdla ${files[$i]}/trace.bin &
      done
      wait
      remains=$(($remains - $NUM_THREADS))
    fi
  done
  ) 2>> ~/RTLflow-benchmarks/hw_small/verif/verilator/res_time.out

  tbs=()
done
