/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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

