/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> set_noise_floor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_noise_floor(int param_1)

{
  short sVar1;
  
  if (param_1 < -0x188) {
    param_1 = -0x188;
  }
  sVar1 = (short)param_1;
  if (-0x160 < sVar1) {
    sVar1 = -0x160;
  }
  _DAT_600a7018 = ((int)sVar1 & 0x3ffU) << 5 | _DAT_600a7018 & 0xffff801f | 0x10;
  return;
}

