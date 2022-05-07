/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
 * Source: libphy -> phy_init.o -> bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_init(void)

{
  if (-1 < (int)(DAT_000106b8 << 0xf)) {
    set_pbus_mem_new();
    DAT_000106b8 = DAT_000106b8 | 0x10000;
  }
  if (-1 < (int)(DAT_000106b8 << 0xc)) {
    txdc_cal_init(&DAT_000106bc,0xf,0x20,0);
    DAT_000106b8 = DAT_000106b8 | 0x80000;
  }
  rfagc_disable_new();
  pwdet_code_cal();
  tx_cap_init();
  freq_i2c_data_write();
  tx_pwctrl_init(0);
  txiq_cal_init();
  (**(code **)(g_phyFuns + 0x134))(*(code **)(g_phyFuns + 0x134));
  bt_tx_gain_init();
  set_rx_gain_table_new(0x985,0);
  phy_reg_init();
  (**(code **)(g_phyFuns + 0xec))(*(code **)(g_phyFuns + 0xec));
  DAT_000106fc = 0xfe80;
  DAT_00010790 = 0xfe80;
  chip_v7_set_chan(0xb,0);
  return;
}

