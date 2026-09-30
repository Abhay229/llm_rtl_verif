// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo.h for the primary calling header

#include "Vtb_fifo__pch.h"
#include "Vtb_fifo___024root.h"

VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo___024root* vlSelf);
VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo___024root* vlSelf);

void Vtb_fifo___024root___eval_initial(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_initial\n"); );
    // Body
    Vtb_fifo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fifo___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__rst_n__0 
        = vlSelf->tb_fifo__DOT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__clk__0 
        = vlSelf->tb_fifo__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ tb_fifo__DOT____Vrepeat7;
    tb_fifo__DOT____Vrepeat7 = 0;
    IData/*31:0*/ tb_fifo__DOT__unnamedblk2__DOT__wp;
    tb_fifo__DOT__unnamedblk2__DOT__wp = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__0__w;
    __Vtask_tb_fifo__DOT__drive__0__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__0__r;
    __Vtask_tb_fifo__DOT__drive__0__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo__DOT__drive__0__d;
    __Vtask_tb_fifo__DOT__drive__0__d = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__1__w;
    __Vtask_tb_fifo__DOT__drive__1__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__1__r;
    __Vtask_tb_fifo__DOT__drive__1__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo__DOT__drive__1__d;
    __Vtask_tb_fifo__DOT__drive__1__d = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__2__w;
    __Vtask_tb_fifo__DOT__drive__2__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__2__r;
    __Vtask_tb_fifo__DOT__drive__2__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo__DOT__drive__2__d;
    __Vtask_tb_fifo__DOT__drive__2__d = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__3__w;
    __Vtask_tb_fifo__DOT__drive__3__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__3__r;
    __Vtask_tb_fifo__DOT__drive__3__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo__DOT__drive__3__d;
    __Vtask_tb_fifo__DOT__drive__3__d = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__4__w;
    __Vtask_tb_fifo__DOT__drive__4__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__4__r;
    __Vtask_tb_fifo__DOT__drive__4__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo__DOT__drive__4__d;
    __Vtask_tb_fifo__DOT__drive__4__d = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__5__w;
    __Vtask_tb_fifo__DOT__drive__5__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__5__r;
    __Vtask_tb_fifo__DOT__drive__5__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo__DOT__drive__5__d;
    __Vtask_tb_fifo__DOT__drive__5__d = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__6__w;
    __Vtask_tb_fifo__DOT__drive__6__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__6__r;
    __Vtask_tb_fifo__DOT__drive__6__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo__DOT__drive__6__d;
    __Vtask_tb_fifo__DOT__drive__6__d = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__7__w;
    __Vtask_tb_fifo__DOT__drive__7__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__7__r;
    __Vtask_tb_fifo__DOT__drive__7__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo__DOT__drive__7__d;
    __Vtask_tb_fifo__DOT__drive__7__d = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__8__w;
    __Vtask_tb_fifo__DOT__drive__8__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__8__r;
    __Vtask_tb_fifo__DOT__drive__8__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo__DOT__drive__8__d;
    __Vtask_tb_fifo__DOT__drive__8__d = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__9__w;
    __Vtask_tb_fifo__DOT__drive__9__w = 0;
    CData/*0:0*/ __Vtask_tb_fifo__DOT__drive__9__r;
    __Vtask_tb_fifo__DOT__drive__9__r = 0;
    CData/*7:0*/ __Vtask_tb_fifo__DOT__drive__9__d;
    __Vtask_tb_fifo__DOT__drive__9__d = 0;
    // Body
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                       52);
    vlSelf->tb_fifo__DOT__rst_n = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       53);
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       53);
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       53);
    vlSelf->tb_fifo__DOT__rst_n = 1U;
    __Vtask_tb_fifo__DOT__drive__0__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__0__r = 0U;
    __Vtask_tb_fifo__DOT__drive__0__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__0__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__0__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__0__d;
    __Vtask_tb_fifo__DOT__drive__0__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__0__r = 0U;
    __Vtask_tb_fifo__DOT__drive__0__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__0__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__0__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__0__d;
    __Vtask_tb_fifo__DOT__drive__0__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__0__r = 0U;
    __Vtask_tb_fifo__DOT__drive__0__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__0__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__0__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__0__d;
    __Vtask_tb_fifo__DOT__drive__0__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__0__r = 0U;
    __Vtask_tb_fifo__DOT__drive__0__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__0__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__0__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__0__d;
    __Vtask_tb_fifo__DOT__drive__0__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__0__r = 0U;
    __Vtask_tb_fifo__DOT__drive__0__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__0__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__0__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__0__d;
    __Vtask_tb_fifo__DOT__drive__0__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__0__r = 0U;
    __Vtask_tb_fifo__DOT__drive__0__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__0__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__0__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__0__d;
    __Vtask_tb_fifo__DOT__drive__0__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__0__r = 0U;
    __Vtask_tb_fifo__DOT__drive__0__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__0__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__0__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__0__d;
    __Vtask_tb_fifo__DOT__drive__0__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__0__r = 0U;
    __Vtask_tb_fifo__DOT__drive__0__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__0__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__0__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__0__d;
    __Vtask_tb_fifo__DOT__drive__0__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__0__r = 0U;
    __Vtask_tb_fifo__DOT__drive__0__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__0__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__0__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__0__d;
    __Vtask_tb_fifo__DOT__drive__0__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__0__r = 0U;
    __Vtask_tb_fifo__DOT__drive__0__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__0__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__0__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__0__d;
    __Vtask_tb_fifo__DOT__drive__0__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__0__r = 0U;
    __Vtask_tb_fifo__DOT__drive__0__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__0__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__0__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__0__d;
    __Vtask_tb_fifo__DOT__drive__1__d = 0U;
    __Vtask_tb_fifo__DOT__drive__1__r = 1U;
    __Vtask_tb_fifo__DOT__drive__1__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__1__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__1__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__1__d;
    __Vtask_tb_fifo__DOT__drive__1__d = 0U;
    __Vtask_tb_fifo__DOT__drive__1__r = 1U;
    __Vtask_tb_fifo__DOT__drive__1__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__1__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__1__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__1__d;
    __Vtask_tb_fifo__DOT__drive__1__d = 0U;
    __Vtask_tb_fifo__DOT__drive__1__r = 1U;
    __Vtask_tb_fifo__DOT__drive__1__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__1__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__1__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__1__d;
    __Vtask_tb_fifo__DOT__drive__1__d = 0U;
    __Vtask_tb_fifo__DOT__drive__1__r = 1U;
    __Vtask_tb_fifo__DOT__drive__1__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__1__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__1__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__1__d;
    __Vtask_tb_fifo__DOT__drive__1__d = 0U;
    __Vtask_tb_fifo__DOT__drive__1__r = 1U;
    __Vtask_tb_fifo__DOT__drive__1__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__1__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__1__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__1__d;
    __Vtask_tb_fifo__DOT__drive__1__d = 0U;
    __Vtask_tb_fifo__DOT__drive__1__r = 1U;
    __Vtask_tb_fifo__DOT__drive__1__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__1__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__1__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__1__d;
    __Vtask_tb_fifo__DOT__drive__1__d = 0U;
    __Vtask_tb_fifo__DOT__drive__1__r = 1U;
    __Vtask_tb_fifo__DOT__drive__1__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__1__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__1__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__1__d;
    __Vtask_tb_fifo__DOT__drive__1__d = 0U;
    __Vtask_tb_fifo__DOT__drive__1__r = 1U;
    __Vtask_tb_fifo__DOT__drive__1__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__1__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__1__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__1__d;
    __Vtask_tb_fifo__DOT__drive__1__d = 0U;
    __Vtask_tb_fifo__DOT__drive__1__r = 1U;
    __Vtask_tb_fifo__DOT__drive__1__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__1__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__1__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__1__d;
    __Vtask_tb_fifo__DOT__drive__1__d = 0U;
    __Vtask_tb_fifo__DOT__drive__1__r = 1U;
    __Vtask_tb_fifo__DOT__drive__1__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__1__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__1__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__1__d;
    __Vtask_tb_fifo__DOT__drive__1__d = 0U;
    __Vtask_tb_fifo__DOT__drive__1__r = 1U;
    __Vtask_tb_fifo__DOT__drive__1__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__1__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__1__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__1__d;
    __Vtask_tb_fifo__DOT__drive__2__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__2__r = 1U;
    __Vtask_tb_fifo__DOT__drive__2__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__2__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__2__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__2__d;
    __Vtask_tb_fifo__DOT__drive__2__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__2__r = 1U;
    __Vtask_tb_fifo__DOT__drive__2__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__2__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__2__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__2__d;
    __Vtask_tb_fifo__DOT__drive__2__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__2__r = 1U;
    __Vtask_tb_fifo__DOT__drive__2__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__2__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__2__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__2__d;
    __Vtask_tb_fifo__DOT__drive__2__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__2__r = 1U;
    __Vtask_tb_fifo__DOT__drive__2__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__2__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__2__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__2__d;
    __Vtask_tb_fifo__DOT__drive__3__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__3__r = 0U;
    __Vtask_tb_fifo__DOT__drive__3__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__3__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__3__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__3__d;
    __Vtask_tb_fifo__DOT__drive__3__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__3__r = 0U;
    __Vtask_tb_fifo__DOT__drive__3__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__3__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__3__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__3__d;
    __Vtask_tb_fifo__DOT__drive__3__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__3__r = 0U;
    __Vtask_tb_fifo__DOT__drive__3__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__3__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__3__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__3__d;
    __Vtask_tb_fifo__DOT__drive__3__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__3__r = 0U;
    __Vtask_tb_fifo__DOT__drive__3__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__3__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__3__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__3__d;
    __Vtask_tb_fifo__DOT__drive__3__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__3__r = 0U;
    __Vtask_tb_fifo__DOT__drive__3__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__3__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__3__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__3__d;
    __Vtask_tb_fifo__DOT__drive__3__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__3__r = 0U;
    __Vtask_tb_fifo__DOT__drive__3__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__3__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__3__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__3__d;
    __Vtask_tb_fifo__DOT__drive__3__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__3__r = 0U;
    __Vtask_tb_fifo__DOT__drive__3__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__3__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__3__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__3__d;
    __Vtask_tb_fifo__DOT__drive__3__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__3__r = 0U;
    __Vtask_tb_fifo__DOT__drive__3__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__3__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__3__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__3__d;
    __Vtask_tb_fifo__DOT__drive__4__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__4__r = 1U;
    __Vtask_tb_fifo__DOT__drive__4__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__4__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__4__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__4__d;
    __Vtask_tb_fifo__DOT__drive__4__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__4__r = 1U;
    __Vtask_tb_fifo__DOT__drive__4__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__4__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__4__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__4__d;
    __Vtask_tb_fifo__DOT__drive__4__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__4__r = 1U;
    __Vtask_tb_fifo__DOT__drive__4__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__4__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__4__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__4__d;
    __Vtask_tb_fifo__DOT__drive__4__d = (0xffU & VL_RANDOM_I());
    __Vtask_tb_fifo__DOT__drive__4__r = 1U;
    __Vtask_tb_fifo__DOT__drive__4__w = 1U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__4__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__4__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__4__d;
    __Vtask_tb_fifo__DOT__drive__5__d = 0U;
    __Vtask_tb_fifo__DOT__drive__5__r = 1U;
    __Vtask_tb_fifo__DOT__drive__5__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__5__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__5__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__5__d;
    __Vtask_tb_fifo__DOT__drive__5__d = 0U;
    __Vtask_tb_fifo__DOT__drive__5__r = 1U;
    __Vtask_tb_fifo__DOT__drive__5__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__5__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__5__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__5__d;
    __Vtask_tb_fifo__DOT__drive__5__d = 0U;
    __Vtask_tb_fifo__DOT__drive__5__r = 1U;
    __Vtask_tb_fifo__DOT__drive__5__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__5__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__5__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__5__d;
    __Vtask_tb_fifo__DOT__drive__5__d = 0U;
    __Vtask_tb_fifo__DOT__drive__5__r = 1U;
    __Vtask_tb_fifo__DOT__drive__5__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__5__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__5__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__5__d;
    __Vtask_tb_fifo__DOT__drive__5__d = 0U;
    __Vtask_tb_fifo__DOT__drive__5__r = 1U;
    __Vtask_tb_fifo__DOT__drive__5__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__5__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__5__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__5__d;
    __Vtask_tb_fifo__DOT__drive__5__d = 0U;
    __Vtask_tb_fifo__DOT__drive__5__r = 1U;
    __Vtask_tb_fifo__DOT__drive__5__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__5__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__5__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__5__d;
    __Vtask_tb_fifo__DOT__drive__5__d = 0U;
    __Vtask_tb_fifo__DOT__drive__5__r = 1U;
    __Vtask_tb_fifo__DOT__drive__5__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__5__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__5__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__5__d;
    __Vtask_tb_fifo__DOT__drive__5__d = 0U;
    __Vtask_tb_fifo__DOT__drive__5__r = 1U;
    __Vtask_tb_fifo__DOT__drive__5__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__5__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__5__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__5__d;
    __Vtask_tb_fifo__DOT__drive__5__d = 0U;
    __Vtask_tb_fifo__DOT__drive__5__r = 1U;
    __Vtask_tb_fifo__DOT__drive__5__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__5__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__5__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__5__d;
    __Vtask_tb_fifo__DOT__drive__5__d = 0U;
    __Vtask_tb_fifo__DOT__drive__5__r = 1U;
    __Vtask_tb_fifo__DOT__drive__5__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__5__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__5__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__5__d;
    tb_fifo__DOT__unnamedblk2__DOT__wp = 0x4bU;
    tb_fifo__DOT____Vrepeat7 = 0xc8U;
    while (VL_LTS_III(32, 0U, tb_fifo__DOT____Vrepeat7)) {
        __Vtask_tb_fifo__DOT__drive__6__d = (0xffU 
                                             & VL_RANDOM_I());
        __Vtask_tb_fifo__DOT__drive__6__r = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < ((IData)(0x64U) 
                                                - tb_fifo__DOT__unnamedblk2__DOT__wp));
        __Vtask_tb_fifo__DOT__drive__6__w = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < tb_fifo__DOT__unnamedblk2__DOT__wp);
        co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_fifo.clk)", 
                                                           "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                           44);
        vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__6__w;
        vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__6__r;
        vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__6__d;
        tb_fifo__DOT____Vrepeat7 = (tb_fifo__DOT____Vrepeat7 
                                    - (IData)(1U));
    }
    tb_fifo__DOT__unnamedblk2__DOT__wp = 0x19U;
    tb_fifo__DOT____Vrepeat7 = 0xc8U;
    while (VL_LTS_III(32, 0U, tb_fifo__DOT____Vrepeat7)) {
        __Vtask_tb_fifo__DOT__drive__6__d = (0xffU 
                                             & VL_RANDOM_I());
        __Vtask_tb_fifo__DOT__drive__6__r = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < ((IData)(0x64U) 
                                                - tb_fifo__DOT__unnamedblk2__DOT__wp));
        __Vtask_tb_fifo__DOT__drive__6__w = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < tb_fifo__DOT__unnamedblk2__DOT__wp);
        co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_fifo.clk)", 
                                                           "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                           44);
        vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__6__w;
        vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__6__r;
        vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__6__d;
        tb_fifo__DOT____Vrepeat7 = (tb_fifo__DOT____Vrepeat7 
                                    - (IData)(1U));
    }
    tb_fifo__DOT__unnamedblk2__DOT__wp = 0x4bU;
    tb_fifo__DOT____Vrepeat7 = 0xc8U;
    while (VL_LTS_III(32, 0U, tb_fifo__DOT____Vrepeat7)) {
        __Vtask_tb_fifo__DOT__drive__6__d = (0xffU 
                                             & VL_RANDOM_I());
        __Vtask_tb_fifo__DOT__drive__6__r = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < ((IData)(0x64U) 
                                                - tb_fifo__DOT__unnamedblk2__DOT__wp));
        __Vtask_tb_fifo__DOT__drive__6__w = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < tb_fifo__DOT__unnamedblk2__DOT__wp);
        co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_fifo.clk)", 
                                                           "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                           44);
        vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__6__w;
        vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__6__r;
        vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__6__d;
        tb_fifo__DOT____Vrepeat7 = (tb_fifo__DOT____Vrepeat7 
                                    - (IData)(1U));
    }
    tb_fifo__DOT__unnamedblk2__DOT__wp = 0x19U;
    tb_fifo__DOT____Vrepeat7 = 0xc8U;
    while (VL_LTS_III(32, 0U, tb_fifo__DOT____Vrepeat7)) {
        __Vtask_tb_fifo__DOT__drive__6__d = (0xffU 
                                             & VL_RANDOM_I());
        __Vtask_tb_fifo__DOT__drive__6__r = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < ((IData)(0x64U) 
                                                - tb_fifo__DOT__unnamedblk2__DOT__wp));
        __Vtask_tb_fifo__DOT__drive__6__w = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < tb_fifo__DOT__unnamedblk2__DOT__wp);
        co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_fifo.clk)", 
                                                           "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                           44);
        vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__6__w;
        vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__6__r;
        vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__6__d;
        tb_fifo__DOT____Vrepeat7 = (tb_fifo__DOT____Vrepeat7 
                                    - (IData)(1U));
    }
    tb_fifo__DOT__unnamedblk2__DOT__wp = 0x4bU;
    tb_fifo__DOT____Vrepeat7 = 0xc8U;
    while (VL_LTS_III(32, 0U, tb_fifo__DOT____Vrepeat7)) {
        __Vtask_tb_fifo__DOT__drive__6__d = (0xffU 
                                             & VL_RANDOM_I());
        __Vtask_tb_fifo__DOT__drive__6__r = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < ((IData)(0x64U) 
                                                - tb_fifo__DOT__unnamedblk2__DOT__wp));
        __Vtask_tb_fifo__DOT__drive__6__w = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < tb_fifo__DOT__unnamedblk2__DOT__wp);
        co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_fifo.clk)", 
                                                           "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                           44);
        vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__6__w;
        vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__6__r;
        vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__6__d;
        tb_fifo__DOT____Vrepeat7 = (tb_fifo__DOT____Vrepeat7 
                                    - (IData)(1U));
    }
    tb_fifo__DOT__unnamedblk2__DOT__wp = 0x19U;
    tb_fifo__DOT____Vrepeat7 = 0xc8U;
    while (VL_LTS_III(32, 0U, tb_fifo__DOT____Vrepeat7)) {
        __Vtask_tb_fifo__DOT__drive__6__d = (0xffU 
                                             & VL_RANDOM_I());
        __Vtask_tb_fifo__DOT__drive__6__r = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < ((IData)(0x64U) 
                                                - tb_fifo__DOT__unnamedblk2__DOT__wp));
        __Vtask_tb_fifo__DOT__drive__6__w = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < tb_fifo__DOT__unnamedblk2__DOT__wp);
        co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_fifo.clk)", 
                                                           "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                           44);
        vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__6__w;
        vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__6__r;
        vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__6__d;
        tb_fifo__DOT____Vrepeat7 = (tb_fifo__DOT____Vrepeat7 
                                    - (IData)(1U));
    }
    tb_fifo__DOT__unnamedblk2__DOT__wp = 0x4bU;
    tb_fifo__DOT____Vrepeat7 = 0xc8U;
    while (VL_LTS_III(32, 0U, tb_fifo__DOT____Vrepeat7)) {
        __Vtask_tb_fifo__DOT__drive__6__d = (0xffU 
                                             & VL_RANDOM_I());
        __Vtask_tb_fifo__DOT__drive__6__r = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < ((IData)(0x64U) 
                                                - tb_fifo__DOT__unnamedblk2__DOT__wp));
        __Vtask_tb_fifo__DOT__drive__6__w = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < tb_fifo__DOT__unnamedblk2__DOT__wp);
        co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_fifo.clk)", 
                                                           "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                           44);
        vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__6__w;
        vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__6__r;
        vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__6__d;
        tb_fifo__DOT____Vrepeat7 = (tb_fifo__DOT____Vrepeat7 
                                    - (IData)(1U));
    }
    tb_fifo__DOT__unnamedblk2__DOT__wp = 0x19U;
    tb_fifo__DOT____Vrepeat7 = 0xc8U;
    while (VL_LTS_III(32, 0U, tb_fifo__DOT____Vrepeat7)) {
        __Vtask_tb_fifo__DOT__drive__6__d = (0xffU 
                                             & VL_RANDOM_I());
        __Vtask_tb_fifo__DOT__drive__6__r = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < ((IData)(0x64U) 
                                                - tb_fifo__DOT__unnamedblk2__DOT__wp));
        __Vtask_tb_fifo__DOT__drive__6__w = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < tb_fifo__DOT__unnamedblk2__DOT__wp);
        co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_fifo.clk)", 
                                                           "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                           44);
        vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__6__w;
        vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__6__r;
        vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__6__d;
        tb_fifo__DOT____Vrepeat7 = (tb_fifo__DOT____Vrepeat7 
                                    - (IData)(1U));
    }
    tb_fifo__DOT__unnamedblk2__DOT__wp = 0x4bU;
    tb_fifo__DOT____Vrepeat7 = 0xc8U;
    while (VL_LTS_III(32, 0U, tb_fifo__DOT____Vrepeat7)) {
        __Vtask_tb_fifo__DOT__drive__6__d = (0xffU 
                                             & VL_RANDOM_I());
        __Vtask_tb_fifo__DOT__drive__6__r = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < ((IData)(0x64U) 
                                                - tb_fifo__DOT__unnamedblk2__DOT__wp));
        __Vtask_tb_fifo__DOT__drive__6__w = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < tb_fifo__DOT__unnamedblk2__DOT__wp);
        co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_fifo.clk)", 
                                                           "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                           44);
        vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__6__w;
        vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__6__r;
        vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__6__d;
        tb_fifo__DOT____Vrepeat7 = (tb_fifo__DOT____Vrepeat7 
                                    - (IData)(1U));
    }
    tb_fifo__DOT__unnamedblk2__DOT__wp = 0x19U;
    tb_fifo__DOT____Vrepeat7 = 0xc8U;
    while (VL_LTS_III(32, 0U, tb_fifo__DOT____Vrepeat7)) {
        __Vtask_tb_fifo__DOT__drive__6__d = (0xffU 
                                             & VL_RANDOM_I());
        __Vtask_tb_fifo__DOT__drive__6__r = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < ((IData)(0x64U) 
                                                - tb_fifo__DOT__unnamedblk2__DOT__wp));
        __Vtask_tb_fifo__DOT__drive__6__w = (VL_URANDOM_RANGE_I(0x63U, 0U) 
                                             < tb_fifo__DOT__unnamedblk2__DOT__wp);
        co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_fifo.clk)", 
                                                           "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                           44);
        vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__6__w;
        vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__6__r;
        vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__6__d;
        tb_fifo__DOT____Vrepeat7 = (tb_fifo__DOT____Vrepeat7 
                                    - (IData)(1U));
    }
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INN(64, std::string{"STIM=%s"}, 
                                         vlSelf->tb_fifo__DOT__unnamedblk2__DOT__stim_file))) {
        vlSelf->tb_fifo__DOT__unnamedblk2__DOT__fd 
            = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelf->tb_fifo__DOT__unnamedblk2__DOT__stim_file)
                          , std::string{"r"});
        ;
        if (VL_UNLIKELY((0U != vlSelf->tb_fifo__DOT__unnamedblk2__DOT__fd))) {
            while ((! (vlSelf->tb_fifo__DOT__unnamedblk2__DOT__fd ? feof(VL_CVT_I_FP(vlSelf->tb_fifo__DOT__unnamedblk2__DOT__fd)) : true))) {
                vlSelf->tb_fifo__DOT__unnamedblk2__DOT__code 
                    = VL_FSCANF_IX(vlSelf->tb_fifo__DOT__unnamedblk2__DOT__fd,"%# %# %x\n",
                                   32,&(vlSelf->tb_fifo__DOT__unnamedblk2__DOT__w),
                                   32,&(vlSelf->tb_fifo__DOT__unnamedblk2__DOT__r),
                                   8,&(vlSelf->tb_fifo__DOT__unnamedblk2__DOT__d)) ;
                if ((3U == vlSelf->tb_fifo__DOT__unnamedblk2__DOT__code)) {
                    __Vtask_tb_fifo__DOT__drive__7__d 
                        = vlSelf->tb_fifo__DOT__unnamedblk2__DOT__d;
                    __Vtask_tb_fifo__DOT__drive__7__r 
                        = (1U & vlSelf->tb_fifo__DOT__unnamedblk2__DOT__r);
                    __Vtask_tb_fifo__DOT__drive__7__w 
                        = (1U & vlSelf->tb_fifo__DOT__unnamedblk2__DOT__w);
                    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge tb_fifo.clk)", 
                                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                                       44);
                    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__7__w;
                    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__7__r;
                    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__7__d;
                }
            }
            VL_FCLOSE_I(vlSelf->tb_fifo__DOT__unnamedblk2__DOT__fd); }
    }
    __Vtask_tb_fifo__DOT__drive__8__d = 0U;
    __Vtask_tb_fifo__DOT__drive__8__r = 0U;
    __Vtask_tb_fifo__DOT__drive__8__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__8__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__8__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__8__d;
    __Vtask_tb_fifo__DOT__drive__9__d = 0U;
    __Vtask_tb_fifo__DOT__drive__9__r = 0U;
    __Vtask_tb_fifo__DOT__drive__9__w = 0U;
    co_await vlSelf->__VtrigSched_h6edd0a4d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_fifo.clk)", 
                                                       "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                                       44);
    vlSelf->tb_fifo__DOT__wr_en = __Vtask_tb_fifo__DOT__drive__9__w;
    vlSelf->tb_fifo__DOT__rd_en = __Vtask_tb_fifo__DOT__drive__9__r;
    vlSelf->tb_fifo__DOT__wdata = __Vtask_tb_fifo__DOT__drive__9__d;
    VL_WRITEF("TB_DONE errors=%0d\n",32,vlSelf->tb_fifo__DOT__errors);
    VL_FINISH_MT("/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 81, "");
}

