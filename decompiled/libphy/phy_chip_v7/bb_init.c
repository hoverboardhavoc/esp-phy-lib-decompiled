/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7.o -> bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_init(void)

{
  set_pbus_mem();
  if (-1 < (int)(DAT_00012f18 << 0xc)) {
    txdc_cal_init(&DAT_00012f1c);
    DAT_00012f18 = DAT_00012f18 | 0x80000;
  }
  tx_cap_init();
  bt_tx_pwctrl_init();
  txiq_cal_init();
  bt_set_tx_gain(0);
  bt_txpwr_freq(&DAT_00012f3e);
  write_txrate_power_offset();
  set_rx_gain_table(0x985,0);
  phy_reg_init();
  set_chan_reg(1);
  enable_agc();
  DAT_00012f34 = 0xfe80;
  DAT_00012f9a = 0xfe80;
  chip_v7_set_chan(0xb,0);
  return;
}

