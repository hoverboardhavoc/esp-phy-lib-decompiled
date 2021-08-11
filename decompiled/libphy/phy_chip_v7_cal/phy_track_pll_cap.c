/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> phy_track_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int phy_track_pll_cap(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  
  if (((0x1e < ((param_1 - param_2) + 0xfU & 0xffff)) &&
      (iVar1 = pll_vol_cal(_DAT_6000e168 >> 0x18 & 0x7f,param_3,0,param_5), param_4 != 0)) &&
     (iVar1 != 0)) {
    phy_dis_hw_set_freq();
    uVar2 = 0;
    do {
      _DAT_6000e0c4 = _DAT_6000e0c4 & 0xffffff00 | uVar2;
      uVar2 = uVar2 + 3;
      _DAT_6000e148 = _DAT_6000e0c0 + iVar1 & 0xff | _DAT_6000e0c0 & 0xffffff00;
      _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffdff;
    } while (uVar2 != 0xff);
    phy_en_hw_set_freq();
    param_2 = param_1;
  }
  return param_2;
}

