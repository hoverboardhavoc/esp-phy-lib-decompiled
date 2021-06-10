/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_init(void)

{
  uint uVar1;
  
  fe_reg_init();
  tx_paon_set();
  if (-1 < (int)(chip7_sleep_params._0_4_ << 0xf)) {
    set_pbus_mem();
    chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x10000;
  }
  rc_cal();
  if (-1 < (int)(chip7_sleep_params._0_4_ << 0xc)) {
    txdc_cal_init(chip7_sleep_params,tx_rf_ana_gain,DAT_00015e22,0);
    chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x80000;
  }
  tx_cap_init();
  txpwr_offset(0);
  tx_pwctrl_init(1);
  txiq_cal_init();
  if ((re_entry == '\0') || (phy_init_flag == '\0')) {
    set_tx_gain_table(tx_rf_ana_gain,DAT_00015e22);
    write_txrate_power_offset(0);
    set_tx_gain_table_bt();
  }
  set_rx_gain_table(0x985);
  bb_wdg_cfg();
  mac_enable_bb();
  agc_reg_init();
  bb_reg_init();
  noise_init();
  phy_set_bbfreq_init(1);
  tx_pwctrl_bg_init();
  noise_floor_auto_set();
  uVar1 = fpga_mem_rd(0x6001c11c);
  fpga_mem_wr(0x6001c11c,uVar1 & 0xffffefff);
  uVar1 = fpga_mem_rd(0x6001c030);
  fpga_mem_wr(0x6001c030,uVar1 & 0xfffc07ff | 0x1a000);
  uVar1 = fpga_mem_rd(0x6001c11c);
  fpga_mem_wr(0x6001c11c,uVar1 & 0xfffff80f);
  uVar1 = fpga_mem_rd(0x6001c11c);
  fpga_mem_wr(0x6001c11c,uVar1 & 0xfffffff0);
  uVar1 = fpga_mem_rd(0x6001c120);
  fpga_mem_wr(0x6001c120,uVar1 & 0xffff00ff | 0x1e00);
  uVar1 = fpga_mem_rd(0x6001c120);
  fpga_mem_wr(0x6001c120,uVar1 & 0xffffff | 0x1e000000);
  return;
}

