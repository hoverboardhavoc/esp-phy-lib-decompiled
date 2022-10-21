/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_track.o -> ulp_code_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ulp_code_track(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ((uint)_DAT_00011098 - (uint)_DAT_00011216) * 0x10000;
  iVar2 = iVar1 >> 0x10;
  iVar1 = iVar1 >> 0x13;
  if (iVar2 < 0) {
    iVar1 = iVar2 / 6;
  }
  iVar1 = (**(code **)(_g_phyFuns + 0x28))(iVar1,0xf,0xfffffff1,*(code **)(_g_phyFuns + 0x28));
  if ((ushort)((uint)DAT_000110a3 + iVar1) != (ushort)DAT_000110a4) {
    DAT_000110a4 = (byte)(((uint)DAT_000110a3 + iVar1) * 0x10000 >> 0x10);
    ulp_ext_code_set(0);
  }
  if (param_1 != 0) {
    phy_printf("ulp:set=%d,init=%d\n",DAT_000110a4,DAT_000110a3);
    return;
  }
  return;
}

