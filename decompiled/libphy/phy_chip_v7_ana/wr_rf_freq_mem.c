/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_ana.o -> wr_rf_freq_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wr_rf_freq_mem(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = (param_1 * 3 & 0xffU) + iVar2;
    _DAT_6000e148 = *(undefined4 *)(iVar2 * 4 + param_2);
    iVar2 = iVar2 + 1;
    _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffd00 | uVar1 & 0xff;
  } while (iVar2 != 3);
  return;
}

