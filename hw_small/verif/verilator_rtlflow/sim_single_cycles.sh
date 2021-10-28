#CYCLES=(500 1000 5000 10000 50000 100000 500000 1000000)
TESTBENCHES=(64 16384)
#TESTBENCHES=(1 2)
#LOOP_TESTBENCHES=(1)
TIMES=1

files=("cdp_1x1x1_lrn3_int8_0" "pdp_24x16x1_8x8_ave_int8_0" "cdp_33x17x34_lrn5_int8_0" "dc_13x15x64_5x3x64x16_int8_0" "sdp_1x8192x1_pass_through_int8_0" "img_51x96x4_1x10x4x32_A8B8G8R8_int8_0" "dc_35x22x54_6x8x54x29_int8_0")

file_paths=()

for ((k=0; k<8; ++k)); do
  file_paths+=("../../../verif/verilator/traces/${files[$k]}/trace.bin")
done


# current path
# ./verif/verilator_rtlflow

#while read -r line; do
#done < "$filename"

for ((j=0; j<8; ++j)); do
  for ((k=1; k<=$TIMES; ++k)); do
    for tb in ${TESTBENCHES[@]}; do
    tbs=()

    # duplicate testbenches
    for ((i=1; i<=$tb; ++i)); do
      tbs+=(${file_paths[$j]})
    done

    
    # compile the NVDLA design
    dir=../../outdir/nv_small/verilator_rtlflow_$tb
    if [ ! -d $dir ]; then
      make -j32 NUM_TESTBENCHES=$tb
    fi

    # simulate testbenches in parallel
    # ../outdir/hw_small/verilator_rtlflow

    cd ../../outdir/nv_small/
    if [ ! -d $dir ]; then
      mv verilator_rtlflow verilator_rtlflow_$tb
    fi

    cd verilator_rtlflow_$tb
    printf "==== File name: ${files[$j]}" >> ../../../verif/verilator_rtlflow/${files[$j]}_$tb.out
    printf "======================================= Number of testbenches: $tb =======================================" >> ../../../verif/verilator_rtlflow/${files[$j]}_$tb.out
    (time ./VNV_nvdla "${tbs[@]}") 2>> ../../../verif/verilator_rtlflow/${files[$j]}_$tb.out

    cd ../../../verif/verilator_rtlflow

    done
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

