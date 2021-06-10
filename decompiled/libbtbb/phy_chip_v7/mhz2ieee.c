/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> mhz2ieee
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int mhz2ieee(uint param_1,uint param_2)

{
  char cVar1;
  
  if ((param_2 & 0x80) == 0) {
    if (param_1 == 0x9b4) {
      return 0xe;
    }
    if (0x9b3 < param_1) {
      return -1;
    }
  }
  else {
    if (param_1 == 0x9b4) {
      return 0xe;
    }
    if (0x9b3 < param_1) {
      cVar1 = (char)((int)(param_1 - 0x9d0) / 0x14) + '\x0f';
      goto _L437;
    }
  }
  cVar1 = (char)((int)(param_1 - 0x967) / 5);
_L437:
  return (int)cVar1;
}

