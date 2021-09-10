/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_ana.o -> rf_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_init(void)

{
  undefined4 auStack_14 [4];
  
  open_i2c_xpd();
  bias_reg_set();
  i2cmst_reg_init();
  fe_reg_init();
  rc_cal();
  phy_i2c_init();
  if (chip_lp_en == '\x01') {
    lp_tx_table_set();
  }
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

