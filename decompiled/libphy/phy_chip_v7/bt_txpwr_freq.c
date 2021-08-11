/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> bt_txpwr_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_txpwr_freq(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    iVar2 = bt_chan_pwr_interp(param_1,uVar1 & 0xff);
    uVar3 = uVar1 * 3;
    uVar1 = uVar1 + 1;
    _DAT_6000e148 =
         ((int)(((uint)*(byte *)(param_1 + 1) - iVar2) * 0x1000000) >> 0x18 & 0xffU) << 0x10 |
         _DAT_6000e0c0 & 0xff00ffff;
    _DAT_6000e0c4 = (_DAT_6000e0c4 & 0xffffff00 | uVar3) & 0xfffffdff;
  } while (uVar1 != 0x55);
  return;
}

