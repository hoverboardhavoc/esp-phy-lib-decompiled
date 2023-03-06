/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
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
    set_channel_rfpll_freq((&CSWTCH_82)[iVar1],DAT_0001104f,0);
    rfcal_pwrctrl(0x80,acStack_31,1,0,pcVar4,0x90,0xd,0);
    pcVar3 = param_1 + iVar1;
    iVar1 = iVar1 + 1;
    *pcVar3 = *pcVar4;
  } while (iVar1 != 3);
  if ((byte)(*param_1 - 9U) < 0xb) {
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

