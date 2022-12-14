/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
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
  write_chan_freq(DAT_00010af8);
  tx_pwctrl_bg_init();
  set_pbus_reg();
  phy_reg_init();
  mac_enable_bb(1);
  set_chan_reg(1);
  tsens_power_up();
  enable_agc();
  phy_en_hw_set_freq();
  phy_bbpll_cal(0);
  DAT_000109f3 = 0;
                    /* WARNING: Could not recover jumptable at 0x000105c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)g_phyFuns[1])(uVar1);
  return;
}

