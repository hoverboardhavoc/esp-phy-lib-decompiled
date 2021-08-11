/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> pkdet_vol_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pkdet_vol_start(void)

{
  _DAT_6000e05c = _DAT_6000e05c | 0x880000;
  _DAT_6000e050 = _DAT_6000e050 & 0xfffffffd | 2;
  ets_delay_us(10);
  do {
  } while ((_DAT_6000e050 >> 0x18 & 7) != 7);
  _DAT_6000e05c = _DAT_6000e05c & 0xff77ffff;
  return;
}

