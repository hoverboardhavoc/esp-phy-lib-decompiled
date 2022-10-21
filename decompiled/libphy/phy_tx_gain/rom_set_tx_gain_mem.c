/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_gain.o -> rom_set_tx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_set_tx_gain_mem(int param_1,int param_2,int param_3,ushort *param_4,int param_5,
                        ushort *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort local_38 [4];
  
  uVar5 = _DAT_60006000 >> 0x12;
  for (iVar7 = 0; param_2 != iVar7; iVar7 = iVar7 + 1) {
    if (param_1 == 0) {
      uVar1 = (uint)param_4[iVar7];
      uVar2 = (**(code **)(_g_phyFuns + 0xec))(uVar1,*(code **)(_g_phyFuns + 0xec));
      uVar2 = uVar2 & 0xffff;
    }
    else {
      uVar1 = (uint)*param_4;
      uVar2 = (**(code **)(_g_phyFuns + 0x38))(uVar1,*(code **)(_g_phyFuns + 0x38));
    }
    iVar6 = 0;
    do {
      puVar3 = (undefined2 *)((int)local_38 + iVar6);
      iVar4 = uVar2 * 8 + iVar6;
      iVar6 = iVar6 + 2;
      *puVar3 = *(undefined2 *)(iVar4 + param_5);
    } while (iVar6 != 8);
    (**(code **)(_g_phyFuns + 0x2c))
              ((uint)*param_6 << 0x15 |
               (uint)local_38[0] << 0xc | (uint)local_38[1] << 3 | (uint)(local_38[2] >> 6),
               (uint)local_38[3] << 0x11 | (uint)local_38[2] << 0x1a |
               (uint)*(byte *)(param_3 + iVar7) << 10 | uVar1 >> 6 & 0xff | (uVar1 & 0x3f) << 3,
               ((uint)(param_1 != 0) * 0x10 + uVar5 & 0xff) + iVar7 & 0xff,
               *(code **)(_g_phyFuns + 0x2c));
  }
  return;
}

