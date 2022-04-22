/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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
  int iVar5;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  *param_3 = 1000;
  param_3[1] = 1000;
  iVar5 = 100;
  if (param_2 != 0) {
    iVar5 = 0x35;
  }
  bVar4 = 0;
  cVar1 = '\0';
  do {
    (**(code **)(_g_phyFuns + 0x10c))(1,param_1,&iStack_3c,*(code **)(_g_phyFuns + 0x10c));
    if (iStack_34 < iVar5) {
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
  } while (cVar1 != '\x03');
  *param_4 = cVar1;
  if (*param_3 == 1000) {
    *param_3 = iStack_3c;
  }
  if (param_3[1] == 1000) {
    param_3[1] = iStack_38;
  }
  return;
}

