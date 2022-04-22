/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_init(void)

{
  if (-1 < (int)(DAT_0001459c << 0xf)) {
    set_pbus_mem();
    DAT_0001459c = DAT_0001459c | 0x10000;
  }
  if (-1 < (int)(DAT_0001459c << 0xc)) {
    txdc_cal_init(&DAT_000145a0,0xf,0x20,0);
    DAT_0001459c = DAT_0001459c | 0x80000;
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
  DAT_000145e0 = 0xfe80;
  DAT_00014674 = 0xfe80;
  chip_v7_set_chan(0xb,0);
  return;
}

