#!/usr/bin/bash

filename="$1"
files=()

while read -r line; do
  files+=("$line")
done < "$filename"
#PATH=

trace_dir="traces"
if [ ! -e "$trace_dir" ]; then
  mkdir "traces"
fi

cd $trace_dir
#file=${files[0]}
#file="sdp_pdp_32x16x32_pass_through_int8_0"
#file="cdp_1x1x1_lrn3_int8_0"
errors=()

for file in ${files[@]}; do
  rm -rf $file
  mkdir $file
  cd $file
  ../../../tools/nvdla_trace_parser.py --file_path ../../../tests/trace_tests/nv_small/$file/$file.cfg
  PYTHONPATH=../../../../outdir/nv_small/spec/manual python ../../new_trace_to_verilator.py ./ trace.bin
  if (($(($? != 0)))); then
    errors+=($file)
  fi
  cd ..
done

echo "==========Illegal testbenches: "
for error in ${errors[@]}; do
  echo $error
  rm -rf $error
done

#num_testbenches=$2
#num_threads=$3
#remains=${#files[*]}
#echo $remains

#while (($(($remains != 0)))); do
  #if (($(($remains < $num_threads))))
  #then
    #for (( i=$(($remains-1)); i>=0; i-- )); do
      #./VNV_nvdla ${files[$i]} &
    #done
    #wait
    #remains=0
  #else
    #for (( i=$(($remains-1)); i>=$(($remains-$num_threads)); i-- )); do
      #./VNV_nvdla ${files[$i]} &
    #done
    #wait
    #remains=$(($remains - $num_threads))
  #fi
#done
