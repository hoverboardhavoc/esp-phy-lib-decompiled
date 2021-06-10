/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> phy_get_rx_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int phy_get_rx_freq(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 < 8) {
    return (int)(short)param_2 / 0x30;
  }
  uVar2 = (uint)(short)(param_2 >> 10);
  uVar1 = uVar2 & 0x3ff;
  if ((uVar2 & 0x200) != 0) {
    uVar1 = uVar1 - 0x400;
  }
  return (int)(short)((int)(uVar1 << 4) / 0xd);
}