VL_INLINE_OPT VlCoroutine Vtb_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 
                                           12);
        vlSelf->tb_fifo__DOT__clk = (1U & (~ (IData)(vlSelf->tb_fifo__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_fifo___024root___act_comb__TOP__0(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_fifo__DOT__dut__DOT__do_wr = ((7U > (IData)(vlSelf->tb_fifo__DOT__count)) 
                                             & (IData)(vlSelf->tb_fifo__DOT__wr_en));
    vlSelf->tb_fifo__DOT__dut__DOT__do_rd = ((0U != (IData)(vlSelf->tb_fifo__DOT__count)) 
                                             & (IData)(vlSelf->tb_fifo__DOT__rd_en));
}

void Vtb_fifo___024root___eval_act(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_act\n"); );
    // Body
    if ((0x14ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_fifo___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_fifo___024root___nba_sequent__TOP__0(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__tb_fifo__DOT__dut__DOT__mem__v0 = 0U;
    vlSelf->__Vdly__tb_fifo__DOT__count = vlSelf->tb_fifo__DOT__count;
    if (vlSelf->tb_fifo__DOT__rst_n) {
        if (vlSelf->tb_fifo__DOT__dut__DOT__do_wr) {
            vlSelf->__Vdlyvval__tb_fifo__DOT__dut__DOT__mem__v0 
                = vlSelf->tb_fifo__DOT__wdata;
            vlSelf->__Vdlyvset__tb_fifo__DOT__dut__DOT__mem__v0 = 1U;
            vlSelf->__Vdlyvdim0__tb_fifo__DOT__dut__DOT__mem__v0 
                = vlSelf->tb_fifo__DOT__dut__DOT__wptr;
            vlSelf->tb_fifo__DOT__dut__DOT__wptr = 
                ((7U == (IData)(vlSelf->tb_fifo__DOT__dut__DOT__wptr))
                  ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->tb_fifo__DOT__dut__DOT__wptr))));
        }
        if ((2U == (((IData)(vlSelf->tb_fifo__DOT__dut__DOT__do_wr) 
                     << 1U) | (IData)(vlSelf->tb_fifo__DOT__dut__DOT__do_rd)))) {
            vlSelf->__Vdly__tb_fifo__DOT__count = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->tb_fifo__DOT__count)));
        } else if ((1U == (((IData)(vlSelf->tb_fifo__DOT__dut__DOT__do_wr) 
                            << 1U) | (IData)(vlSelf->tb_fifo__DOT__dut__DOT__do_rd)))) {
            vlSelf->__Vdly__tb_fifo__DOT__count = (0xfU 
                                                   & ((IData)(vlSelf->tb_fifo__DOT__count) 
                                                      - (IData)(1U)));
        } else if ((3U == (((IData)(vlSelf->tb_fifo__DOT__dut__DOT__do_wr) 
                            << 1U) | (IData)(vlSelf->tb_fifo__DOT__dut__DOT__do_rd)))) {
            vlSelf->__Vdly__tb_fifo__DOT__count = vlSelf->tb_fifo__DOT__count;
        }
    } else {
        vlSelf->tb_fifo__DOT__dut__DOT__wptr = 0U;
        vlSelf->__Vdly__tb_fifo__DOT__count = 0U;
    }
}

