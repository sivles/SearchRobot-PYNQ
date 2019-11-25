-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity p_write_16bytes_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    p_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    p_ce0 : OUT STD_LOGIC;
    p_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    jpeg_out_TDATA : OUT STD_LOGIC_VECTOR (7 downto 0);
    jpeg_out_TVALID : OUT STD_LOGIC;
    jpeg_out_TREADY : IN STD_LOGIC;
    jpeg_out_TKEEP : OUT STD_LOGIC_VECTOR (0 downto 0);
    jpeg_out_TSTRB : OUT STD_LOGIC_VECTOR (0 downto 0);
    jpeg_out_TLAST : OUT STD_LOGIC_VECTOR (0 downto 0) );
end;


architecture behav of p_write_16bytes_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv5_10 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal jpeg_out_TDATA_blk_n : STD_LOGIC;
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal i_fu_88_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal i_reg_102 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal icmp_ln545_fu_82_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_0_reg_71 : STD_LOGIC_VECTOR (4 downto 0);
    signal zext_ln547_fu_94_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    i_0_reg_71_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((jpeg_out_TREADY = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                i_0_reg_71 <= i_reg_102;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                i_0_reg_71 <= ap_const_lv5_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_reg_102 <= i_fu_88_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, jpeg_out_TREADY, ap_CS_fsm_state3, ap_CS_fsm_state2, icmp_ln545_fu_82_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln545_fu_82_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((jpeg_out_TREADY = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln545_fu_82_p2)
    begin
        if ((((icmp_ln545_fu_82_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, icmp_ln545_fu_82_p2)
    begin
        if (((icmp_ln545_fu_82_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    i_fu_88_p2 <= std_logic_vector(unsigned(i_0_reg_71) + unsigned(ap_const_lv5_1));
    icmp_ln545_fu_82_p2 <= "1" when (i_0_reg_71 = ap_const_lv5_10) else "0";
    jpeg_out_TDATA <= p_q0;

    jpeg_out_TDATA_blk_n_assign_proc : process(jpeg_out_TREADY, ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            jpeg_out_TDATA_blk_n <= jpeg_out_TREADY;
        else 
            jpeg_out_TDATA_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    jpeg_out_TKEEP <= ap_const_lv1_1;
    jpeg_out_TLAST <= ap_const_lv1_0;
    jpeg_out_TSTRB <= ap_const_lv1_0;

    jpeg_out_TVALID_assign_proc : process(jpeg_out_TREADY, ap_CS_fsm_state3)
    begin
        if (((jpeg_out_TREADY = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            jpeg_out_TVALID <= ap_const_logic_1;
        else 
            jpeg_out_TVALID <= ap_const_logic_0;
        end if; 
    end process;

    p_address0 <= zext_ln547_fu_94_p1(4 - 1 downto 0);

    p_ce0_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            p_ce0 <= ap_const_logic_1;
        else 
            p_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    zext_ln547_fu_94_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_0_reg_71),64));
end behav;
