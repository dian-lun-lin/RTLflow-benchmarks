
#include <taskflow.hpp>

#include "rtlflow.h"


#include "VExampleTop.h"

#include <assert.h>

inline
cudaError_t checkCuda(cudaError_t result) {
    if (result != cudaSuccess) {
        using namespace std::literals::string_literals;
        throw std::runtime_error("CUDA Runtime Error: "s + cudaGetErrorString(result));
    }
    return result;
}

__global__ void _eval_settle(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);

// idx: index of testbenches
CData* RTLflow::get(CDataLoc cdl, size_t idx) {
    return _csignals + idx * cdl.size + cdl.memloc;
}
SData* RTLflow::get(SDataLoc sdl, size_t idx) {
    return _ssignals + idx * sdl.size + sdl.memloc;
}
QData* RTLflow::get(QDataLoc qdl, size_t idx) {
    return _qsignals + idx * qdl.size + qdl.memloc;
}
IData* RTLflow::get(IDataLoc idl, size_t idx) {
    return _isignals + idx * idl.size + idl.memloc;
}
RTLflow::RTLflow(size_t num_testbenches):num_testbenches{num_testbenches} {
    checkCuda(cudaMallocManaged(&_csignals, num_testbenches * cuda_cmem_size * sizeof(CData)));
    checkCuda(cudaMallocManaged(&_ssignals, num_testbenches * cuda_smem_size * sizeof(SData)));
    checkCuda(cudaMallocManaged(&_qsignals, num_testbenches * cuda_qmem_size * sizeof(QData)));
    checkCuda(cudaMallocManaged(&_isignals, num_testbenches * cuda_imem_size * sizeof(IData)));
    checkCuda(cudaMallocManaged(&change, num_testbenches * sizeof(IData)));
    checkCuda(cudaMemset(change, 1, num_testbenches * sizeof(IData)));
}
RTLflow::~RTLflow() {
    checkCuda(cudaFree(_csignals));
    checkCuda(cudaFree(_ssignals));
    checkCuda(cudaFree(_qsignals));
    checkCuda(cudaFree(_isignals));
    checkCuda(cudaFree(change));
}
void RTLflow::run() { _executor.run(_taskflow).wait(); }
void RTLflow::initialize(VExampleTop__Syms* VlSymsp) {
    size_t num_threads = (num_testbenches < 1024) ? num_testbenches : 1024;
    size_t num_blocks = (num_threads < 1024) ? 1 : num_testbenches / num_threads;
    auto change_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, _change_request, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto last_assign_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, _last_assign, _csignals, _ssignals, _isignals, _qsignals);
    auto reduce_cut = _cudaflow.reduce(change, change + num_testbenches, change, [] __device__ (IData a, IData b){ return a | b; });
    last_assign_cut.precede(change_cut);
    
    change_cut.precede(reduce_cut);
    
    auto id_1_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__1, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_3_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__3, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_4_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__4, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_5_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__5, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_6_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__6, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_9_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__9, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_10_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__10, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_12_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__12, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_8_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__8, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_13_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__13, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_2_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__2, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_7_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__7, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_11_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__11, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_14_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__14, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_15_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__15, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_16_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__16, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_17_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__17, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_18_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__18, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_19_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__19, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    auto id_20_cut = _cudaflow.kernel(dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0, __Vmtask__20, VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
    id_1_cut.precede(id_3_cut);
    id_1_cut.precede(id_4_cut);
    id_1_cut.precede(id_5_cut);
    id_1_cut.precede(id_6_cut);
    id_1_cut.precede(id_9_cut);
    id_1_cut.precede(id_10_cut);
    id_3_cut.precede(id_13_cut);
    id_4_cut.precede(id_13_cut);
    id_5_cut.precede(id_12_cut);
    id_5_cut.precede(id_8_cut);
    id_6_cut.precede(id_13_cut);
    id_9_cut.precede(id_12_cut);
    id_9_cut.precede(id_8_cut);
    id_10_cut.precede(id_13_cut);
    id_12_cut.precede(id_13_cut);
    id_8_cut.precede(id_13_cut);
    id_13_cut.precede(id_2_cut);
    id_13_cut.precede(id_7_cut);
    id_13_cut.precede(id_11_cut);
    id_2_cut.precede(id_14_cut);
    id_2_cut.precede(id_17_cut);
    id_7_cut.precede(id_14_cut);
    id_11_cut.precede(id_14_cut);
    id_11_cut.precede(id_17_cut);
    id_14_cut.precede(id_15_cut);
    id_14_cut.precede(id_16_cut);
    id_14_cut.precede(id_18_cut);
    id_14_cut.precede(id_19_cut);
    id_15_cut.precede(last_assign_cut);
    id_16_cut.precede(id_20_cut);
    id_17_cut.precede(id_20_cut);
    id_18_cut.precede(last_assign_cut);
    id_19_cut.precede(id_20_cut);
    id_20_cut.precede(last_assign_cut);
    auto start_t = _taskflow.emplace([=](){
            if(VL_UNLIKELY(!init)) {
                VExampleTop::_eval_initial(VlSymsp, _csignals, _ssignals, _isignals, _qsignals);
                int device;
                checkCuda(cudaGetDevice(&device));
                checkCuda(cudaMemPrefetchAsync(_csignals, num_testbenches * cuda_cmem_size * sizeof(CData), device));
                checkCuda(cudaMemPrefetchAsync(_ssignals, num_testbenches * cuda_smem_size * sizeof(SData), device));
                checkCuda(cudaMemPrefetchAsync(_isignals, num_testbenches * cuda_imem_size * sizeof(IData), device));
                checkCuda(cudaMemPrefetchAsync(_qsignals, num_testbenches * cuda_qmem_size * sizeof(QData), device));
                checkCuda(cudaMemPrefetchAsync(change, num_testbenches * sizeof(IData), device));
                init = true;
                return 0;
            }
            else {
                return 1;
            }
    });
    
    auto init_detect_t = _taskflow.emplace([=](){
            if(++loop > 100) {
                _change_request<<<dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0>>>(VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
                checkCuda(cudaDeviceSynchronize());
                VL_FATAL_MT("add.v", 2, "",
                    "Verilated model didn't converge"
                    "- See https://verilator.org/warn/DIDNOTCONVERGE");
            }
            return (bool)change[0];
    });
    auto init_sim_t = _taskflow.emplace([=](){
            _eval_settle<<<dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0>>>(VlSymsp, _csignals, _ssignals, _isignals, _qsignals);
            checkCuda(cudaDeviceSynchronize());
            _cudaflow.offload();
    });
    auto sim_t = _taskflow.emplace([=](){
            _cudaflow.offload();
    });
    auto end_t = _taskflow.emplace([=](){
            loop = 0;
            checkCuda(cudaMemset(change, 1, sizeof(IData) * num_testbenches));
    });
    
    auto detect_t = _taskflow.emplace([=](){
            if(++loop > 100) {
                _change_request<<<dim3(num_blocks, 1, 1), dim3(num_threads, 1, 1), 0>>>(VlSymsp, _csignals, _ssignals, _isignals, _qsignals, change);
                checkCuda(cudaDeviceSynchronize());
                VL_FATAL_MT("add.v", 2, "",
                    "Verilated model didn't converge"
                    "- See https://verilator.org/warn/DIDNOTCONVERGE");
            }
            return (bool)change[0];
    });
    start_t.precede(init_sim_t, sim_t);
    init_sim_t.precede(init_detect_t);
    init_detect_t.precede(end_t, init_sim_t);
    
    sim_t.precede(detect_t);
    detect_t.precede(end_t, sim_t);
}
