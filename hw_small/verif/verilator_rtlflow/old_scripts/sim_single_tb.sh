#CYCLES=(500 1000 5000 10000 50000 100000 500000 1000000)
TESTBENCHES=(16 64 256 1024 4096 16384)
#TESTBENCHES=(1024)
#TESTBENCHES=(1 2)
#LOOP_TESTBENCHES=(1)
TIMES=1

file="../../../verif/verilator/traces/$1/trace.bin"

# current path
# ./verif/verilator_rtlflow

#while read -r line; do
#done < "$filename"

printf "////////RTLflow////////" >> ./$tb.out
printf "=== Varies number of testbenches ===" >> ./$tb.out
printf "======================================= File name: $file  =======================================" >> ./$tb.out

for ((k=1; k<=$TIMES; ++k)); do
  for tb in ${TESTBENCHES[@]}; do
  tbs=()

  # duplicate testbenches
  for ((i=1; i<=$tb; ++i)); do
    tbs+=($file)
  done

  
  # compile the NVDLA design
  #dir=../../outdir/nv_small/verilator_rtlflow_$tb
  make -j32 NUM_TESTBENCHES=$tb

  # simulate testbenches in parallel
  # ../outdir/hw_small/verilator_rtlflow

  cd ../../outdir/nv_small/

  cd verilator_rtlflow_$tb
  printf "======================================= Number of testbenches: $tb =======================================" >> ../../../verif/verilator_rtlflow/$tb.out
  (time ./VNV_nvdla "${tbs[@]}") 2>> ../../../verif/verilator_rtlflow/$tb.out

  cd ../../../verif/verilator_rtlflow

  done
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

