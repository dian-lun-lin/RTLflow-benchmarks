
#include <chrono>

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#include <queue>
#include <map>
#include <vector>

#include "rf_verilated.h"

#include "VNV_nvdla.h"
#include "rtlflow.h"

#include "../spec/defs/project.h"

int main(int argc, char** argv) {
  const size_t NUM_CYCLES = std::stoi(argv[1]);
  const size_t NUM_TRIALS = std::stoi(argv[2]);

  RF::Verilated::commandArgs(argc, argv);

  std::chrono::time_point<std::chrono::steady_clock> tic;
  std::chrono::time_point<std::chrono::steady_clock> toc;
  float duration{0.0f};
  //RF::VNV_nvdla* dut = new RF::VNV_nvdla;
  RF::VNV_nvdla* dut;
  cudaMallocManaged(&dut, sizeof(RF::VNV_nvdla));
  RF::RTLflow rtlflow(dut);
  rtlflow.initialize();

  for (size_t c = 0; c < 100; ++c) {
    rtlflow.run();
  }

  tic = std::chrono::steady_clock::now();
  for(size_t t = 0; t < NUM_TRIALS; ++t) {
    for (size_t c = 0; c < NUM_CYCLES; ++c) {
      rtlflow.run();
      rtlflow.run();
    }
  }
  toc = std::chrono::steady_clock::now();

  duration =  (std::chrono::duration_cast<std::chrono::milliseconds>(toc - tic).count() / NUM_TRIALS) / 1000.0f;
  std::ofstream out("./estimated_result.out", std::ios_base::app);
  out << duration << '\n';
  return 0;
}
