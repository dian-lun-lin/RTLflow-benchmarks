yosys -s proc.ys
clang++ -g -O3 -std=c++14 -DEXAMPLE_TOP=\"ExampleTop.sim.cpp\" -I ~/yosys/include -I/home/dian-lun/yosys/backends -I ~/yosys  main.cpp -o example

