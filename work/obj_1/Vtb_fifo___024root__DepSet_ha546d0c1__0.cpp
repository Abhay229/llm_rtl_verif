// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo.h for the primary calling header

#include "Vtb_fifo__pch.h"
#include "Vtb_fifo__Syms.h"
#include "Vtb_fifo___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo___024root___dump_triggers__act(Vtb_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fifo___024root___eval_triggers__act(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((~ (IData)(vlSelf->tb_fifo__DOT__rst_n)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__rst_n__0)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_fifo__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->tb_fifo__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__clk__0)));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->tb_fifo__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_fifo__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(4U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__rst_n__0 
        = vlSelf->tb_fifo__DOT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo__DOT__clk__0 
        = vlSelf->tb_fifo__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fifo___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_fifo___024root___nba_sequent__TOP__1(Vtb_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | (8U >= (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GOLD:g_count_bounded t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | ((8U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)) 
                                   == (8U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GOLD:g_full_def t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | ((0U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)) 
                                   == (0U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GOLD:g_empty_def t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | (8U >= (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GEN:fifo_count_max t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | ((8U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)) 
                                   == (8U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GEN:fifo_full_flag_correct t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | ((0U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)) 
                                   == (0U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GEN:fifo_empty_flag_correct t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_0_0)) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count) 
                                      == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_1_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GOLD:g_no_write_when_full t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_2_0)) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count) 
                                      == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_3_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GOLD:g_no_read_when_empty t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_4_0)) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count) 
                                      == ((IData)(1U) 
                                          + (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_5_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GOLD:g_write_incr t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_6_0)) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count) 
                                      == ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gold__DOT___Vpast_7_0) 
                                          - (IData)(1U))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GOLD:g_read_decr t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_0_0)) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count) 
                                      == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_1_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GEN:fifo_full_no_change t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_2_0)) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count) 
                                      == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_3_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GEN:fifo_empty_no_change t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_4_0)) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count) 
                                      == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_5_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GEN:fifo_no_overflow t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n)) 
                                | ((~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_6_0)) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count) 
                                      == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__u_gen__DOT___Vpast_7_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ASSERT_FAIL GEN:fifo_no_underflow t=%0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
        }
    }
    if (vlSelf->tb_fifo__DOT__rst_n) {
        vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_count_max 
            = ((IData)(1U) + vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_count_max);
        vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_count_min 
            = ((IData)(1U) + vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_count_min);
        vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_full_flag_correct 
            = ((IData)(1U) + vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_full_flag_correct);
        vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_empty_flag_correct 
            = ((IData)(1U) + vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_empty_flag_correct);
    }
    if (vlSelf->tb_fifo__DOT__rst_n) {
        vlSelf->tb_fifo__DOT__unnamedblk1__DOT__mw 
            = ((IData)(vlSelf->tb_fifo__DOT__wr_en) 
               & VL_GTS_III(32, 8U, vlSelf->tb_fifo__DOT__model.size()));
        vlSelf->tb_fifo__DOT__unnamedblk1__DOT__mr 
            = ((IData)(vlSelf->tb_fifo__DOT__rd_en) 
               & VL_LTS_III(32, 0U, vlSelf->tb_fifo__DOT__model.size()));
        vlSelf->tb_fifo__DOT__chk_pending = vlSelf->tb_fifo__DOT__unnamedblk1__DOT__mr;
        if (vlSelf->tb_fifo__DOT__unnamedblk1__DOT__mr) {
            vlSelf->tb_fifo__DOT__chk_exp = vlSelf->tb_fifo__DOT__model.pop_front();
        }
        if (vlSelf->tb_fifo__DOT__unnamedblk1__DOT__mw) {
            vlSelf->tb_fifo__DOT__model.push_back(vlSelf->tb_fifo__DOT__wdata);
        }
    }
    if (((IData)(vlSelf->tb_fifo__DOT__rst_n) & (((8U 
                                                   == (IData)(vlSelf->tb_fifo__DOT__count)) 
                                                  & (IData)(vlSelf->tb_fifo__DOT__wr_en)) 
                                                 & (~ (IData)(vlSelf->tb_fifo__DOT__rd_en))))) {
        vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_full_no_change 
            = ((IData)(1U) + vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_full_no_change);
        vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_no_overflow 
            = ((IData)(1U) + vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_no_overflow);
    }
    if (((IData)(vlSelf->tb_fifo__DOT__rst_n) & (((0U 
                                                   == (IData)(vlSelf->tb_fifo__DOT__count)) 
                                                  & (IData)(vlSelf->tb_fifo__DOT__rd_en)) 
                                                 & (~ (IData)(vlSelf->tb_fifo__DOT__wr_en))))) {
        vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_empty_no_change 
            = ((IData)(1U) + vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_empty_no_change);
        vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_no_underflow 
            = ((IData)(1U) + vlSelf->tb_fifo__DOT__u_gen__DOT__cov_fifo_no_underflow);
    }
    vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_1_0 = vlSelf->__Vsampled__TOP__tb_fifo__DOT__count;
    vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_0_0 = 
        ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n) 
         & (((8U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)) 
             & (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__wr_en)) 
            & (~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rd_en))));
    vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_3_0 = vlSelf->__Vsampled__TOP__tb_fifo__DOT__count;
    vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_2_0 = 
        ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n) 
         & (((0U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)) 
             & (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rd_en)) 
            & (~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__wr_en))));
    vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_5_0 = vlSelf->__Vsampled__TOP__tb_fifo__DOT__count;
    vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_4_0 = 
        ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n) 
         & (((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__wr_en) 
             & (8U != (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count))) 
            & (~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rd_en))));
    vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_7_0 = vlSelf->__Vsampled__TOP__tb_fifo__DOT__count;
    vlSelf->tb_fifo__DOT__u_gold__DOT___Vpast_6_0 = 
        ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n) 
         & (((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rd_en) 
             & (0U != (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count))) 
            & (~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__wr_en))));
    vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_1_0 = vlSelf->__Vsampled__TOP__tb_fifo__DOT__count;
    vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_0_0 = 
        ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n) 
         & (((8U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)) 
             & (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__wr_en)) 
            & (~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rd_en))));
    vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_3_0 = vlSelf->__Vsampled__TOP__tb_fifo__DOT__count;
    vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_2_0 = 
        ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n) 
         & (((0U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)) 
             & (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rd_en)) 
            & (~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__wr_en))));
    vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_5_0 = vlSelf->__Vsampled__TOP__tb_fifo__DOT__count;
    vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_4_0 = 
        ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n) 
         & (((8U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)) 
             & (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__wr_en)) 
            & (~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rd_en))));
    vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_7_0 = vlSelf->__Vsampled__TOP__tb_fifo__DOT__count;
    vlSelf->tb_fifo__DOT__u_gen__DOT___Vpast_6_0 = 
        ((IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rst_n) 
         & (((0U == (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__count)) 
             & (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__rd_en)) 
            & (~ (IData)(vlSelf->__Vsampled__TOP__tb_fifo__DOT__wr_en))));
}