VL_INLINE_OPT void Vtb_fifo___024root___nba_sequent__TOP__2(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb_fifo__DOT__model.clear();
    vlSelf->tb_fifo__DOT__chk_pending = 0U;
}

VL_INLINE_OPT void Vtb_fifo___024root___nba_sequent__TOP__3(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->tb_fifo__DOT__rst_n) {
        if (vlSelf->tb_fifo__DOT__chk_pending) {
            if (VL_UNLIKELY(((IData)(vlSelf->tb_fifo__DOT__rdata) 
                             != (IData)(vlSelf->tb_fifo__DOT__chk_exp)))) {
                vlSelf->tb_fifo__DOT__errors = ((IData)(1U) 
                                                + vlSelf->tb_fifo__DOT__errors);
                VL_WRITEF("TB_ERR data exp=%0x got=%0x t=%0t\n",
                          8,vlSelf->tb_fifo__DOT__chk_exp,
                          8,(IData)(vlSelf->tb_fifo__DOT__rdata),
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
            vlSelf->tb_fifo__DOT__chk_pending = 0U;
        }
        if (VL_UNLIKELY(((7U <= (IData)(vlSelf->tb_fifo__DOT__count)) 
                         != (8U == vlSelf->tb_fifo__DOT__model.size())))) {
            vlSelf->tb_fifo__DOT__errors = ((IData)(1U) 
                                            + vlSelf->tb_fifo__DOT__errors);
            VL_WRITEF("TB_ERR full t=%0t\n",64,VL_TIME_UNITED_Q(1000),
                      -9);
        }
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->tb_fifo__DOT__count)) 
                         != (0U == vlSelf->tb_fifo__DOT__model.size())))) {
            vlSelf->tb_fifo__DOT__errors = ((IData)(1U) 
                                            + vlSelf->tb_fifo__DOT__errors);
            VL_WRITEF("TB_ERR empty t=%0t\n",64,VL_TIME_UNITED_Q(1000),
                      -9);
        }
    }
}

