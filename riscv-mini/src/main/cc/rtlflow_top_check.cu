#include <rf_verilated.h>
#include <rtlflow.h>
#include <rf_heavy.h>
#include <iostream>

#include "mm.h"

using namespace std;

vluint64_t main_time = 0;       // Current simulation time
        // This is a 64-bit integer to reduce wrap over issues and
        // allow modulus.  You can also use a double, if you wish.
RF::VTile* top; 

double sc_time_stamp () { // Called by $time in Verilog
  return main_time;       // converts to double, to match
                          // what SystemC does
}

// TODO Provide command-line options like vcd filename, timeout count, etc.
const long timeout = 100000000L;

void tick(
  const size_t NUM_LINES,
  std::vector<RF::RTLflow>& rtlflows,
  std::vector<std::vector<mm_magic_t*>>& mems
) {

  for(size_t l = 0; l < NUM_LINES; ++l) {
    for(size_t b = 0; b < RF::BATCH_SIZE; ++b) {
      *rtlflows[l].get(top->clock, b) = 1;
    }

    rtlflows[l].run();
    main_time++;

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
    rtlflows[l].run();
  }
//#if VM_TRACE
  //if (tfp) tfp->dump((double) main_time);
//#endif // VM_TRACE
  main_time++;
}

int main(int argc, char** argv) {
  RF::Verilated::commandArgs(argc, argv);   // Remember args

  const size_t NUM_TESTBENCHES = std::stoi(argv[1]);
  const size_t NUM_CYCLES      = std::stoi(argv[2]);
  const size_t NUM_LINES       = NUM_TESTBENCHES / RF::BATCH_SIZE;
  std::string dir{argv[3]}; 

  top = new RF::VTile; // target design
  std::vector<std::vector<mm_magic_t*>> mems(NUM_LINES);
  std::vector<RF::RTLflow> rtlflows(NUM_LINES, top);

  for(size_t l = 0; l < NUM_LINES; ++l) {
    mems[l].resize(RF::BATCH_SIZE);
    for(size_t b = 0; b < RF::BATCH_SIZE; ++b) {
      mems[l][b] = new mm_magic_t(1L << 32, 8); // target memory
      load_mem(mems[l][b]->get_data(), std::string(dir+"tb"+std::to_string(l * RF::BATCH_SIZE + b)+".hex").c_str()); // load hex

    }
    rtlflows[l].initialize();
  }


//#if VM_TRACE			// If verilator was invoked with --trace
  //Verilated::traceEverOn(true);	// Verilator must compute traced signals
  //VL_PRINTF("Enabling waves...\n");
  //tfp = new VerilatedVcdC;
  //top->trace(tfp, 99);	// Trace 99 levels of hierarchy
  //tfp->open(argc > 2 ? argv[2] : "dump.vcd"); // Open the dump file
//#endif

  cout << "Starting simulation!\n";

  // reset
  for(size_t l = 0; l < NUM_LINES; ++l) {
    for(size_t b = 0; b < RF::BATCH_SIZE; ++b) {
      *rtlflows[l].get(top->reset, b) = 1;
    }
  }
  
  for (size_t i = 0; i < 5 ; i++) {
    tick(NUM_LINES, rtlflows, mems);
  }

  // start
  for(size_t l = 0; l < NUM_LINES; ++l) {
    for(size_t b = 0; b < RF::BATCH_SIZE; ++b) {
      *rtlflows[l].get(top->reset, b) = 0;
      *rtlflows[l].get(top->io_host_fromhost_bits, b) = 0;
      *rtlflows[l].get(top->io_host_fromhost_valid, b) = 0;
    }
  }

  //for(size_t c = 0; c < NUM_CYCLES; ++c) {
    //tick(NUM_LINES, rtlflows, mems);
  //}
  do {
    //tick();
    tick(NUM_LINES, rtlflows, mems);
  } while(!(*rtlflows[0].get(top->io_host_tohost, 0)) && main_time < timeout);


  int retcode = *rtlflows[0].get(top->io_host_tohost, 0) >> 1;

  // Run for 10 more clocks
  for (size_t i = 0 ; i < 10 ; i++) {
    tick(NUM_LINES, rtlflows, mems);
  }

  if (main_time >= timeout) {
    cerr << "Simulation terminated by timeout at time " << main_time
         << " (cycle " << main_time / 10 << ")"<< endl;
    return EXIT_FAILURE;
  } else {
    cerr << "Simulation completed at time " << main_time <<
           " (cycle " << main_time / 10 << ")"<< endl;
    if (retcode) {
      cerr << "TOHOST = " << retcode << endl;
    }
  }

//#if VM_TRACE
  //if (tfp) tfp->close();
  //delete tfp;
//#endif
  //delete top;
  //delete mem;

  cout << "Finishing simulation!\n";

  return retcode == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
  //return 0;
}

