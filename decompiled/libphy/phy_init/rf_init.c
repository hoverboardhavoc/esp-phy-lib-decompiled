/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_init.o -> rf_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_init(void)

{
  undefined4 auStack_14 [4];
  
  bias_reg_set();
  open_i2c_xpd(1);
  i2c_clk_sel(8);
  i2cmst_reg_init();
  fe_reg_init();
  rc_cal();
  phy_i2c_init();
  pbus_debugmode();
  auStack_14[0] = 0x800080;
  pbus_set_dco(auStack_14);
  pbus_xpd_tx_off();
  pbus_xpd_rx_off();
  pbus_workmode();
  set_chan_freq_hw_init(2,4);
  return;
}

