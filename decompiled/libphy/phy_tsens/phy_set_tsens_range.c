/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tsens.o -> phy_set_tsens_range
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 phy_set_tsens_range(short param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (uint)phy_param * 6;
  if ((param_1 < *(short *)(phy_tsens_attribute + iVar2 + 2)) ||
     (*(short *)(phy_tsens_attribute + iVar2 + 4) < param_1)) {
    uVar1 = 5;
    if ((param_1 < 100) &&
       (((uVar1 = 7, param_1 < 0x50 && (uVar1 = 0xf, param_1 < -9)) && (uVar1 = 10, -0x1e < param_1)
        ))) {
      uVar1 = 0xb;
    }
    (**(code **)(_g_phyFuns + 0x1bc))(0x69,0,6,3,0,uVar1,*(code **)(_g_phyFuns + 0x1bc));
  }
  else {
    uVar1 = phy_tsens_attribute[iVar2 + 1];
  }
  return uVar1;
}

