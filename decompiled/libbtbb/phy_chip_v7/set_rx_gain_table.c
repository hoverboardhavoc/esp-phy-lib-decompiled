/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> set_rx_gain_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_rx_gain_table(undefined4 param_1)

{
  uint uVar1;
  
  if ((chip7_sleep_params._0_4_ & 0x200) == 0) {
    chip7_sleep_params[0xb0] =
         gen_rx_gain_table(phy_rx_gain_gen,0x3d,&bt_rx_gain_swp,chip7_phy_init_ctrl,0xc);
    chip7_sleep_params[0xb1] =
         gen_rx_gain_table(phy_rx_gain_gen,0x3d,wifi_rx_gain_swp,chip7_phy_init_ctrl,0xc,0);
    chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x200;
  }
  if ((chip7_sleep_params._0_4_ & 0x100) == 0) {
    set_rf_freq_offset(chip7_phy_init_ctrl[0],param_1,0);
    set_rx_gain_param(1,chip7_sleep_params,phy_rxrf_dc,phy_rxbb_dc,chip7_sleep_params[0xb0] + 1,
                      phy_rx_gain_gen);
    chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x100;
  }
  if (-1 < (int)(chip7_sleep_params._0_4_ << 0xe)) {
    set_rx_gain_param(0,chip7_sleep_params,phy_rxrf_dc,phy_rxbb_dc,chip7_sleep_params[0xb1] + 1,
                      phy_rx_gain_gen);
    chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x20000;
  }
  if ((chip7_sleep_params._0_4_ & 0x20) == 0) {
    wr_rx_gain_mem(1,0,phy_rxrf_dc,phy_rxbb_dc,chip7_sleep_params[0xb0] + 1,phy_rx_gain_gen);
    wr_rx_gain_mem(0,0,phy_rxrf_dc,phy_rxbb_dc,chip7_sleep_params[0xb1] + 1,phy_rx_gain_gen);
    chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x20;
  }
  uVar1 = fpga_mem_rd(0x6001c02c);
  fpga_mem_wr(0x6001c02c,(chip7_sleep_params[0xb1] & 0x7f) << 8 | uVar1 & 0xffff80ff);
  uVar1 = fpga_mem_rd(0x6001c0a4);
  fpga_mem_wr(0x6001c0a4,(chip7_sleep_params[0xb0] & 0x7f) << 0xf | uVar1 & 0xffc07fff);
  uVar1 = fpga_mem_rd(0x600050dc);
  fpga_mem_wr(0x600050dc,uVar1 | 0x800);
  uVar1 = fpga_mem_rd(0x600050dc);
  fpga_mem_wr(0x600050dc,uVar1 | 0x1000);
  return;
}

