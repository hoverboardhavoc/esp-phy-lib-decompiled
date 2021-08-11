/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> rfpll_set_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfpll_set_freq(int param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (chip_lp_en == '\0') {
    iVar2 = 0x2ee00;
  }
  else {
    iVar2 = 0x1f400;
  }
  iVar3 = (param_1 * 1000 + param_2) * 4 + iVar2 * -0x20;
  uVar1 = iVar3 / iVar2;
  *param_3 = (char)uVar1;
  iVar3 = (iVar3 - (uVar1 & 0xff) * iVar2) * 0x100;
  uVar1 = iVar3 / iVar2;
  param_3[1] = (char)uVar1;
  param_3[2] = (char)((int)((iVar3 - (uVar1 & 0xff) * iVar2) * 0x100) / iVar2);
  return;
}

