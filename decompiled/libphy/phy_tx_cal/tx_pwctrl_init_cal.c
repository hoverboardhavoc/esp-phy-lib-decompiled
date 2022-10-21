/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_cal.o -> tx_pwctrl_init_cal
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
  char *pcVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  char acStack_41 [13];
  
  acStack_41[0] = '8' - power_cal_offset;
  if (param_1 == 0) {
    uVar7 = 0x80;
    cVar2 = '\b';
    cVar5 = '\x10';
    cVar6 = '\x04';
    cVar4 = '(';
  }
  else {
    uVar7 = 0x20;
    cVar2 = '\x10';
    cVar5 = ' ';
    cVar6 = '\b';
    cVar4 = '\x06';
  }
  if ((byte)(DAT_000120aa - 0x10U) < 2) {
    acStack_41[0] = '\x14';
  }
  if (param_1 != 0) {
    (**(code **)(_g_phyFuns + 0x114))(&phy_param,6,*(code **)(_g_phyFuns + 0x114));
  }
  iVar8 = 0;
  do {
    cVar1 = (&CSWTCH_168)[iVar8];
    set_channel_rfpll_freq((int)cVar1,DAT_000120fb,0);
    if (param_1 == 0) {
      (**(code **)(_g_phyFuns + 0x114))(&phy_param,cVar1,*(code **)(_g_phyFuns + 0x114));
    }
    pcVar9 = (char *)(param_4 + iVar8);
    rfcal_pwrctrl(uVar7,acStack_41,1,cVar4,pcVar9,0xf4,(int)DAT_000120e0,0);
    pcVar3 = param_2 + iVar8;
    iVar8 = iVar8 + 1;
    cVar1 = *pcVar9;
    *pcVar3 = cVar1;
    DAT_000120e0 = cVar1 + cVar4;
  } while (iVar8 != 3);
  cVar4 = *param_2;
  if ((cVar4 < cVar6) || (cVar5 < cVar4)) {
    *param_3 = (acStack_41[0] + cVar4) - cVar2;
    cVar2 = cVar2 - cVar4;
    *param_2 = *param_2 + cVar2;
    param_2[1] = param_2[1] + cVar2;
    param_2[2] = cVar2 + param_2[2];
  }
  else {
    *param_3 = acStack_41[0];
  }
  return;
}

