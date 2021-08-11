/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> pwdet_sar2_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pwdet_sar2_init(void)

{
  _DAT_60008834 = _DAT_60008834 & 0x7fffffff;
  _DAT_60008830 = _DAT_60008830 & 0x8007ffff | 0x80000000;
  _DAT_6000e060 = _DAT_6000e060 & 0xffffffc7;
  return;
}

