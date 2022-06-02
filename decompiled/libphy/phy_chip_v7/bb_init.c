/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_init(void)

{
  if (-1 < (int)(DAT_00014544 << 0xf)) {
    set_pbus_mem();
    DAT_00014544 = DAT_00014544 | 0x10000;
  }
  if (-1 < (int)(DAT_00014544 << 0xc)) {
    txdc_cal_init(&DAT_00014548,0xf,0x20,0);
    DAT_00014544 = DAT_00014544 | 0x80000;
  }
  pwdet_code_cal();
  tx_cap_init();
  freq_i2c_data_write();
  txpwr_offset(0);
  tx_pwctrl_init(0);
  txiq_cal_init();
  (**(code **)(g_phyFuns + 0x124))(*(code **)(g_phyFuns + 0x124));
  bt_tx_gain_init();
  set_rx_gain_table(0x985,0);
  rom_phy_reg_init();
  (**(code **)(g_phyFuns + 4))(*(code **)(g_phyFuns + 4));
  DAT_00014588 = 0xfe80;
  DAT_0001461c = 0xfe80;
  chip_v7_set_chan(0xb,0);
  return;
}

