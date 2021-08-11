/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> pll_correct_dcap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint pll_correct_dcap(int param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = i2c_readReg(0x62,1,0xc);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      return 0;
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 1;
  }
  uVar2 = _DAT_6000e0c0 + (uVar1 & 0xff);
  _DAT_6000e148 =
       ((uVar1 & 0xff) + (_DAT_6000e0c0 >> 0x18)) * 0x1000000 |
       _DAT_6000e0c0 & 0xffff00 | uVar2 & 0xff;
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffd00 | param_1 * 3 & 0xffU;
  *param_2 = (char)uVar2;
  return uVar1;
}

