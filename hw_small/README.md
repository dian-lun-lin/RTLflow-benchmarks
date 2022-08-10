# Simulate NVDLA design


## Step 1: Build NVDLA (hw_small)
```bash
~$ cd hw_small
~/hw_small$ make
```
You will need to setup your environment to build NVDLA design. To simulate NVDLA design using RTLflow, you need to setup your cpp, gcc, g++, perl, java, python, verilator (RTLflow) and clang path correctly. For example:
<p align=center>
<img src="../img/env.png" width="725" height="250"/>
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


## Step 2: Generate stimulus
You can generate numbers of stimulus by using our scripts. Our scripts generate multiple testbenches by randomly concatanting testbenches offered by NVDLA.

```bash
~/hw_small$ cd verif/verilator/tb_gen_scripts/
~/hw_small/verif/verilator/tb_gen_scripts/$ bash read_traces.sh
~/hw_small/verif/verilator/tb_gen_scripts/$ bash tbs_random_generator.sh NUMBER_OF_STIMULUS_YOU_WANT
```
Your input stimulus will be under ```hw_small/verif/verilator/tb_gen_scripts/random_traces```.

## Step 3: Use the optimizer to perform GPU-aware partitioning
You can try different parpameters to derive differnt partitioning results.
For example, 
```bash
~/hw_small$ cd verif/rtlflow
~/hw_small/verif/rtlflow$ mkdir training_results 
~/hw_small/verif/rtlflow$ cd training_results
~/hw_small/verif/rtlflow/training_results$ ../../../../optimizer/optimizer -o ./ -s ../../verilator/tb_gen_scripts/random_stimulus/ -m ../Makefile_rtlflow -v 2 -b 256 -c 1000 --num_stimulus 1024 --num_epochs 2 --beta 0.5 -u 1 
```
After optimization, the optimizer will generate ```details/```, ```best_weights```, ```initial_weights```, ```cudaflow.out```, and ```others.out```:
- details/: training details
- best_weights: best weights after performing MCMC sampling
- initial_weights: initial weights
- cudaflow.out: partitioned CUDA graph (You can use [Graphviz](https://dreampuf.github.io/GraphvizOnline/) to visualize graph)
- others.out: other parameters you specify for the optimizer

By default, we specify all weights to one.
You can use your own weights by specifing ```-w YOUR_WEIGHT_PATH```.

## Step 4: Build RTLflow simulator for NVDLA
To build RTLflow simulator, you need to set four global paratmers: ```BATCH```, ```VERILATOR_PARTITION_SIZE```, ```OUTPUT_DIR```, and ```WEIGHT_TABLE```:
- BATCH: batch size
- VERILATOR_PARTITION_SIZE: verilator partition size
- OUTPUT_DIR: output dir to put the simulator binary file
- WEIGHT_TABLE: weights
- sim: specify sim so that Makefile_rtlflow does not remove transpiled CUDA code

For example,
```bash
~/hw_small/verif/rtlflow$ mkdir sim/
~/hw_small/verif/rtlflow$ cd sim
~/hw_small/verif/rtlflow/sim$ make -f ../Makefile_rtlflow sim BATCH=256 VERILATOR_PARTITION_SIZE=2  OUTPUT_DIR=./ WEIGHT_TABLE=../training_results/best_weights.out
~/hw_small/verif/rtlflow/sim$ ./testbench NUM_STIMULUS NUM_CYCLES STIMULUS_DIR
```
After make, you will see an executable, ```testbench```, under your OUTPUT_DIR.
The transpiled CUDA code is under ```~/hw_small/outdir/nv_small/rtlflow-bs$(BATCH)-vps$(VERILATOR_PARTITON_SIZE)```
