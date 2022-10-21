/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_pwdet.o -> get_power_db
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int get_power_db(int param_1)

{
  int iVar1;
  int iVar2;
  short sStack_14;
  short sStack_12;
  
  get_fm_sar_dout(&sStack_14,&sStack_12);
  iVar1 = (**(code **)(_g_phyFuns + 0x118))((int)sStack_14,3,*(code **)(_g_phyFuns + 0x118));
  iVar2 = (**(code **)(_g_phyFuns + 0x118))((int)sStack_12,3,*(code **)(_g_phyFuns + 0x118));
  return ((param_1 + iVar1) - iVar2) * 0x10000 >> 0x10;
}

