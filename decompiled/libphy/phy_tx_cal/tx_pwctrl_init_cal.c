/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_tx_cal.o -> tx_pwctrl_init_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pwctrl_init_cal(int param_1,char *param_2,char *param_3,char *param_4)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  undefined2 uVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  char acStack_41 [13];
  
  acStack_41[0] = '\0';
  if (param_1 == 0) {
    cVar6 = '(';
    uVar5 = 0xe0;
    cVar3 = '\b';
    cVar7 = '\x10';
  }
  else {
    set_txcap_reg(&phy_param,6);
    cVar6 = '\x06';
    uVar5 = 0x80;
    cVar3 = '\x14';
    cVar7 = '(';
  }
  iVar8 = 0;
  cVar2 = '(';
  do {
    uVar1 = (&CSWTCH_93)[iVar8];
    set_channel_rfpll_freq(uVar1,DAT_0001104f,0);
    if (param_1 == 0) {
      set_txcap_reg(&phy_param,uVar1);
    }
    if (DAT_00011045 < 2) {
      rfcal_pwrctrl(uVar5,acStack_41,1,cVar6,param_4,0x20,(int)cVar2,0);
    }
    else {
      *param_4 = '0';
    }
    cVar2 = *param_4;
    pcVar4 = param_2 + iVar8;
    iVar8 = iVar8 + 1;
    *pcVar4 = cVar2;
    cVar2 = cVar2 + cVar6;
    param_4 = param_4 + 1;
  } while (iVar8 != 3);
  _txcal_work_mode = 0;
  cVar6 = *param_2;
  if ((cVar6 < '\x04') || (cVar7 < cVar6)) {
    *param_3 = (acStack_41[0] + cVar6) - cVar3;
    cVar3 = cVar3 - cVar6;
    *param_2 = *param_2 + cVar3;
    param_2[1] = param_2[1] + cVar3;
    param_2[2] = cVar3 + param_2[2];
  }
  else {
    *param_3 = acStack_41[0];
  }
  return;
}

