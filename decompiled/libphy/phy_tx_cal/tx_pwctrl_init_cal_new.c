/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
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
  
  acStack_41[0] = '8' - DAT_0001203b;
  if (param_1 == 0) {
    cVar6 = '\x1e';
    cVar3 = '(';
    uVar7 = 0x80;
  }
  else {
    cVar6 = '(';
    cVar3 = '\x0e';
    uVar7 = DAT_00012013;
  }
  bVar5 = (byte)index_to_txbbgain & 1;
  if (param_1 != 0) {
    (**(code **)(_g_phyFuns + 100))(&phy_param,6,*(code **)(_g_phyFuns + 100));
  }
  iVar8 = 0;
  do {
    uVar2 = (&_LANCHOR0)[iVar8];
    set_channel_rfpll_freq(uVar2,DAT_0001205f,0);
    if (param_1 == 0) {
      (**(code **)(_g_phyFuns + 100))(&phy_param,uVar2,*(code **)(_g_phyFuns + 100));
    }
    pcVar9 = (char *)(param_4 + iVar8);
    rfcal_pwrctrl(uVar7,acStack_41,1,cVar3,pcVar9,_DAT_0001201e,(int)(char)txiq_set_reg,bVar5);
    pcVar4 = param_2 + iVar8;
    iVar8 = iVar8 + 1;
    cVar1 = *pcVar9;
    *pcVar4 = cVar1;
    txiq_set_reg = (code)(cVar1 + cVar3);
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

