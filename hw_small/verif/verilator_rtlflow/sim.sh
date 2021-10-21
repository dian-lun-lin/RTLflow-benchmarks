#CYCLES=(500 1000 5000 10000 50000 100000 500000 1000000)
#LOOP_TESTBENCHES=(1 10 20 30 40 50 60 70 80 90 100)
LOOP_TESTBENCHES=(1)
TIMES=1

filename="$1"
files=()

# current path
# ./verif/verilator_rtlflow

while read -r line; do
  files+=("../../../verif/verilator/traces/$line/trace.bin")
done < "$filename"

tbs=()
TOTAL_TESTBENCHES=${#files[*]}

echo "////////RTLflow////////"
echo "=== Varies number of testbenches ==="
for ltb in ${LOOP_TESTBENCHES[@]}; do

  # duplicate testbenches
  for file in ${files[@]}; do
    for i in {1..$ltb}; do
      tbs+=($file)
    done
  done
  
  # shuffle testbenches
  tbs=( $(shuf -e "${tbs[@]}") )


  # compile the NVDLA design
  
  ntb=$((TOTAL_TESTBENCHES * ltb))
  #make -j8 NUM_TESTBENCHES=$ntb

  # simulate testbenches in parallel
  # ../outdir/hw_small/verilator_rtlflow

  cd ../../outdir/nv_small/verilator_rtlflow
  echo "======================================= Number of testbenches: $ntb ======================================="
  for ((i=1; i <= $TIMES; ++i)); do
    time ./VNV_nvdla "${tbs[@]}"
  done

  ## ../outdir/hw_small/
  cd ../
  #mv verilator_rtlflow verilator_rtlflow_$ntb

  ## ./verif
  tbs=()
  cd ../../verif/verilator_rtlflow
done


#echo "=========================================================="
#echo "=== 65536 testbenches, varies number of cycles ==="
#tb=65536
#make -j8 NUM_TESTBENCHES=$tb
#for cycles in ${CYCLES[@]}; do
  #echo "======================================= Number of cycles: $cycles ======================================="
  #for ((i=1; i <= TIMES; ++i)); do
    #time ./tb $cycles
  #done
#done

