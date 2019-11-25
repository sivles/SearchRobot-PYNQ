// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "p_write_16bytes_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic p_write_16bytes_s::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic p_write_16bytes_s::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> p_write_16bytes_s::ap_ST_fsm_state1 = "1";
const sc_lv<3> p_write_16bytes_s::ap_ST_fsm_state2 = "10";
const sc_lv<3> p_write_16bytes_s::ap_ST_fsm_state3 = "100";
const sc_lv<32> p_write_16bytes_s::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> p_write_16bytes_s::ap_const_lv32_2 = "10";
const sc_lv<32> p_write_16bytes_s::ap_const_lv32_1 = "1";
const sc_lv<1> p_write_16bytes_s::ap_const_lv1_0 = "0";
const sc_lv<5> p_write_16bytes_s::ap_const_lv5_0 = "00000";
const sc_lv<1> p_write_16bytes_s::ap_const_lv1_1 = "1";
const sc_lv<5> p_write_16bytes_s::ap_const_lv5_10 = "10000";
const sc_lv<5> p_write_16bytes_s::ap_const_lv5_1 = "1";
const bool p_write_16bytes_s::ap_const_boolean_1 = true;

p_write_16bytes_s::p_write_16bytes_s(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln545_fu_82_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln545_fu_82_p2 );

    SC_METHOD(thread_i_fu_88_p2);
    sensitive << ( i_0_reg_71 );

    SC_METHOD(thread_icmp_ln545_fu_82_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_71 );

    SC_METHOD(thread_jpeg_out_TDATA);
    sensitive << ( p_q0 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_jpeg_out_TDATA_blk_n);
    sensitive << ( jpeg_out_TREADY );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_jpeg_out_TKEEP);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_jpeg_out_TLAST);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_jpeg_out_TSTRB);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_jpeg_out_TVALID);
    sensitive << ( jpeg_out_TREADY );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_p_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( zext_ln547_fu_94_p1 );

    SC_METHOD(thread_p_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_zext_ln547_fu_94_p1);
    sensitive << ( i_0_reg_71 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( jpeg_out_TREADY );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln545_fu_82_p2 );

    ap_CS_fsm = "001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "p_write_16bytes_s_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, p_address0, "(port)p_address0");
    sc_trace(mVcdFile, p_ce0, "(port)p_ce0");
    sc_trace(mVcdFile, p_q0, "(port)p_q0");
    sc_trace(mVcdFile, jpeg_out_TDATA, "(port)jpeg_out_TDATA");
    sc_trace(mVcdFile, jpeg_out_TVALID, "(port)jpeg_out_TVALID");
    sc_trace(mVcdFile, jpeg_out_TREADY, "(port)jpeg_out_TREADY");
    sc_trace(mVcdFile, jpeg_out_TKEEP, "(port)jpeg_out_TKEEP");
    sc_trace(mVcdFile, jpeg_out_TSTRB, "(port)jpeg_out_TSTRB");
    sc_trace(mVcdFile, jpeg_out_TLAST, "(port)jpeg_out_TLAST");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, jpeg_out_TDATA_blk_n, "jpeg_out_TDATA_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, i_fu_88_p2, "i_fu_88_p2");
    sc_trace(mVcdFile, i_reg_102, "i_reg_102");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, icmp_ln545_fu_82_p2, "icmp_ln545_fu_82_p2");
    sc_trace(mVcdFile, i_0_reg_71, "i_0_reg_71");
    sc_trace(mVcdFile, zext_ln547_fu_94_p1, "zext_ln547_fu_94_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

p_write_16bytes_s::~p_write_16bytes_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void p_write_16bytes_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(jpeg_out_TREADY.read(), ap_const_logic_1))) {
        i_0_reg_71 = i_reg_102.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_71 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_102 = i_fu_88_p2.read();
    }
}

void p_write_16bytes_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void p_write_16bytes_s::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void p_write_16bytes_s::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void p_write_16bytes_s::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln545_fu_82_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void p_write_16bytes_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void p_write_16bytes_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln545_fu_82_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void p_write_16bytes_s::thread_i_fu_88_p2() {
    i_fu_88_p2 = (!i_0_reg_71.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_0_reg_71.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void p_write_16bytes_s::thread_icmp_ln545_fu_82_p2() {
    icmp_ln545_fu_82_p2 = (!i_0_reg_71.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_71.read() == ap_const_lv5_10);
}

void p_write_16bytes_s::thread_jpeg_out_TDATA() {
    jpeg_out_TDATA = p_q0.read();
}

void p_write_16bytes_s::thread_jpeg_out_TDATA_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        jpeg_out_TDATA_blk_n = jpeg_out_TREADY.read();
    } else {
        jpeg_out_TDATA_blk_n = ap_const_logic_1;
    }
}

void p_write_16bytes_s::thread_jpeg_out_TKEEP() {
    jpeg_out_TKEEP = ap_const_lv1_1;
}

void p_write_16bytes_s::thread_jpeg_out_TLAST() {
    jpeg_out_TLAST = ap_const_lv1_0;
}

void p_write_16bytes_s::thread_jpeg_out_TSTRB() {
    jpeg_out_TSTRB = ap_const_lv1_0;
}

void p_write_16bytes_s::thread_jpeg_out_TVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(jpeg_out_TREADY.read(), ap_const_logic_1))) {
        jpeg_out_TVALID = ap_const_logic_1;
    } else {
        jpeg_out_TVALID = ap_const_logic_0;
    }
}

void p_write_16bytes_s::thread_p_address0() {
    p_address0 =  (sc_lv<4>) (zext_ln547_fu_94_p1.read());
}

void p_write_16bytes_s::thread_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        p_ce0 = ap_const_logic_1;
    } else {
        p_ce0 = ap_const_logic_0;
    }
}

void p_write_16bytes_s::thread_zext_ln547_fu_94_p1() {
    zext_ln547_fu_94_p1 = esl_zext<64,5>(i_0_reg_71.read());
}

void p_write_16bytes_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln545_fu_82_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(jpeg_out_TREADY.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

