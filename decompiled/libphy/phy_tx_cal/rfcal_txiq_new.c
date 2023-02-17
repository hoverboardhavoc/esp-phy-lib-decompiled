/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_tx_cal.o -> rfcal_txiq_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfcal_txiq_new(undefined4 param_1,ushort *param_2,short param_3,undefined4 param_4,int param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  ushort uVar5;
  code *pcVar6;
  byte bStack_34;
  char cStack_33;
  
  uVar1 = _DAT_0001201e;
  cVar3 = '@' - DAT_0001203b;
  _DAT_600a0450 = _DAT_600a0450 & 0xffffbfff | 0x2000;
  (**(code **)(_g_phyFuns + 0x94))(*(code **)(_g_phyFuns + 0x94));
  (**(code **)(_g_phyFuns + 0x74))(1,2,0,*(code **)(_g_phyFuns + 0x74));
  if (param_5 == 1) {
    pcVar6 = *(code **)(_g_phyFuns + 0x74);
    uVar5 = (**(code **)(_g_phyFuns + 0x78))(1,1,*(code **)(_g_phyFuns + 0x78));
    (*pcVar6)(1,1,uVar5 | 2);
  }
  else if (param_5 == 2) {
    (**(code **)(_g_phyFuns + 0xc))(1,*(code **)(_g_phyFuns + 0xc));
    txdc_cal_new(param_1);
    goto _L99;
  }
  pbus_set_dco(param_1);
_L99:
  uVar2 = _DAT_600a0420;
  uVar4 = get_power_atten((int)param_3,param_4,cVar3,uVar1,0);
  txiq_cover_new(uVar4,(int)param_3,&bStack_34,0,0);
  txcal_work_mode();
  bStack_34 = get_data_sat((int)(char)bStack_34,0x1f,0xffffffe1);
  uVar5 = get_data_sat((int)cStack_33,0x3f,0xffffffc1);
  cStack_33 = (char)uVar5;
  *param_2 = (bStack_34 & 0x3f) << 7 | uVar5 & 0x7f;
  _DAT_600a0420 = uVar2;
  if (param_5 == 2) {
    (**(code **)(_g_phyFuns + 0xc))(0,*(code **)(_g_phyFuns + 0xc));
  }
  _DAT_600a0450 = _DAT_600a0450 | 0x4000;
  return;
}

