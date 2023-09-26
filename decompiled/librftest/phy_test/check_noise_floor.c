/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> check_noise_floor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x000103a2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int check_noise_floor(void)

{
  short sVar1;
  uint uVar2;
  
  _DAT_600a7018 = _DAT_600a7018 & 0xfd7fffff | 0x800000;
  do {
  } while (-1 < (int)(_DAT_600a7018 << 7));
  uVar2 = _DAT_600a7050 | 0xfffffc00;
  if ((int)uVar2 < -0x188) {
    uVar2 = 0xfffffe78;
  }
  sVar1 = (short)uVar2;
  if (-0x160 < sVar1) {
    sVar1 = -0x160;
  }
  return (int)sVar1;
}

