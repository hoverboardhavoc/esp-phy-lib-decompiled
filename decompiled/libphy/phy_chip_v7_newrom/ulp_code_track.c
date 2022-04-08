/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_newrom.o -> ulp_code_track
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
  
  iVar1 = ((uint)_DAT_00012098 - (uint)_DAT_00012216) * 0x10000;
  iVar2 = iVar1 >> 0x10;
  iVar1 = iVar1 >> 0x13;
  if (iVar2 < 0) {
    iVar1 = iVar2 / 6;
  }
  iVar1 = (**(code **)(_g_phyFuns + 0x28))(iVar1,0xf,0xfffffff1,*(code **)(_g_phyFuns + 0x28));
  if ((ushort)((uint)DAT_000120a3 + iVar1) != (ushort)DAT_000120a4) {
    DAT_000120a4 = (byte)(((uint)DAT_000120a3 + iVar1) * 0x10000 >> 0x10);
    ulp_ext_code_set(0);
  }
  if (param_1 != 0) {
    phy_printf("ulp:set=%d,init=%d\n",DAT_000120a4,DAT_000120a3);
    return;
  }
  return;
}

