// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _p_write_162bytes_s_HH_
#define _p_write_162bytes_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct p_write_162bytes_s : public sc_module {
    // Port declarations 15
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<8> > p_address0;
    sc_out< sc_logic > p_ce0;
    sc_in< sc_lv<8> > p_q0;
    sc_out< sc_lv<8> > jpeg_out_TDATA;
    sc_out< sc_logic > jpeg_out_TVALID;
    sc_in< sc_logic > jpeg_out_TREADY;
    sc_out< sc_lv<1> > jpeg_out_TKEEP;
    sc_out< sc_lv<1> > jpeg_out_TSTRB;
    sc_out< sc_lv<1> > jpeg_out_TLAST;


    // Module declarations
    p_write_162bytes_s(sc_module_name name);
    SC_HAS_PROCESS(p_write_162bytes_s);

    ~p_write_162bytes_s();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > jpeg_out_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<8> > i_fu_88_p2;
    sc_signal< sc_lv<8> > i_reg_102;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln563_fu_82_p2;
    sc_signal< sc_lv<8> > i_0_reg_71;
    sc_signal< sc_lv<64> > zext_ln565_fu_94_p1;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<8> ap_const_lv8_A2;
    static const sc_lv<8> ap_const_lv8_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_i_fu_88_p2();
    void thread_icmp_ln563_fu_82_p2();
    void thread_jpeg_out_TDATA();
    void thread_jpeg_out_TDATA_blk_n();
    void thread_jpeg_out_TKEEP();
    void thread_jpeg_out_TLAST();
    void thread_jpeg_out_TSTRB();
    void thread_jpeg_out_TVALID();
    void thread_p_address0();
    void thread_p_ce0();
    void thread_zext_ln565_fu_94_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
