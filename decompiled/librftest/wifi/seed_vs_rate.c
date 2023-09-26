/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> seed_vs_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void seed_vs_rate(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (fcc_mode_sel == '\0') {
    uVar1 = param_1 - 0x17 & 0xff;
    uVar2 = 0x6b;
    if (uVar1 < 0x13) {
      uVar2 = (uint)(byte)(&_LANCHOR2)[uVar1];
    }
  }
  else {
    uVar2 = 0x2a;
    if ((0x15 < param_1) && (uVar2 = 0x25, 0x18 < param_1)) {
      uVar2 = 0x12;
    }
  }
  _DAT_600a7400 = _DAT_600a7400 & 0xffffff80 | 0x80 | uVar2;
  return;
}

