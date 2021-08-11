/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> tx_pwctrl_init_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void tx_pwctrl_init_cal(int param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  char acStack_41 [13];
  
  acStack_41[0] = '8' - power_cal_offset;
  if (param_1 == 0) {
    cVar5 = '(';
    uVar2 = 0xe0;
    cVar4 = '\b';
    cVar7 = '\x10';
    cVar6 = '\x04';
  }
  else {
    set_txcap_reg(&phy_param,6);
    cVar5 = '\x06';
    uVar2 = 0x20;
    cVar4 = '\x10';
    cVar7 = ' ';
    cVar6 = '\b';
  }
  iVar8 = 0;
  do {
    cVar1 = (&CSWTCH_195)[iVar8];
    set_channel_rfpll_freq((int)cVar1,DAT_000130b3,0);
    if (param_1 == 0) {
      set_txcap_reg(&phy_param,cVar1);
    }
    pcVar9 = (char *)(param_4 + iVar8);
    rfcal_pwrctrl(uVar2,acStack_41,1,cVar5,pcVar9,0xf4,(int)DAT_00013098,0);
    pcVar3 = param_2 + iVar8;
    iVar8 = iVar8 + 1;
    cVar1 = *pcVar9;
    *pcVar3 = cVar1;
    DAT_00013098 = cVar1 + cVar5;
  } while (iVar8 != 3);
  cVar5 = *param_2;
  if ((cVar5 < cVar6) || (cVar7 < cVar5)) {
    *param_3 = (acStack_41[0] + cVar5) - cVar4;
    cVar4 = cVar4 - cVar5;
    *param_2 = *param_2 + cVar4;
    param_2[1] = param_2[1] + cVar4;
    param_2[2] = cVar4 + param_2[2];
  }
  else {
    *param_3 = acStack_41[0];
  }
  return;
}

