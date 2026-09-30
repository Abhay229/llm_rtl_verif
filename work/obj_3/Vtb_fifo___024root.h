// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fifo.h for the primary calling header

#ifndef VERILATED_VTB_FIFO___024ROOT_H_
#define VERILATED_VTB_FIFO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_fifo__DOT__clk;
        CData/*0:0*/ tb_fifo__DOT__rst_n;
        CData/*0:0*/ tb_fifo__DOT__wr_en;
        CData/*0:0*/ tb_fifo__DOT__rd_en;
        CData/*7:0*/ tb_fifo__DOT__wdata;
        CData/*7:0*/ tb_fifo__DOT__rdata;
        CData/*3:0*/ tb_fifo__DOT__count;
        CData/*0:0*/ tb_fifo__DOT__chk_pending;
        CData/*7:0*/ tb_fifo__DOT__chk_exp;
        CData/*0:0*/ tb_fifo__DOT__unnamedblk1__DOT__mw;
        CData/*0:0*/ tb_fifo__DOT__unnamedblk1__DOT__mr;
        CData/*7:0*/ tb_fifo__DOT__unnamedblk2__DOT__d;
        CData/*2:0*/ tb_fifo__DOT__dut__DOT__wptr;
        CData/*2:0*/ tb_fifo__DOT__dut__DOT__rptr;
        CData/*0:0*/ tb_fifo__DOT__dut__DOT__do_wr;
        CData/*0:0*/ tb_fifo__DOT__dut__DOT__do_rd;
        CData/*0:0*/ tb_fifo__DOT__u_gold__DOT___Vpast_0_0;
        CData/*3:0*/ tb_fifo__DOT__u_gold__DOT___Vpast_1_0;
        CData/*0:0*/ tb_fifo__DOT__u_gold__DOT___Vpast_2_0;
        CData/*3:0*/ tb_fifo__DOT__u_gold__DOT___Vpast_3_0;
        CData/*0:0*/ tb_fifo__DOT__u_gold__DOT___Vpast_4_0;
        CData/*3:0*/ tb_fifo__DOT__u_gold__DOT___Vpast_5_0;
        CData/*0:0*/ tb_fifo__DOT__u_gold__DOT___Vpast_6_0;
        CData/*3:0*/ tb_fifo__DOT__u_gold__DOT___Vpast_7_0;
        CData/*0:0*/ tb_fifo__DOT__u_gen__DOT___Vpast_0_0;
        CData/*3:0*/ tb_fifo__DOT__u_gen__DOT___Vpast_1_0;
        CData/*0:0*/ tb_fifo__DOT__u_gen__DOT___Vpast_2_0;
        CData/*3:0*/ tb_fifo__DOT__u_gen__DOT___Vpast_3_0;
        CData/*0:0*/ tb_fifo__DOT__u_gen__DOT___Vpast_4_0;
        CData/*3:0*/ tb_fifo__DOT__u_gen__DOT___Vpast_5_0;
        CData/*0:0*/ tb_fifo__DOT__u_gen__DOT___Vpast_6_0;
        CData/*3:0*/ tb_fifo__DOT__u_gen__DOT___Vpast_7_0;
        CData/*2:0*/ __Vdlyvdim0__tb_fifo__DOT__dut__DOT__mem__v0;
        CData/*7:0*/ __Vdlyvval__tb_fifo__DOT__dut__DOT__mem__v0;
        CData/*0:0*/ __Vdlyvset__tb_fifo__DOT__dut__DOT__mem__v0;
        CData/*3:0*/ __Vdly__tb_fifo__DOT__count;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        CData/*0:0*/ __Vsampled__TOP__tb_fifo__DOT__rst_n;
        CData/*3:0*/ __Vsampled__TOP__tb_fifo__DOT__count;
        CData/*0:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_0_0;
        CData/*3:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_1_0;
        CData/*0:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_2_0;
        CData/*3:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_3_0;
        CData/*0:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_4_0;
        CData/*3:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_5_0;
        CData/*0:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_6_0;
        CData/*3:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_7_0;
        CData/*0:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_0_0;
        CData/*3:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_1_0;
        CData/*0:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_2_0;
        CData/*3:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_3_0;
        CData/*0:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_4_0;
        CData/*3:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_5_0;
        CData/*0:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_6_0;
        CData/*3:0*/ __Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_7_0;
        CData/*0:0*/ __Vsampled__TOP__tb_fifo__DOT__wr_en;
        CData/*0:0*/ __Vsampled__TOP__tb_fifo__DOT__rd_en;
        IData/*31:0*/ tb_fifo__DOT__errors;
        IData/*31:0*/ tb_fifo__DOT__unnamedblk2__DOT__fd;
        IData/*31:0*/ tb_fifo__DOT__unnamedblk2__DOT__w;
        IData/*31:0*/ tb_fifo__DOT__unnamedblk2__DOT__r;
    };
    struct {
        IData/*31:0*/ tb_fifo__DOT__unnamedblk2__DOT__code;
        IData/*31:0*/ tb_fifo__DOT__u_gen__DOT__cov_fifo_full_no_change;
        IData/*31:0*/ tb_fifo__DOT__u_gen__DOT__cov_fifo_empty_no_change;
        IData/*31:0*/ tb_fifo__DOT__u_gen__DOT__cov_fifo_count_max;
        IData/*31:0*/ tb_fifo__DOT__u_gen__DOT__cov_fifo_count_min;
        IData/*31:0*/ tb_fifo__DOT__u_gen__DOT__cov_fifo_no_overflow;
        IData/*31:0*/ tb_fifo__DOT__u_gen__DOT__cov_fifo_no_underflow;
        IData/*31:0*/ tb_fifo__DOT__u_gen__DOT__cov_fifo_full_flag_correct;
        IData/*31:0*/ tb_fifo__DOT__u_gen__DOT__cov_fifo_empty_flag_correct;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 8> tb_fifo__DOT__dut__DOT__mem;
    };
    VlQueue<CData/*7:0*/> tb_fifo__DOT__model;
    std::string tb_fifo__DOT__unnamedblk2__DOT__stim_file;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6edd0a4d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_fifo___024root(Vtb_fifo__Syms* symsp, const char* v__name);
    ~Vtb_fifo___024root();
    VL_UNCOPYABLE(Vtb_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
