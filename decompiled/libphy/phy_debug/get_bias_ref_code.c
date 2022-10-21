/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_debug.o -> get_bias_ref_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 get_bias_ref_code(void)

{
  undefined4 uVar1;
  
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,2,1,1,1,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,7,3,2,1,*(code **)(_g_phyFuns + 0x1bc));
  uVar1 = (**(code **)(_g_phyFuns + 0x150))(3,*(code **)(_g_phyFuns + 0x150));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,2,1,1,0,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,7,3,2,0,*(code **)(_g_phyFuns + 0x1bc));
  return uVar1;
}

