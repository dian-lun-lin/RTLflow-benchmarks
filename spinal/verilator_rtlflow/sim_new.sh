BATCH=256
CYCLES=(10000 50000 100000 150000 200000 250000 300000 350000 400000 45000 500000)
TESTBENCHES=(8192)
THREADS=(2 4 8)
TIMES=2

echo "//////// Taskflow ////////"
for thr in ${THREADS[@]}; do
  echo "Number of threads: $thr ======================================="
  for tb in ${TESTBENCHES[@]}; do
    echo "Number of testbenches: $tb ******"
    for cycles in ${CYCLES[@]}; do
      echo "Number of cycles: $cycles"
      for ((i=1; i <= TIMES; ++i)); do
        /usr/bin/time ./taskflow_${BATCH}_tb $cycles $tb $thr $thr
      done
    done
  done
done

echo "//////// Taro ////////"
for thr in ${THREADS[@]}; do
  echo "Number of threads: $thr ======================================="
  for tb in ${TESTBENCHES[@]}; do
    echo "Number of testbenches: $tb ******"
    for cycles in ${CYCLES[@]}; do
      echo "Number of cycles: $cycles"
      for ((i=1; i <= TIMES; ++i)); do
        /usr/bin/time ./taro_${BATCH}_tb $cycles $tb $thr $thr
      done
    done
  done
done


#echo "=========================================================="
#tb=4096
#echo "=== $tb testbenches, varies number of cycles ==="
#make -j8 GPU_THREADS=$tb
#for cycles in ${CYCLES[@]}; do
  #echo "======================================= Number of cycles: $cycles ======================================="
  #for ((i=1; i <= TIMES; ++i)); do
    #time ./tb $cycles
  #done
#done

#tb=65536
#echo "=== $tb testbenches, varies number of cycles ==="
#make -j8 GPU_THREADS=$tb
#for cycles in ${CYCLES[@]}; do
  #echo "======================================= Number of cycles: $cycles ======================================="
  #for ((i=1; i <= TIMES; ++i)); do
    #time ./tb $cycles
  #done
#done

