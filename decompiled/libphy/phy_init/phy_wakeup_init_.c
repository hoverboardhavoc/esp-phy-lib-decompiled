/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
 * Source: libphy -> phy_init.o -> phy_wakeup_init_
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_wakeup_init_(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (*(code *)*g_phyFuns)((code *)*g_phyFuns);
  uVar1 = _DAT_600a9814;
  _DAT_600a9814 = _DAT_600a9814 | 0x400;
  phy_get_xtal_freq();
  open_i2c_xpd_new(0);
  force_txrx_off(1);
  pbus_clear_reg();
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
  write_chan_freq(DAT_00010b64);
  set_pbus_reg();
  phy_reg_init();
  set_chan_reg(1);
  set_rx_comp_new();
  phy_set_tsens_power(1);
  enable_agc();
  wait_freq_set_busy();
  phy_en_hw_set_freq();
  phy_bbpll_cal(0);
  force_txrx_off(0);
  DAT_00010a5f = 0;
  _DAT_600a9814 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)g_phyFuns[1])(uVar2);
  return;
}

