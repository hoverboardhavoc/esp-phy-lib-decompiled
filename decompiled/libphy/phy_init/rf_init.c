/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
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
    tsens_read_init(1,(undefined1)phy_param);
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

