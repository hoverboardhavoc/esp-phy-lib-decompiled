/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_hw_freq.o -> pll_cap_mem_update
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pll_cap_mem_update(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    _DAT_6000e0c4 = _DAT_6000e0c4 & 0xffffff00 | uVar1;
    uVar1 = uVar1 + 3;
    uVar2 = (_DAT_6000e0c0 >> 4 & 0x100 | _DAT_6000e0c0 & 0xff) + param_1;
    _DAT_6000e148 = ((int)(short)uVar2 >> 8) << 0xc | _DAT_6000e0c0 & 0xef00 | uVar2 & 0xff;
    _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffdff;
  } while (uVar1 != 0xff);
  return;
}

