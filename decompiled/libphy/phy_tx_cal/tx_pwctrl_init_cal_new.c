/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_tx_cal.o -> tx_pwctrl_init_cal_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pwctrl_init_cal_new(int param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  char *pcVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  char *pcVar10;
  char acStack_41 [13];
  
  acStack_41[0] = '8' - DAT_0001203f;
  if (param_1 == 0) {
    cVar5 = '\x12';
    cVar7 = '\"';
    cVar3 = '(';
    uVar8 = 0x80;
  }
  else {
    cVar5 = '\x14';
    cVar7 = '(';
    cVar3 = '\x0e';
    uVar8 = DAT_00012017;
  }
  bVar6 = (byte)index_to_txbbgain & 1;
  if (param_1 != 0) {
    (**(code **)(_g_phyFuns + 100))(&phy_param,6,*(code **)(_g_phyFuns + 100));
  }
  iVar9 = 0;
  do {
    uVar2 = (&_LANCHOR0)[iVar9];
    set_channel_rfpll_freq(uVar2,DAT_00012063,0);
    if (param_1 == 0) {
      (**(code **)(_g_phyFuns + 100))(&phy_param,uVar2,*(code **)(_g_phyFuns + 100));
    }
    pcVar10 = (char *)(param_4 + iVar9);
    rfcal_pwrctrl(uVar8,acStack_41,1,cVar3,pcVar10,_DAT_00012022,(int)(char)txiq_set_reg,bVar6);
    pcVar4 = param_2 + iVar9;
    iVar9 = iVar9 + 1;
    cVar1 = *pcVar10;
    *pcVar4 = cVar1;
    txiq_set_reg = (code)(cVar1 + cVar3);
  } while (iVar9 != 3);
  cVar3 = *param_2;
  if ((cVar3 < '\f') || (cVar7 < cVar3)) {
    *param_3 = (acStack_41[0] + cVar3) - cVar5;
    cVar5 = cVar5 - cVar3;
    *param_2 = *param_2 + cVar5;
    param_2[1] = param_2[1] + cVar5;
    param_2[2] = cVar5 + param_2[2];
  }
  else {
    *param_3 = acStack_41[0];
  }
  return;
}

