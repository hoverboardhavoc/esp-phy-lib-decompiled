/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_track.o -> pocket_sar_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int pocket_sar_power(uint param_1)

{
  int iVar1;
  int iVar2;
  short sStack_24;
  short sStack_22;
  undefined1 auStack_20 [2];
  undefined2 uStack_1e;
  
  (**(code **)(_g_phyFuns + 0x148))(auStack_20,*(code **)(_g_phyFuns + 0x148));
  get_sar_sig_ref(uStack_1e,&sStack_24,&sStack_22);
  sStack_24 = sStack_24 + -0x28;
  iVar1 = (**(code **)(_g_phyFuns + 0x118))(3,*(code **)(_g_phyFuns + 0x118));
  iVar2 = (**(code **)(_g_phyFuns + 0x118))((int)sStack_22,3,*(code **)(_g_phyFuns + 0x118));
  return (int)(((iVar1 + (uint)(7 < param_1) * 8 + 0xfc) - iVar2) * 0x10000) >> 0x10;
}

