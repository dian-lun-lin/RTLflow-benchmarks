#!/usr/bin/bash

NUM_TESTBENCHES=$1
OUTPUT_DIR="random_traces"

files=()

if [ -e "$OUTPUT_DIR" ]; then
  rm -rf $OUTPUT_DIR
fi

mkdir $OUTPUT_DIR

while read -r line; do
  words=($line)
  files+=(${words[0]})
done < "legal_files_wo_large"


for ((c=0; c<$NUM_TESTBENCHES; ++c)); do
  collect_files=()
  num_files=$[$RANDOM % 3 + 1]

  for ((n=0; n<$num_files; ++n)); do
    id=$[$RANDOM % ${#files[@]}]
    collect_files+=(${files[$id]})
  done

  trace=./$OUTPUT_DIR/tb$c.bin
  if [ -e "$trace" ]; then
    rm $trace
  fi

  for file in ${collect_files[@]}; do
     cat ./traces/$file/trace.bin >> $trace
  done

  python3 add_eof.py $trace

done