VL_INLINE_OPT void Vtb_fifo___024root___nba_sequent__TOP__4(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->tb_fifo__DOT__count = vlSelf->__Vdly__tb_fifo__DOT__count;
    if (vlSelf->tb_fifo__DOT__rst_n) {
        if (vlSelf->tb_fifo__DOT__dut__DOT__do_rd) {
            vlSelf->tb_fifo__DOT__rdata = vlSelf->tb_fifo__DOT__dut__DOT__mem
                [vlSelf->tb_fifo__DOT__dut__DOT__rptr];
            vlSelf->tb_fifo__DOT__dut__DOT__rptr = 
                ((7U == (IData)(vlSelf->tb_fifo__DOT__dut__DOT__rptr))
                  ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->tb_fifo__DOT__dut__DOT__rptr))));
        }
    } else {
        vlSelf->tb_fifo__DOT__dut__DOT__rptr = 0U;
        vlSelf->tb_fifo__DOT__rdata = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_fifo__DOT__dut__DOT__mem__v0) {
        vlSelf->tb_fifo__DOT__dut__DOT__mem[vlSelf->__Vdlyvdim0__tb_fifo__DOT__dut__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__tb_fifo__DOT__dut__DOT__mem__v0;
    }
}

void Vtb_fifo___024root___nba_sequent__TOP__1(Vtb_fifo___024root* vlSelf);

