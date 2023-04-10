/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
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
  phy_i2c_init2();
  freq_i2c_data_write_new();
  filter_dcap_set();
  write_chan_freq(DAT_00010b80);
  set_pbus_reg();
  phy_reg_init();
  set_chan_reg(1);
  set_rx_comp_new();
  phy_set_tsens_power(1);
  enable_agc();
  wait_freq_set_busy();
  phy_en_hw_set_freq();
  phy_bbpll_cal(0);
  DAT_00010a7b = 0;
                    /* WARNING: Could not recover jumptable at 0x00010216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)g_phyFuns[1])(uVar1);
  return;
}

