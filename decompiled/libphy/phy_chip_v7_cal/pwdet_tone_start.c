/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> pwdet_tone_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pwdet_tone_start(void)

{
  _DAT_60006040 = _DAT_60006040 | 0x40000;
  ets_delay_us(1);
  _DAT_6000e050 = _DAT_6000e050 & 0xfffffffd | 2;
  ets_delay_us(2);
  do {
  } while ((_DAT_6000e050 >> 0x18 & 7) != 7);
  _DAT_60006040 = _DAT_60006040 & 0xfffbffff;
  return;
}

