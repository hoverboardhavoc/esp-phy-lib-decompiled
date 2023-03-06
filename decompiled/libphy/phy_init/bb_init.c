/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_init.o -> bb_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bb_init(void)

{
  _DAT_6000e000 = _DAT_6000e000 | 0x20000000;
  set_pbus_mem();
  pwdet_code_cal();
  bt_tx_pwctrl_init();
  bt_set_tx_gain(0);
  set_rx_gain_table(0x985,0);
  phy_reg_init();
  enable_agc();
  chip_v7_set_chan(0xb,0);
  _DAT_6000e000 = _DAT_6000e000 & 0xdfffffff;
  return;
}

