/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
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

