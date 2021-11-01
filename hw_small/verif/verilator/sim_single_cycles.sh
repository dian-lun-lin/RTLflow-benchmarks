#!/usr/bin/bash

NUM_THREADS=$1
NUM_TESTBENCHES=(64 16384)
files=("cdp_1x1x1_lrn3_int8_0" "pdp_24x16x1_8x8_ave_int8_0" "cdp_33x17x34_lrn5_int8_0" "dc_13x15x64_5x3x64x16_int8_0" "sdp_1x8192x1_pass_through_int8_0" "img_51x96x4_1x10x4x32_A8B8G8R8_int8_0" "dc_35x22x54_6x8x54x29_int8_0")

#file=${files[0]}
#file="sdp_pdp_32x16x32_pass_through_int8_0"
#file="cdp_1x1x1_lrn3_int8_0"

file_paths=()

for ((k=0; k<7; ++k)); do
  file_paths+=("../../../verif/verilator/traces/${files[$k]}/trace.bin")
done

cd ../../outdir/nv_small/verilator

for ((j=0; j<7; ++j)); do
  for tb in ${NUM_TESTBENCHES[@]}; do
    # duplicate testbenches
    #tbs=()
    #for ((i=1;i<=$tb;i++)); do
      #tbs+=(${file_paths[$j]})
    #done
    
    # shuffle testbenches
  #  tbs=( $(shuf -e "${tbs[@]}") )


    #remains=$tb

    printf "==== File name: ${files[$j]}" >> ../../../verif/verilator/${files[$j]}_$tb.out
    printf "======================================= Number of testbenches: $tb =======================================" >> ../../../verif/verilator/${files[$j]}_$tb.out

    time(
      for (( i=0; i<$(($tb)); i++ )); do
        ./VNV_nvdla ${file_paths[$j]} &
        if [[ $(jobs -r -p | wc -l) -ge $NUM_THREADS ]]; then wait -n; fi
      done
      wait
    ) 2>> ../../../verif/verilator/${files[$j]}_$tb.out

  done
done
