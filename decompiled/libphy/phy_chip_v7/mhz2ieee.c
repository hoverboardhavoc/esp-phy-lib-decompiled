/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> mhz2ieee
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int mhz2ieee(uint param_1)

{
  char cVar1;
  
  if (param_1 != 0x9b4) {
    if (param_1 < 0x9b4) {
      cVar1 = (char)((int)(param_1 - 0x967) / 5);
    }
    else {
      cVar1 = (char)((int)(param_1 - 0x9d0) / 0x14) + '\x0f';
    }
    return (int)cVar1;
  }
  return 0xe;
}

