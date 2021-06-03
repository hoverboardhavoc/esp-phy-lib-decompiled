/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> rxdc_est_min
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rxdc_est_min(undefined4 param_1,int param_2,int *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  *param_3 = 1000;
  param_3[1] = 1000;
  if (param_2 == 0) {
    cVar5 = '\x03';
    iVar6 = 100;
  }
  else {
    cVar5 = '2';
    iVar6 = 0x35;
  }
  bVar4 = 0;
  cVar1 = '\0';
  do {
    (**(code **)(_g_phyFuns + 0x10c))(1,param_1,&iStack_3c,*(code **)(_g_phyFuns + 0x10c));
    if (iStack_34 < iVar6) {
      iVar2 = (**(code **)(_g_phyFuns + 0x100))(*param_3,*(code **)(_g_phyFuns + 0x100));
      iVar3 = (**(code **)(_g_phyFuns + 0x100))(iStack_3c,*(code **)(_g_phyFuns + 0x100));
      if (iVar3 < iVar2) {
        *param_3 = iStack_3c;
      }
      iVar2 = (**(code **)(_g_phyFuns + 0x100))(param_3[1],*(code **)(_g_phyFuns + 0x100));
      iVar3 = (**(code **)(_g_phyFuns + 0x100))(iStack_38,*(code **)(_g_phyFuns + 0x100));
      if (iVar3 < iVar2) {
        param_3[1] = iStack_38;
      }
      bVar4 = bVar4 + 1;
      if ((iStack_34 < 0x24) || (3 < bVar4)) break;
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar5 != cVar1);
  *param_4 = cVar1;
  if (*param_3 == 1000) {
    *param_3 = 3;
  }
  if (param_3[1] == 1000) {
    param_3[1] = 3;
  }
  return;
}

