#!/usr/bin/bash

NUM_CONCAT=$1
NUM_TESTBENCHES=$2
OUTPUT_DIR="random_stimulus"

if [ -e "$OUTPUT_DIR" ]; then
  rm -rf $OUTPUT_DIR
fi

mkdir $OUTPUT_DIR

filelist=($(ls ./tests))

#tmp=./$OUTPUT_DIR/tmp.hex

for ((t=0; t<$NUM_TESTBENCHES; ++t)); do
  
  trace=./$OUTPUT_DIR/tb$t.hex

  for ((c=0; c<$NUM_CONCAT; ++c)); do
    id=$[$RANDOM % ${#filelist[@]}]
    cat ./tests/${filelist[$id]} >> $trace
  done

done

