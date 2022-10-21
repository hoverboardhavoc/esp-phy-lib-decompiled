/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_track.o -> txpwr_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txpwr_offset(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (-1 < (int)(_DAT_00011124 << 9)) {
    uVar1 = phy_get_vdd33();
    uVar4 = 0;
    if (uVar1 < 0xce4) {
      iVar2 = (**(code **)(_g_phyFuns + 0x118))(3,*(code **)(_g_phyFuns + 0x118));
      iVar3 = (**(code **)(_g_phyFuns + 0x118))(0xce4,3,*(code **)(_g_phyFuns + 0x118));
      uVar4 = ((iVar2 - iVar3) * 0x2000000 >> 0x18) + 2 >> 2;
    }
    _DAT_00011204 = uVar1 << 0x10 | (uVar4 & 0xff) << 8;
    _DAT_00011124 = _DAT_00011124 | 0x400000;
  }
  return;
}

