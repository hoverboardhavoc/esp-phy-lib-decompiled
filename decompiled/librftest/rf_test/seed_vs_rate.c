/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> rf_test.o -> seed_vs_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void seed_vs_rate(uint param_1)

{
  uint uVar1;
  
  if (fcc_mode_sel == '\0') {
    uVar1 = 0x3f;
    if (param_1 < 0x16) {
      uVar1 = 0x25;
    }
  }
  else {
    uVar1 = 0x3f;
    if (param_1 < 0x16) {
      uVar1 = 0x2a;
    }
  }
  _DAT_6004a400 = _DAT_6004a400 & 0xffffff80 | 0x80 | uVar1;
  return;
}

