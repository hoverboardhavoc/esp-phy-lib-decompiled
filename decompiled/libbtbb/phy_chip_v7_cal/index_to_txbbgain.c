/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> index_to_txbbgain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined2 index_to_txbbgain(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1U & 0xff;
  if (uVar1 < 4) {
    return *(undefined2 *)((int)&CSWTCH_277 + uVar1 * 2);
  }
  return 0x100;
}

