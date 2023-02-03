/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_cal.o -> rxdc_est_min
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

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
    dc_iq_est(1,param_1,&iStack_3c);
    if (iStack_34 < iVar5) {
      iVar2 = abs_temp(*param_3);
      iVar3 = abs_temp(iStack_3c);
      if (iVar3 < iVar2) {
        *param_3 = iStack_3c;
      }
      iVar2 = abs_temp(param_3[1]);
      iVar3 = abs_temp(iStack_38);
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

