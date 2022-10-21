/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_hw_freq.o -> wr_rf_freq_mem
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

