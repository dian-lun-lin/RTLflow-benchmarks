CYCLES=(500 1000 5000 10000 50000 100000 500000 1000000)
TESTBENCHES=(1 4 16 64 256 1024 4096 16384 65536)
TIMES=1
echo "////////RTLflow////////"
echo "=== 1M cycles, varies number of testbenches ==="
cycles=1000000
for tb in ${TESTBENCHES[@]}; do
  make -j8 NUM_TESTBENCHES=$tb
  echo "======================================= Number of testbenches: $tb ======================================="
    for ((i=1; i <= TIMES; ++i)); do
      time ./tb $cycles
    done
done


echo "=========================================================="
echo "=== 65536 testbenches, varies number of cycles ==="
tb=65536
make -j8 NUM_TESTBENCHES=$tb
for cycles in ${CYCLES[@]}; do
  echo "======================================= Number of cycles: $cycles ======================================="
  for ((i=1; i <= TIMES; ++i)); do
    time ./tb $cycles
  done
done

