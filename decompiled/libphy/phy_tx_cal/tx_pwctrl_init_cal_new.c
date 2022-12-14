/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
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
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  char acStack_41 [13];
  
  acStack_41[0] = '8' - DAT_00011033;
  if (param_1 == 0) {
    cVar6 = '\x1e';
    cVar3 = '(';
    uVar7 = 0x80;
  }
  else {
    cVar6 = '(';
    cVar3 = '\x0e';
    uVar7 = DAT_0001100b;
  }
  bVar5 = (byte)index_to_txbbgain & 1;
  if (param_1 != 0) {
    (**(code **)(_g_phyFuns + 100))(&phy_param,6,*(code **)(_g_phyFuns + 100));
  }
  iVar8 = 0;
  do {
    uVar2 = (&_LANCHOR0)[iVar8];
    set_channel_rfpll_freq(uVar2,DAT_00011057,0);
    if (param_1 == 0) {
      (**(code **)(_g_phyFuns + 100))(&phy_param,uVar2,*(code **)(_g_phyFuns + 100));
    }
    pcVar9 = (char *)(param_4 + iVar8);
    rfcal_pwrctrl(uVar7,acStack_41,1,cVar3,pcVar9,_DAT_00011016,(int)(char)get_power_atten,bVar5);
    pcVar4 = param_2 + iVar8;
    iVar8 = iVar8 + 1;
    cVar1 = *pcVar9;
    *pcVar4 = cVar1;
    get_power_atten = (code)(cVar1 + cVar3);
  } while (iVar8 != 3);
  cVar3 = *param_2;
  if ((cVar3 < '\f') || (cVar6 < cVar3)) {
    cVar3 = cVar3 + -0x14;
    *param_3 = acStack_41[0] + cVar3;
    *param_2 = *param_2 - cVar3;
    param_2[1] = param_2[1] - cVar3;
    param_2[2] = param_2[2] - cVar3;
  }
  else {
    *param_3 = acStack_41[0];
  }
  return;
}

