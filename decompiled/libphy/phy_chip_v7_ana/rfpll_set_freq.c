/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_ana.o -> rfpll_set_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfpll_set_freq(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0x1a;
  if ((param_2 != 1) && (iVar2 = 0x20, param_2 != 2)) {
    iVar2 = 0x28;
  }
  iVar3 = iVar2 * 3000;
  iVar2 = (param_1 * 1000 + param_3) * 4 + iVar2 * -96000;
  uVar1 = iVar2 / iVar3;
  *param_4 = (char)uVar1;
  iVar2 = (iVar2 - (uVar1 & 0xff) * iVar3) * 0x100;
  uVar1 = iVar2 / iVar3;
  param_4[1] = (char)uVar1;
  param_4[2] = (char)((int)((iVar2 - (uVar1 & 0xff) * iVar3) * 0x100) / iVar3);
  return;
}

