/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> phy_test.o -> txdc_delta_max
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txdc_delta_max(short *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  iVar2 = (**(code **)(_g_phyFuns + 0x100))((int)*param_1,*(code **)(_g_phyFuns + 0x100));
  iVar3 = (**(code **)(_g_phyFuns + 0x100))((int)param_1[1],*(code **)(_g_phyFuns + 0x100));
  if (iVar3 < iVar2) {
    iVar2 = (**(code **)(_g_phyFuns + 0x100))((int)*param_2);
    sVar1 = *param_1;
    pcVar4 = *(code **)(_g_phyFuns + 0x100);
  }
  else {
    iVar2 = (**(code **)(_g_phyFuns + 0x100))((int)param_2[1]);
    sVar1 = param_1[1];
    pcVar4 = *(code **)(_g_phyFuns + 0x100);
  }
  iVar3 = (*pcVar4)((int)sVar1,pcVar4);
  if (iVar2 < iVar3) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
  }
  return;
}

