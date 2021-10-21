#!/usr/bin/bash

filename="$1"
files=()

while read -r line; do
  files+=("$line")
done < "$filename"
#PATH=

trace_dir="traces"


#file=${files[0]}
#file="sdp_pdp_32x16x32_pass_through_int8_0"
#file="cdp_1x1x1_lrn3_int8_0"

num_testbenches=$2
num_threads=$3
remains=${#files[*]}
echo "==========Number of testbenches: "
echo $remains

while (($(($remains != 0)))); do
  if (($(($remains < $num_threads))))
  then
    for (( i=$(($remains-1)); i>=0; i-- )); do
      ./VNV_nvdla ${files[$i]}/trace.bin &
    done
    wait
    remains=0
  else
    for (( i=$(($remains-1)); i>=$(($remains-$num_threads)); i-- )); do
      ./VNV_nvdla ${files[$i]}/trace.bin &
    done
    wait
    remains=$(($remains - $num_threads))
  fi
done
