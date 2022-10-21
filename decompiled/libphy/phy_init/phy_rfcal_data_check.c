/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> phy_rfcal_data_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

bool phy_rfcal_data_check(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  phy_set_mac_data(param_2,param_3);
  uVar1 = 0;
  iVar2 = param_2;
  do {
    iVar4 = iVar2 + 4;
    iVar2 = (**(code **)(g_phyFuns + 0xa4))(iVar2,*(code **)(g_phyFuns + 0xa4));
    uVar1 = uVar1 + iVar2;
    iVar2 = iVar4;
  } while (iVar4 != param_2 + 0x224);
  uVar1 = ~uVar1;
  uVar3 = (**(code **)(g_phyFuns + 0xa4))(iVar4,*(code **)(g_phyFuns + 0xa4));
  if (param_1 == 0) {
    *(char *)(param_2 + 0x224) = (char)uVar1;
    *(char *)(param_2 + 0x225) = (char)(uVar1 >> 8);
    *(char *)(param_2 + 0x226) = (char)(uVar1 >> 0x10);
    *(char *)(param_2 + 0x227) = (char)(uVar1 >> 0x18);
  }
  return param_1 != 0 && uVar1 != uVar3;
}

