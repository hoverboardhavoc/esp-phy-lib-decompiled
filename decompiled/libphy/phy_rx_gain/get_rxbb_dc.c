/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
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
  if (3 < param_2) {
    uVar1 = 3;
  }
  puVar2 = (ushort *)(uVar1 * 8 + param_1);
  return ((((int)(((uint)puVar2[3] - (uint)puVar2[1]) * 0x10000) >> 0x10) * param_3 + 2) / 4 +
         (uint)puVar2[1]) * 0x10000 |
         (((int)(((uint)puVar2[2] - (uint)*puVar2) * 0x10000) >> 0x10) * param_3 + 2) / 4 +
         (uint)*puVar2 & 0xffff;
}

