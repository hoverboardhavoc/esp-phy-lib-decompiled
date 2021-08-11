/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> rf_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_init(void)

{
  undefined4 auStack_14 [4];
  
  bias_reg_set();
  open_i2c_xpd();
  i2cmst_reg_init();
  fe_reg_init();
  rc_cal();
  phy_i2c_init();
  tsens_read_init(phy_param);
  pbus_force_mode_part_0();
  auStack_14[0] = 0x800080;
  pbus_set_dco(auStack_14);
  pbus_xpd_tx_off();
  pbus_xpd_rx_off();
  pbus_workmode();
  set_chan_freq_hw_init(0,2);
  return;
}

