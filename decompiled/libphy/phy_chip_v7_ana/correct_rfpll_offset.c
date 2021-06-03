/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_ana.o -> correct_rfpll_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void correct_rfpll_offset(int param_1,int param_2,short *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    sVar1 = (short)(param_1 * 9 >> 2);
  }
  else {
    sVar1 = (short)(param_1 * 0x1b >> 3);
  }
  if ((int)*param_3 != (int)sVar1) {
    uVar2 = 1;
    do {
      uVar3 = uVar2 + 3 & 0xff;
      _DAT_6000e148 =
           (_DAT_6000e0c0 & 0xffffff) + ((int)sVar1 - (int)*param_3) | _DAT_6000e0c0 & 0xff000000;
      _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffd00 | uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0);
    *param_3 = sVar1;
  }
  return;
}

