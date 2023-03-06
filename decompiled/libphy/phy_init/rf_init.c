/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_init.o -> rf_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_init(int param_1)

{
  int iVar1;
  undefined4 auStack_14 [3];
  
  bias_reg_set();
  open_i2c_xpd(1);
  i2c_clk_sel(2);
  i2cmst_reg_init();
  pwdet_reg_init();
  fe_reg_init();
  if (param_1 != 0) {
    tsens_read_init(1,phy_param);
  }
  tx_pwctrl_bg_init();
  rc_cal();
  phy_i2c_init();
  pbus_debugmode();
  auStack_14[0] = 0x800080;
  pbus_set_dco(auStack_14);
  pbus_xpd_tx_off();
  pbus_xpd_rx_off();
  pbus_workmode();
  iVar1 = i2c_readReg_Mask(0x69,0,4,3,0);
  if (iVar1 == 0) {
    i2c_sar2_init_code(0x578);
  }
  if (param_1 != 0) {
    set_chan_freq_hw_init(2,4);
  }
  return;
}

