CYCLES=(10000 100000 500000 1000000)
TESTBENCHES=(256 1024 4096 16384 65536)
TIMES=2

echo "////////RTLflow////////"
cycles=100000
echo "=== $cycles cycles, varies number of testbenches ==="
for tb in ${TESTBENCHES[@]}; do
  make -j8 GPU_THREADS=$tb
  echo "======================================= Number of testbenches: $tb ======================================="
    for ((i=1; i <= TIMES; ++i)); do
      time ./tb $cycles
    done
done
cycles=1000000
echo "=== $cycles cycles, varies number of testbenches ==="
for tb in ${TESTBENCHES[@]}; do
  make -j8 GPU_THREADS=$tb
  echo "======================================= Number of testbenches: $tb ======================================="
    for ((i=1; i <= TIMES; ++i)); do
      time ./tb $cycles
    done
done


echo "=========================================================="
tb=4096
echo "=== $tb testbenches, varies number of cycles ==="
make -j8 GPU_THREADS=$tb
for cycles in ${CYCLES[@]}; do
  echo "======================================= Number of cycles: $cycles ======================================="
  for ((i=1; i <= TIMES; ++i)); do
    time ./tb $cycles
  done
done

tb=65536
echo "=== $tb testbenches, varies number of cycles ==="
make -j8 GPU_THREADS=$tb
for cycles in ${CYCLES[@]}; do
  echo "======================================= Number of cycles: $cycles ======================================="
  for ((i=1; i <= TIMES; ++i)); do
    time ./tb $cycles
  done
done

