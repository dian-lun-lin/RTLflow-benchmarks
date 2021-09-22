
#ifndef VERILATED_RTLFLOW_H_
#define VERILATED_RTLFLOW_H_  // guard

#include <taskflow.hpp>

#include <rf_heavy.h>

#include <cudaflow.hpp>
class VExampleTop__Syms;
class VExampleTop;
class RTLflow {
    
    friend class VExampleTop;
  private:
    tf::Taskflow _taskflow;
    tf::cudaFlow _cudaflow;
    tf::Executor _executor{8};
    size_t cuda_cmem_size{10027};
    size_t cuda_smem_size{12};
    size_t cuda_imem_size{237};
    size_t cuda_qmem_size{7};
    size_t num_testbenches;
    int loop{0};
    bool init{false};
  public:
    CData* _csignals{nullptr};
    SData* _ssignals{nullptr};
    IData* _isignals{nullptr};
    QData* _qsignals{nullptr};
    IData* change{nullptr};
    RTLflow(size_t num_testbenches = 1);
    ~RTLflow();
    void initialize(VExampleTop__Syms*);
    void run();
    CData* get(CDataLoc cdl, size_t idx);
    SData* get(SDataLoc sdl, size_t idx);
    QData* get(QDataLoc qdl, size_t idx);
    IData* get(IDataLoc idl, size_t idx);
};

#endif  //
