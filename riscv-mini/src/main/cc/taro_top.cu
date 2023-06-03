#include <rf_verilated.h>
#include <rtlflow.h>
#include <rf_heavy.h>
#include <iostream>

#include "mm.h"

using namespace std;
RF::VTile* top; 

const long timeout = 100000000L;

void build_task_graph(
  taro::TaroCBV4& taro,
  const size_t NUM_LINES,
  const size_t NUM_PIPES,
  std::vector<RF::RTLflow>& rtlflows,
  std::vector<std::vector<mm_magic_t*>>& mems
) {


  for(size_t l = 0; l < NUM_LINES; ++l) {
    // reset
    auto reset_t = taro.emplace([&, l]() {
      for(size_t b = 0; b < RF::BATCH_SIZE; ++b) {
        *rtlflows[l].get(top->reset, b) = 1;
      }
    });
    // 5 ticks
    std::vector<std::pair<taro::TaskHandle, taro::TaskHandle>> ticks(5);
    for (size_t t = 0; t < 5 ; t++) {

      auto t1 = taro.emplace([&, l]() {
        for(size_t b = 0; b < RF::BATCH_SIZE; ++b) {
          *rtlflows[l].get(top->clock, b) = 1;
        }
      });

      auto t2 = taro.emplace([&, l]() {
        for(size_t b = 0; b < RF::BATCH_SIZE; ++b) {
          *rtlflows[l].get(top->io_nasti_aw_ready, b) = mems[l][b]->aw_ready();
          *rtlflows[l].get(top->io_nasti_ar_ready, b) = mems[l][b]->ar_ready();
          *rtlflows[l].get(top->io_nasti_w_ready, b) = mems[l][b]->w_ready();
          *rtlflows[l].get(top->io_nasti_b_valid, b) = mems[l][b]->b_valid();
          *rtlflows[l].get(top->io_nasti_b_bits_id, b) = mems[l][b]->b_id();
          *rtlflows[l].get(top->io_nasti_b_bits_resp, b) = mems[l][b]->b_resp();
          *rtlflows[l].get(top->io_nasti_r_valid, b) = mems[l][b]->r_valid();
          *rtlflows[l].get(top->io_nasti_r_bits_id, b) = mems[l][b]->r_id();
          *rtlflows[l].get(top->io_nasti_r_bits_resp, b) = mems[l][b]->r_resp();
          *rtlflows[l].get(top->io_nasti_r_bits_last, b) = mems[l][b]->r_last();
          memcpy(rtlflows[l].get(top->io_nasti_r_bits_data, b), mems[l][b]->r_data(), 8);

          mems[l][b]->tick(
            *rtlflows[l].get(top->reset, b),
            *rtlflows[l].get(top->io_nasti_ar_valid, b),
            *rtlflows[l].get(top->io_nasti_ar_bits_addr, b),
            *rtlflows[l].get(top->io_nasti_ar_bits_id, b),
            *rtlflows[l].get(top->io_nasti_ar_bits_size, b),
            *rtlflows[l].get(top->io_nasti_ar_bits_len, b),

            *rtlflows[l].get(top->io_nasti_aw_valid, b),
            *rtlflows[l].get(top->io_nasti_aw_bits_addr, b),
            *rtlflows[l].get(top->io_nasti_aw_bits_id, b),
            *rtlflows[l].get(top->io_nasti_aw_bits_size, b),
            *rtlflows[l].get(top->io_nasti_aw_bits_len, b),

            *rtlflows[l].get(top->io_nasti_w_valid, b),
            *rtlflows[l].get(top->io_nasti_w_bits_strb, b),
            rtlflows[l].get(top->io_nasti_w_bits_data, b),
            *rtlflows[l].get(top->io_nasti_w_bits_last, b),

            *rtlflows[l].get(top->io_nasti_r_ready, b),
            *rtlflows[l].get(top->io_nasti_b_ready, b)
          );
          
          *rtlflows[l].get(top->clock, b) = 0;
        }
      });
      auto sim1 = rtlflows[l].create_sim_t();
      auto sim2 = rtlflows[l].create_sim_t();
      t1.precede(sim1);
      sim1.precede(t2);
      t2.precede(sim2);
      ticks[t].first = t1;
      ticks[t].second = sim2;
    }

    for(size_t t = 0; t < 4; ++t) {
      ticks[t].second.precede(ticks[t + 1].first);
    }

    // start
    auto start_t = taro.emplace([&, l]() mutable {
      for(size_t b = 0; b < RF::BATCH_SIZE; ++b) {
        *rtlflows[l].get(top->reset, b) = 0;
        *rtlflows[l].get(top->io_host_fromhost_bits, b) = 0;
        *rtlflows[l].get(top->io_host_fromhost_valid, b) = 0;
      }
    });

    std::vector<std::pair<taro::TaskHandle, taro::TaskHandle>> pipes(NUM_PIPES);
    for(size_t p = 0; p < NUM_PIPES; ++p) {
      auto t1 = taro.emplace([&, l]() mutable {
        for(size_t b = 0; b < RF::BATCH_SIZE; ++b) {
          *rtlflows[l].get(top->clock, b) = 1;
        }
      });

      auto t2 = taro.emplace([&, l]() {
        for(size_t b = 0; b < RF::BATCH_SIZE; ++b) {
          *rtlflows[l].get(top->io_nasti_aw_ready, b) = mems[l][b]->aw_ready();
          *rtlflows[l].get(top->io_nasti_ar_ready, b) = mems[l][b]->ar_ready();
          *rtlflows[l].get(top->io_nasti_w_ready, b) = mems[l][b]->w_ready();
          *rtlflows[l].get(top->io_nasti_b_valid, b) = mems[l][b]->b_valid();
          *rtlflows[l].get(top->io_nasti_b_bits_id, b) = mems[l][b]->b_id();
          *rtlflows[l].get(top->io_nasti_b_bits_resp, b) = mems[l][b]->b_resp();
          *rtlflows[l].get(top->io_nasti_r_valid, b) = mems[l][b]->r_valid();
          *rtlflows[l].get(top->io_nasti_r_bits_id, b) = mems[l][b]->r_id();
          *rtlflows[l].get(top->io_nasti_r_bits_resp, b) = mems[l][b]->r_resp();
          *rtlflows[l].get(top->io_nasti_r_bits_last, b) = mems[l][b]->r_last();
          memcpy(rtlflows[l].get(top->io_nasti_r_bits_data, b), mems[l][b]->r_data(), 8);

          mems[l][b]->tick(
            *rtlflows[l].get(top->reset, b),
            *rtlflows[l].get(top->io_nasti_ar_valid, b),
            *rtlflows[l].get(top->io_nasti_ar_bits_addr, b),
            *rtlflows[l].get(top->io_nasti_ar_bits_id, b),
            *rtlflows[l].get(top->io_nasti_ar_bits_size, b),
            *rtlflows[l].get(top->io_nasti_ar_bits_len, b),

            *rtlflows[l].get(top->io_nasti_aw_valid, b),
            *rtlflows[l].get(top->io_nasti_aw_bits_addr, b),
            *rtlflows[l].get(top->io_nasti_aw_bits_id, b),
            *rtlflows[l].get(top->io_nasti_aw_bits_size, b),
            *rtlflows[l].get(top->io_nasti_aw_bits_len, b),

            *rtlflows[l].get(top->io_nasti_w_valid, b),
            *rtlflows[l].get(top->io_nasti_w_bits_strb, b),
            rtlflows[l].get(top->io_nasti_w_bits_data, b),
            *rtlflows[l].get(top->io_nasti_w_bits_last, b),

            *rtlflows[l].get(top->io_nasti_r_ready, b),
            *rtlflows[l].get(top->io_nasti_b_ready, b)
          );
          
          *rtlflows[l].get(top->clock, b) = 0;
        }
      });

      auto sim1 = rtlflows[l].create_sim_t();
      auto sim2 = rtlflows[l].create_sim_t();
      t1.precede(sim1);
      sim1.precede(t2);
      t2.precede(sim2);

      pipes[p].first = t1;
      pipes[p].second = sim2;
    }

    for(size_t p = 0; p < NUM_PIPES - 1; ++p) {
      pipes[p].second.precede(pipes[p + 1].first);
    }

    reset_t.precede(ticks[0].first);
    ticks[4].second.precede(start_t);
    start_t.precede(pipes[0].first);
  }

}


