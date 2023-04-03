/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_hw_freq.o -> phy_dis_hw_set_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_dis_hw_set_freq(void)

{
  _DAT_600a00c0 = _DAT_600a00c0 | 0x4000000;
  wait_freq_set_busy();
  ets_delay_us(2);
  _DAT_00011078 = read_rf_freq_mem_new(0x27,2);
  _DAT_0001107a = read_rf_freq_mem_new(0x1a7,2);
  return;
}

