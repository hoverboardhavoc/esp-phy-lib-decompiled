/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_tx_cal.o -> tx_pwctrl_init_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void tx_pwctrl_init_cal(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char acStack_31 [13];
  
  acStack_31[0] = ' ';
  iVar1 = 0;
  do {
    pcVar4 = (char *)(param_3 + iVar1);
    set_channel_rfpll_freq((&CSWTCH_82)[iVar1],DAT_00011031,0);
    rfcal_pwrctrl(0x80,acStack_31,1,0,pcVar4,0x90,0xd,0);
    pcVar3 = param_1 + iVar1;
    iVar1 = iVar1 + 1;
    *pcVar3 = *pcVar4;
  } while (iVar1 != 3);
  if ((byte)(*param_1 - 9U) < 0xf) {
    *param_2 = acStack_31[0];
  }
  else {
    cVar2 = *param_1 + -0xd;
    *param_2 = acStack_31[0] + cVar2;
    *param_1 = *param_1 - cVar2;
    param_1[1] = param_1[1] - cVar2;
    param_1[2] = param_1[2] - cVar2;
  }
  return;
}

