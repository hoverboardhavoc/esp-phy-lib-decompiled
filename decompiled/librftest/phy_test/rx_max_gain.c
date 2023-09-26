/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> rx_max_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint rx_max_gain(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = _DAT_600a702c >> 8;
  }
  else {
    uVar1 = _DAT_600a2850 >> 0xe;
  }
  return uVar1 & 0x7f;
}