int main(int argc, char** argv) {
  RF::Verilated::commandArgs(argc, argv);   // Remember args

  const size_t NUM_TESTBENCHES = std::stoi(argv[1]);
  const size_t NUM_CYCLES      = std::stoi(argv[2]);
  const size_t NUM_PIPES       = NUM_CYCLES;
  const size_t NUM_LINES       = NUM_TESTBENCHES / RF::BATCH_SIZE;
  std::string dir{argv[3]}; 
  std::cerr << "start1111\n";

  taro::TaroCBV4 taro{4, 4};
  top = new RF::VTile; // target design
  std::cerr << "start2222\n";
  std::cerr << "num of lines: " << NUM_LINES << "\n";
  std::vector<std::vector<mm_magic_t*>> mems(NUM_LINES, std::vector<mm_magic_t*>(RF::BATCH_SIZE));
  std::cerr << "3333\n";

  std::vector<RF::RTLflow> rtlflows(NUM_LINES, {top, taro});
  for(size_t l = 0; l < NUM_LINES; ++l) {
    for(size_t b = 0; b < RF::BATCH_SIZE; ++b) {
      mems[l][b] = new mm_magic_t(1L << 28, 8); // target memory
      load_mem(mems[l][b]->get_data(), std::string(dir+"tb"+std::to_string(l * RF::BATCH_SIZE + b)+".hex").c_str()); // load hex

    }
  }

  cout << "11111!\n";
  for(size_t l = 0; l < NUM_LINES; ++l) {
    rtlflows[l].initialize();
  }
  build_task_graph(taro, NUM_LINES, NUM_PIPES, rtlflows, mems);

  //// reset
  //for(size_t l = 0; l < NUM_LINES; ++l) {
    //for(size_t b = 0; b < RF::BATCH_SIZE; ++b) {
      //*rtlflows[l].get(top->reset, b) = 1;
    //}
  //}
  
  //for (size_t i = 0; i < 5 ; i++) {
    //tick(NUM_LINES, rtlflows, mems);
  //}


  cout << "2222!\n";

  cout << "Starting simulation!\n";

  taro.schedule();
  taro.wait();

  delete top;
  for(size_t l = 0; l < NUM_LINES; ++l) {
    for(size_t b = 0; b < RF::BATCH_SIZE; ++b) {
      delete mems[l][b];
    }
  }

  cout << "Finishing simulation!\n";

  //return retcode == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
  return 0;
}

