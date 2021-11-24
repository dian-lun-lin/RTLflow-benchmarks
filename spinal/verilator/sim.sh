CYCLES=(500 1000 5000 10000 50000 100000 500000 1000000)
TESTBENCHES=(1 4 16 64 256 1024 4096 16384 65536)
#TESTBENCHES=(4 16)
TIMES=1
THREADS=4
echo "////////Verilator////////"
#echo "=== 1M cycles, varies number of testbenches ==="
#cycles=1000000
#for tb in ${TESTBENCHES[@]}; do
  #echo "======================================= Number of testbenches: $tb ======================================="
    #for ((i=1; i <= TIMES; ++i)); do
      #time bash parallel.sh $cycles $THREADS $tb
      ##time bash parallel.sh 4 4
    #done
#done


echo "=========================================================="
echo "=== 65536 testbenches, varies number of cycles ==="
tb=65536
for cycles in ${CYCLES[@]}; do
  echo "======================================= Number of cycles: $cycles ======================================="
  for ((i=1; i <= TIMES; ++i)); do
    time bash parallel.sh $cycles $THREADS $tb
  done
done

