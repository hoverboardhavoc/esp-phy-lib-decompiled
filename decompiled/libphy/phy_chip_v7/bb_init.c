/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_init(void)

{
  set_pbus_mem();
  if (-1 < (int)(DAT_00012ea0 << 0xc)) {
    txdc_cal_init(&DAT_00012ea4);
    DAT_00012ea0 = DAT_00012ea0 | 0x80000;
  }
  tx_cap_init();
  bt_tx_pwctrl_init();
  txiq_cal_init();
  bt_set_tx_gain(0);
  bt_txpwr_freq(&DAT_00012ec6);
  write_txrate_power_offset();
  set_rx_gain_table(0x985,0);
  phy_reg_init();
  set_chan_reg(1);
  enable_agc();
  DAT_00012ebc = 0xfe80;
  DAT_00012f22 = 0xfe80;
  chip_v7_set_chan(0xb,0);
  return;
}

