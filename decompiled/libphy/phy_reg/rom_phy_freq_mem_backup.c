/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_reg.o -> rom_phy_freq_mem_backup
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_phy_freq_mem_backup(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1;
  uVar1 = _DAT_6000e0c4 & 0xfffffd00;
  do {
    _DAT_6000e0c4 = uVar1 | uVar2;
    if (param_1 == 0) {
      _DAT_6000e148 = param_2[1];
    }
    else {
      *param_2 = _DAT_6000e0c0;
      param_2[1] = _DAT_6000e0c0;
    }
    uVar2 = uVar2 + 3;
    param_2 = param_2 + 2;
  } while (uVar2 != 0x100);
  return;
}

