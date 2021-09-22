// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop_ExampleTop.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"

//==========

__device__
void VExampleTop_ExampleTop::_sequent__TOP__ExampleTop__4(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VExampleTop_ExampleTop::_sequent__TOP__ExampleTop__4\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 585] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 748]) 
           & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 584])));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 586] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 585]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 586] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 589] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 587]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 588]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 592] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 590]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 591]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 595] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 593]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 594]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 599] 
        = (((((~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 596])) 
              & (3U != (3U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60]))) 
             & (3U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                             >> 0x10U)))) | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 597]) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                                                    >> 0x10U))))) 
           | (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 598]) 
               & (3U == (3U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61]))) 
              & (3U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                              >> 0x10U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 62] = 0U;
    if ((3U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 600]))) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 62] = 8U;
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 63] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 601]) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 63] 
            = (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 62] 
               << 2U);
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 602]) {
        if ((3U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 64] 
                          >> 0x1cU)))) {
            _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 63] 
                = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 65];
        }
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 603] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 604]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 603] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 605] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 606]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 605] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 608] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 607]) 
           & (~ (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 598]) 
                  & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 597]))) 
                 & (3U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                                 >> 0x10U))))));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 609] = 0U;
    if ((0U != (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 604]) 
                 << 2U) | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 610]) 
                           << 1U)))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 609] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 750] 
        = (1U & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 749])));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 8996] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 10019]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 582]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 8998] 
        = ((((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 8997]) 
             >> 1U) & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 751])) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 752]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 8999] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 749]) 
           & (0U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 8997])));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 9000] = 1U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 8999]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 9000] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 753] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 751]) {
        if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 9000]) {
            _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 753] = 1U;
        }
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 754] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 751]) {
        if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 9000]) {
            _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 754] 
                = (1U & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 752])));
        }
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 10019] 
        = _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 10018];
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 611] 
        = (1U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 66] 
                 >> 0x17U));
    if ((0U == (0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                         >> 7U)))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 611] = 0U;
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 69] 
        = (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 68] 
           + ((2U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 66] 
                            >> 0xfU))) ? ((0xffe00000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                             >> 0x1fU)))) 
                                              << 0x15U)) 
                                          | ((0x100000U 
                                              & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67]) 
                                                | ((0x800U 
                                                    & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                         >> 0x14U))))))
               : ((0xffffe000U & ((- (IData)((1U & 
                                              (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                               >> 0x1fU)))) 
                                  << 0xdU)) | ((0x1000U 
                                                & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                           >> 7U))))))));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 612] 
        = ((2U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 66] 
                         >> 0xfU))) | ((1U == (3U & 
                                               (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 66] 
                                                >> 0xfU))) 
                                       & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                          >> 0x1fU)));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 10018] = 1U;
    if ((0x1fU != (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 10016]))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 10018] = 0U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 614] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 613]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 612]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 615] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 616]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 615] = 1U;
    }
    if ((0U != ((((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 617]) 
                  & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 618])) 
                 << 2U) | ((((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 619]) 
                             & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 620])) 
                            << 1U) | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 621]) 
                                      & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 622])))))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 615] = 1U;
    }
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 613]) 
         & ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 623]) 
            | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 624])))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 615] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 627] 
        = (0U != (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 625]) 
                   << 2U) | (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 626]) 
                              << 1U) | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 614]))));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 628] 
        = (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 614]) 
            << 2U) | (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 625]) 
                       << 1U) | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 626])));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 629] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 614]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 629] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 632] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 615]) 
           | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 630]) 
              | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 631])));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 633] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 627]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 633] = 1U;
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 71] 
        = ((0U == (3U & (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 628]) 
                          & (~ ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 628]) 
                                - (IData)(1U)))) >> 1U)))
            ? _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 63]
            : ((1U == (3U & (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 628]) 
                              & (~ ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 628]) 
                                    - (IData)(1U)))) 
                             >> 1U))) ? _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 70]
                : _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 69]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 634] 
        = (0U != (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 604]) 
                   << 3U) | (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 610]) 
                              << 2U) | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 629]))));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 636] 
        = (1U & ((~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 632])) 
                 & ((~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 635])) 
                    | ((~ ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 597]) 
                           & (3U != (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                                           >> 0x10U))))) 
                       & (~ (((~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 596])) 
                              & (3U != (3U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60]))) 
                             & (3U != (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                                             >> 0x10U)))))))));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 637] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 635])
            ? ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 607]) 
               & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 636]))
            : (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 636]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 639] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 637]) 
           & (7U != (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 638])));
}
