/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_init.o -> phy_wakeup_init_
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_wakeup_init_(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)*g_phyFuns)((code *)*g_phyFuns);
  phy_get_xtal_freq();
  open_i2c_xpd_new();
  i2c_clk_sel(8);
  fe_txrx_reset();
  i2c_master_reset();
  i2c_bbpll_set(0);
  i2cmst_reg_init();
  freq_reg_init(2,4);
  fe_reg_init();
  pwdet_reg_init_new();
  reg_set_new();
  phy_i2c_init1();
  freq_i2c_data_write_new();
  filter_dcap_set();
  write_chan_freq(DAT_00010b88);
  tx_pwctrl_bg_init();
  set_pbus_reg();
  phy_reg_init();
  mac_enable_bb(1);
  set_chan_reg(1);
  set_rx_comp_new();
  phy_set_tsens_power(1);
  enable_agc();
  wait_freq_set_busy();
  phy_en_hw_set_freq();
  phy_bbpll_cal(0);
  DAT_00010a83 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)g_phyFuns[1])(uVar1);
  return;
}

