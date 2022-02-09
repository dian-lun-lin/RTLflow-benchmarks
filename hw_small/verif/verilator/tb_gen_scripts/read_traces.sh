#!/usr/bin/bash

files=()

while read -r line; do
  lines=($line)
  files+=("${lines[0]}")
done < "legal_files_wo_large"
#PATH=

trace_dir="traces"
if [ ! -e "$trace_dir" ]; then
  mkdir "traces"
fi

cd $trace_dir

errors=()

for file in ${files[@]}; do
  if [ -e "$file" ]; then
    rm -rf $file
  fi
  mkdir $file
  cd $file
  python3 ../../../../tools/nvdla_trace_parser.py --file_path ../../../../tests/trace_tests/nv_small/$file/$file.cfg
  PYTHONPATH=../../../../../outdir/nv_small/spec/manual python3 ../../../new_trace_to_verilator.py ./ trace.bin
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
