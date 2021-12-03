# RTLflow-benchmarks
Benchmarks for RTLflow

# Build RTLflow
You will need to build [RTLflow](https://github.com/dian-lun-lin/verilator) first.

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

After setting your environment, you need to use tmake to build the simulator

```bash
~/hw_small$ ./tools/bin/tmake -build verilator
```

## Step 2: Generate testbenches
You can generate numbers of testbenches by using our scripts. Our scripts generate multiple testbenches by randomly concatanting testbenches offered by NVDLA.

```bash
~/hw_small$ cd verif/verilator/tb_gen_scripts/
~/hw_small/verif/verilator/tb_gen_scripts/$ bash read_traces.sh
~/hw_small/verif/verilator/tb_gen_scripts/$ bash tbs_random_generator.sh NUMBER_OF_TESTBENCHES_YOU_WANT
```
Your testbenches will be under ```hw_small/verif/verilator/tb_gen_scripts/random_traces```.


