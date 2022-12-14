/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
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
  
  uVar1 = _DAT_00011016;
  cVar3 = '@' - DAT_00011033;
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
    goto _L44;
  }
  pbus_set_dco(param_1);
_L44:
  uVar2 = _DAT_600a0420;
  uVar4 = get_power_atten((int)param_3,param_4,cVar3,uVar1,0);
  txiq_cover(uVar4,(int)param_3,&bStack_34,0,0);
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

