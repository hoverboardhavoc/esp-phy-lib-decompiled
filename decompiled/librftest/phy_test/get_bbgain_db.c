/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> get_bbgain_db
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint get_bbgain_db(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (((int)(param_1 & 0x3f) >> (uVar2 & 0x1f) & 1U) != 0) {
      uVar1 = uVar1 + 6 & 0xff;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 6);
  return uVar1 + (param_1 >> 6 & 0xff) & 0xff;
}

