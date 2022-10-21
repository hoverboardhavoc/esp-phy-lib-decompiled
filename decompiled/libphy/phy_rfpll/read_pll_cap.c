/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_rfpll.o -> read_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short read_pll_cap(void)

{
  short sVar1;
  short sVar2;
  
  sVar1 = (**(code **)(_g_phyFuns + 0x1ac))(0x62,1,5,*(code **)(_g_phyFuns + 0x1ac));
  sVar2 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,7,2,2,*(code **)(_g_phyFuns + 0x1b8));
  return sVar2 * 0x100 + sVar1;
}

