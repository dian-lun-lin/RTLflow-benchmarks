# RTLflow-benchmarks
Benchmarks for RTLflow


# Build RTLflow
You will need to build [RTLflow](https://github.com/dian-lun-lin/verilator) first.
We build RTLflow atop Verilator. Before you build RTLflow simulator, make sure you set ```$VERILATOR_ROOT = ~/YOUR_RTLFLOW_DIR```.

## Compiling RTLflow optimizer

 ```bash
 ~$ cd optimizer
 ~/optimizer$ g++ -std=c++17 optimizer.cpp -o optimizer
 ```
 After compile, you can use optimizer to perform GPU-aware partitioning using MCMC sampling.
 Type: 
 ```bash
 ~/optimizer$ ./optimizer -h
 ```
 to get more information. For example,
 ```bash
  -o // output directory
  -s // stimulus directory
  -m // makefile path
  -v // verilator partition size
  -b // batch size
  -c // number cycles to estimate runtime
  --num_stimulus // number of stimulus to estimate runtime
  --num_epochs // number of epochs to perform MCMC sampling
  -u // unit weight for MCMC sampling
  --beta // beta for MCMC sampling
  -w // weights path (all weights are one if not specified)
 ```
 
 

# Simulate riscv-mini design
## Step 1: Build riscv-mini
```bash
~$ cd riscv-mini
~/riscv-mini$ make
```
## Step 2: Generate testbenches
You can generate numbers of stimulus files by using our scripts. Our scripts generate multiple stimulus by randomly concatenating testbenches offered by riscv-mini.
```bash
~/riscv-mini$ ./stimulus_random_generator.sh NUM_STIMULUS_CONCATENATE NUM_STIMULUS
```
You will see multiple stimulus files under ```random_stimulus``` directory.

## Step 3: Use the optimizer to perform GPU-aware partitioning
You can try different parpameters to derive differnt partitioning results.
For example, 
```bash
~/riscv-mini$ mkdir training_results 
~/riscv-mini$ cd training_results
~/riscv-mini/training_results$ ../../optimizer/optimizer -o ./ -s ../random_stimulus/ -m ../Makefile_rtlflow -v 2 -b 256 -c 1000 --num_stimulus 1024 --num_epochs 2 --beta 0.5 -u 1 
```

After optimization, the optimizer will generate ```details/```, ```best_weights```, ```initial_weights```, ```cudaflow.out```, and ```others.out```:
- details/: training details
- best_weights: best weights after performing MCMC sampling
- initial_weights: initial weights
- cudaflow.out: partitioned CUDA graph (You can use [Graphviz](https://dreampuf.github.io/GraphvizOnline/) to visualize graph)
- others.out: other parameters you specify for the optimizer

By default, we specify all weights to one.
You can use your own weights by specifing ```-w YOUR_WEIGHT_PATH```.





## Step 4: Build RTLflow simulator for riscv-mini
To build RTLflow simulator, you need to set four global paratmers: ```BATCH```, ```VERILATOR_PARTITION_SIZE```, ```OUTPUT_DIR```, and ```WEIGHT_TABLE```:
- BATCH: batch size
- VERILATOR_PARTITION_SIZE: verilator partition size
- OUTPUT_DIR: output dir to put the simulator binary file
- WEIGHT_TABLE: weights

For example,
```bash
~/riscv-mini$ make -f Makefile_rtlflow BATCH=256 VERILATOR_PARTITION_SIZE=2  OUTPUT_DIR=./ WEIGHT_TABLE=training_results/best_weights.out
```
After make, you will see an executable, ```testbench```, under your OUTPUT_DIR.
The transpiled CUDA code is under ```generated-src-rtlflow-bs$(BATCH)-vps$(VERILATOR_PARTITON_SIZE)```

<!--
# Simulate NVDLA design


## Step 1: Build NVDLA (hw_small)
```bash
~$ cd hw_small
~/hw_small$ make
```
You will need to setup your environment to build NVDLA design. To simulate NVDLA design using RTLflow, you need to setup your cpp, gcc, g++, perl, java, python, verilator (RTLflow) and clang path correctly. For example:
<p align=center>
<img src="./img/env.png" width="725" height="250"/>
</p>

For perl, you need to install YAML and XML::Simple module:
```bash
sudo apt install libconfig-yaml-perl
sudo apt-get install libxml-simple-perl
```

After setting your environment, you need to use tmake to build the RTL

```bash
~/hw_small$ ./tools/bin/tmake -build vmod
```

## Step 2: Build RTLflow simulator for NVDLA

We currently simulate one testbench per gpu thread. You should set $GPU_THREADS to the total number of testbenches.
 ```bash
 ~/hw_small$ cd verif/rtlflow/
 ~/hw_small/verif/rtlflow$ make GPU_THREADS=NUM_TESTBENCHES_YOU_WANT_TO_SIMULATE
 ```
 After compiling, you will see transpiled .cu files and the compiled bin file (VNV_nvdla) under ```~/hw_small/outdir/rtlflow_$GPU_THREADS```

## Step 3: Generate testbenches
You can generate numbers of testbenches by using our scripts. Our scripts generate multiple testbenches by randomly concatanting testbenches offered by NVDLA.

```bash
~/hw_small$ cd verif/verilator/tb_gen_scripts/
~/hw_small/verif/verilator/tb_gen_scripts/$ bash read_traces.sh
~/hw_small/verif/verilator/tb_gen_scripts/$ bash tbs_random_generator.sh NUMBER_OF_TESTBENCHES_YOU_WANT
```
Your testbenches will be under ```hw_small/verif/verilator/tb_gen_scripts/random_traces```.

## Step 4: Perform simulation
To perform simulation, simply type:
```bash
~/hw_small/verif/rtlflow$ bash sim.sh $NUM_CYCLES $NUM_TESTBENCHES
```
After simulation, you will see .out file for simulation time.

-->
