/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_rx_gain.o -> get_rxbb_dc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint get_rxbb_dc(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  ushort *puVar2;
  
  uVar1 = param_2 & 0xff;
  if (2 < param_2) {
    uVar1 = 2;
  }
  puVar2 = (ushort *)(uVar1 * 8 + param_1);
  return ((((int)(((uint)puVar2[3] - (uint)puVar2[1]) * 0x10000) >> 0x10) * param_3 + 2) / 4 +
         (uint)puVar2[1]) * 0x10000 |
         (((int)(((uint)puVar2[2] - (uint)*puVar2) * 0x10000) >> 0x10) * param_3 + 2) / 4 +
         (uint)*puVar2 & 0xffff;
}

