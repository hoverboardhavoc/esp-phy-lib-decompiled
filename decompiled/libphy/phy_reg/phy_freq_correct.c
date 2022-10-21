/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_reg.o -> phy_freq_correct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_freq_correct(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    _DAT_6001d030 = _DAT_6001d030 & 0xfffffc00;
    _DAT_60006090 = _DAT_60006090 & 0xfffffe00;
    _DAT_60006070 = _DAT_60006070 | 0x40000000;
    _DAT_6001c850 = _DAT_6001c850 & 0xffff8000 | 0x3e00;
    _DAT_6001cc98 = _DAT_6001cc98 & 0xfffffc00;
  }
  else {
    param_2 = param_2 << 1;
    uVar2 = param_2 / 5;
    _DAT_6001d030 = _DAT_6001d030 & 0xfffffc00 | 0xfa;
    _DAT_60006090 = _DAT_60006090 & 0xfffffe00 | 0xfa;
    _DAT_60006070 = _DAT_60006070 & 0xbfffffff;
    _DAT_60006064 = _DAT_60006064 & 0xfff00000 | 1000000;
    _DAT_60006068 = uVar2 + 1000000 | _DAT_60006068 & 0xfff00000;
    iVar1 = 2;
    if ((param_2 < 0x1f9) && (iVar1 = 0x3d, -0x1f9 < param_2)) {
      iVar1 = 0x1f;
    }
    _DAT_6001c850 = _DAT_6001c850 & 0xffff8000 | iVar1 << 9 | uVar2 & 0x1ff;
    _DAT_6001cc98 = uVar2 & 0x3ff | _DAT_6001cc98 & 0xfffffc00;
  }
  return;
}

