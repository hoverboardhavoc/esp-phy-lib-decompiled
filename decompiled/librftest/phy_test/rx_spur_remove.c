/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> rx_spur_remove
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rx_spur_remove(uint param_1,uint param_2,uint param_3)

{
  _DAT_600a7c14 =
       (param_1 / 0x50 & 7) << 7 |
       (param_1 / 0x50 << 0x10) >> 0x13 & 0xfffffc7f | _DAT_600a7c14 & 0xffffe000;
  _DAT_600a71d4 = (param_3 & 0xff) << 10 | (param_2 & 1) << 0x12 | _DAT_600a71d4 & 0xfff803ff;
  return;
}

