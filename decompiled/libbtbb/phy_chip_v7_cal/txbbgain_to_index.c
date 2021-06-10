/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> txbbgain_to_index
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 txbbgain_to_index(uint param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0x30) {
    uVar1 = 4;
  }
  else if (param_1 < 0x31) {
    uVar1 = param_1 == 0x20;
  }
  else {
    uVar1 = 2;
    if ((param_1 != 0xa0) && (uVar1 = 3, param_1 != 0x120)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