void Vtb_fifo___024root___eval_nba(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x1cULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_fifo___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_fifo___024root___timing_resume(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6edd0a4d__0.resume("@(negedge tb_fifo.clk)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_fifo___024root___timing_commit(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6edd0a4d__0.commit("@(negedge tb_fifo.clk)");
    }
}

void Vtb_fifo___024root___eval_triggers__act(Vtb_fifo___024root* vlSelf);

bool Vtb_fifo___024root___eval_phase__act(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fifo___024root___eval_triggers__act(vlSelf);
    Vtb_fifo___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_fifo___024root___timing_resume(vlSelf);
        Vtb_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fifo___024root___eval_phase__nba(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_fifo___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo___024root___dump_triggers__nba(Vtb_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo___024root___dump_triggers__act(Vtb_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fifo___024root___eval(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval\n"); );
    // Init
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n = vlSelf->tb_fifo__DOT__rst_n;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__count = vlSelf->tb_fifo__DOT__count;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_0_0 
        = vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_0_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_1_0 
        = vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_1_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_2_0 
        = vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_2_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_3_0 
        = vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_3_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_4_0 
        = vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_4_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_5_0 
        = vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_5_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_6_0 
        = vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_6_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_7_0 
        = vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_7_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_0_0 
        = vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_0_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_1_0 
        = vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_1_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_2_0 
        = vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_2_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_3_0 
        = vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_3_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_4_0 
        = vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_4_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_5_0 
        = vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_5_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_6_0 
        = vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_6_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_7_0 
        = vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_7_0;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__wr_en = vlSelf->tb_fifo__DOT__wr_en;
    vlSelf->__Vsampled__TOP__tb_fifo__DOT__rd_en = vlSelf->tb_fifo__DOT__rd_en;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/hp/llm-rtl-verif/tb/tb_fifo.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_fifo___024root___eval_debug_assertions(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
