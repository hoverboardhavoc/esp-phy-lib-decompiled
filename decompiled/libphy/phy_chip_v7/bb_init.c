/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_init(void)

{
  if (-1 < (int)(DAT_00014050 << 0xf)) {
    set_pbus_mem();
    DAT_00014050 = DAT_00014050 | 0x10000;
  }
  if (-1 < (int)(DAT_00014050 << 0xc)) {
    txdc_cal_init(&DAT_00014054,0xf,0x20,0);
    DAT_00014050 = DAT_00014050 | 0x80000;
  }
  pwdet_code_cal();
  tx_cap_init();
  txpwr_offset(0);
  tx_pwctrl_init(0);
  txiq_cal_init();
  (**(code **)(g_phyFuns + 0x124))(*(code **)(g_phyFuns + 0x124));
  bt_tx_gain_init();
  set_rx_gain_table(0x985,0);
  rom_phy_reg_init();
  (**(code **)(g_phyFuns + 4))(*(code **)(g_phyFuns + 4));
  phy_analog_delay_cal();
  DAT_00014094 = 0xfe80;
  DAT_00014128 = 0xfe80;
  chip_v7_set_chan(0xb,0);
  return;
}

