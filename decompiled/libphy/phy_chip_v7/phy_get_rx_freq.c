/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> phy_get_rx_freq
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

