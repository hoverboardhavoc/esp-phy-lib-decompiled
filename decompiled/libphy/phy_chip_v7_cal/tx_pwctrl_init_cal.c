/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> tx_pwctrl_init_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pwctrl_init_cal(int param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  char acStack_41 [13];
  
  acStack_41[0] = '8' - power_cal_offset;
  if (param_1 == 0) {
    uVar6 = 0x80;
    cVar3 = '\b';
    cVar8 = '\x10';
    cVar2 = '\x04';
    uVar7 = 0x28;
  }
  else {
    uVar6 = 0x20;
    cVar3 = '\x10';
    cVar8 = ' ';
    cVar2 = '\b';
    uVar7 = 6;
  }
  iVar5 = 0;
  do {
    cVar1 = (&_LANCHOR3)[iVar5];
    set_channel_rfpll_freq((int)cVar1,DAT_000130fb,0);
    (**(code **)(_g_phyFuns + 0x114))(&phy_param,cVar1,*(code **)(_g_phyFuns + 0x114));
    rfcal_pwrctrl(uVar6,acStack_41,1,uVar7,(char *)(param_4 + iVar5),0xfc,(int)DAT_000130e0,0);
    pcVar4 = param_2 + iVar5;
    cVar1 = *(char *)(param_4 + iVar5);
    iVar5 = iVar5 + 1;
    *pcVar4 = cVar1;
    DAT_000130e0 = cVar1 + '(';
  } while (iVar5 != 3);
  cVar1 = *param_2;
  if ((cVar1 < cVar2) || (cVar8 < cVar1)) {
    *param_3 = (acStack_41[0] + cVar1) - cVar3;
    cVar3 = cVar3 - cVar1;
    *param_2 = *param_2 + cVar3;
    param_2[1] = param_2[1] + cVar3;
    param_2[2] = cVar3 + param_2[2];
  }
  else {
    *param_3 = acStack_41[0];
  }
  return;
}

