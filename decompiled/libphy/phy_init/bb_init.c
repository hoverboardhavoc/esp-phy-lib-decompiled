/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_init.o -> bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_init(void)

{
  if (-1 < (int)(DAT_000108e4 << 0xf)) {
    set_pbus_mem_new();
    DAT_000108e4 = DAT_000108e4 | 0x10000;
  }
  if (-1 < (int)(DAT_000108e4 << 0xc)) {
    txdc_cal_init(&DAT_000108e8,0xf,0x20,0);
    DAT_000108e4 = DAT_000108e4 | 0x80000;
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
  DAT_00010928 = 0xfe80;
  DAT_000109bc = 0xfe80;
  chip_v7_set_chan(0xb,0);
  return;
}

