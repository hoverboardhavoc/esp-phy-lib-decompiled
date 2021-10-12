/*
 * Last changed at upstream commit b7095b90157d98f116ba43c35b12d51192dc91c8
 * https://github.com/espressif/esp-phy-lib/commit/b7095b90157d98f116ba43c35b12d51192dc91c8
 * Upstream date: 2021-10-12 21:50:40 +0800
 * Upstream subject: Update libphy and libbb
 * Source: libphy -> phy_chip_v7.o -> bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_init(void)

{
  set_pbus_mem();
  if (-1 < (int)(DAT_00012f54 << 0xc)) {
    txdc_cal_init(&DAT_00012f58);
    DAT_00012f54 = DAT_00012f54 | 0x80000;
  }
  tx_cap_init();
  bt_tx_pwctrl_init();
  txiq_cal_init();
  bt_set_tx_gain(0);
  bt_txpwr_freq(&DAT_00012f7a);
  write_txrate_power_offset();
  set_rx_gain_table(0x985,0);
  phy_reg_init();
  set_chan_reg(1);
  enable_agc();
  DAT_00012f70 = 0xfe80;
  DAT_00012fd6 = 0xfe80;
  chip_v7_set_chan(0xb,0);
  return;
}

