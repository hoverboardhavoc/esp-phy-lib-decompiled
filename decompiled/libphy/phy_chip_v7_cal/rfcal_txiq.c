/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> rfcal_txiq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfcal_txiq(undefined4 param_1,undefined4 param_2,ushort *param_3,short param_4,
               undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  byte bVar5;
  code *pcVar6;
  byte bStack_34;
  byte bStack_33;
  
  cVar2 = '8' - power_cal_offset;
  _DAT_6000607c = _DAT_6000607c & 0xffffefff | 0x800;
  txcal_debuge_mode();
  (**(code **)(_g_phyFuns + 0x1cc))(1,2,param_1,*(code **)(_g_phyFuns + 0x1cc));
  if (param_6 == 1) {
    pcVar6 = *(code **)(_g_phyFuns + 0x1cc);
    uVar4 = (**(code **)(_g_phyFuns + 0x1d0))(1,1,*(code **)(_g_phyFuns + 0x1d0));
    (*pcVar6)(1,1,uVar4 | 2);
  }
  else if (param_6 == 2) {
    (**(code **)(_g_phyFuns + 0x24))(1,*(code **)(_g_phyFuns + 0x24));
    txdc_cal_v70(param_2);
    goto _L318;
  }
  (**(code **)(_g_phyFuns + 0x1f0))(param_2,*(code **)(_g_phyFuns + 0x1f0));
_L318:
  uVar1 = _DAT_60006040;
  uVar3 = get_power_atten((int)param_4,param_5,cVar2,0xfc,0);
  txiq_cover(uVar3,(int)param_4,&bStack_34);
  txcal_work_mode();
  bVar5 = 0xf;
  if (('\x0f' < (char)bStack_34) || (bVar5 = 0xf1, (char)bStack_34 < -0xf)) {
    bStack_34 = bVar5;
  }
  bVar5 = 0x1f;
  if (('\x1f' < (char)bStack_33) || (bVar5 = 0xe1, (char)bStack_33 < -0x1f)) {
    bStack_33 = bVar5;
  }
  *param_3 = (bStack_34 & 0x1f) << 6 | bStack_33 & 0x3f;
  _DAT_60006040 = uVar1;
  if (param_6 == 2) {
    (**(code **)(_g_phyFuns + 0x24))(0,*(code **)(_g_phyFuns + 0x24));
  }
  _DAT_6000607c = _DAT_6000607c | 0x1000;
  return;
}

