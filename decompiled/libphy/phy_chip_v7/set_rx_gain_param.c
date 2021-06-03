/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> set_rx_gain_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_param(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  code *pcVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(g_phyFuns + 0x1b8))(0x67,0,3,2,2,*(code **)(g_phyFuns + 0x1b8));
    (**(code **)(g_phyFuns + 0x1bc))(0x67,0,3,2,2,0,*(code **)(g_phyFuns + 0x1bc));
  }
  _DAT_60006110 = _DAT_60006110 | 0xc000;
  (**(code **)(g_phyFuns + 0x1d4))(*(code **)(g_phyFuns + 0x1d4));
  (**(code **)(g_phyFuns + 0x1e4))(0,*(code **)(g_phyFuns + 0x1e4));
  if (param_1 == 0) {
    if ((DAT_00014050 & 0x400) == 0) {
      set_rx_gain_cal_iq(0,0x80,&DAT_00014080,0);
      DAT_00014050 = DAT_00014050 | 0x400;
    }
  }
  else {
    pcVar2 = *(code **)(g_phyFuns + 0x1cc);
    uVar3 = (**(code **)(g_phyFuns + 0x1d0))(1,1,*(code **)(g_phyFuns + 0x1d0));
    (*pcVar2)(1,1,uVar3 | 2);
  }
  _DAT_6000607c = _DAT_6000607c & 0xf7ffffff;
  (**(code **)(g_phyFuns + 0x1e4))(0,*(code **)(g_phyFuns + 0x1e4));
  bVar1 = param_1 == 0;
  if (bVar1) {
    uVar4 = 3;
  }
  else {
    pcVar2 = *(code **)(g_phyFuns + 0x1cc);
    uVar3 = (**(code **)(g_phyFuns + 0x1d0))(1,1,*(code **)(g_phyFuns + 0x1d0));
    (*pcVar2)(1,1,uVar3 | 2);
    (**(code **)(g_phyFuns + 0x1cc))(4,2,0,*(code **)(g_phyFuns + 0x1cc));
    uVar4 = 2;
  }
  set_rx_gain_cal_dc(!bVar1,!bVar1,uVar4,param_2,&phy_rxrf_dc,&phy_rxbb_dc,&phy_chan_dc,param_3);
  _DAT_60006110 = _DAT_60006110 & 0xffff7fff;
  if (param_1 != 0) {
    (**(code **)(g_phyFuns + 0x1cc))(4,2,0,*(code **)(g_phyFuns + 0x1cc));
  }
  (**(code **)(g_phyFuns + 0x1e4))(0,*(code **)(g_phyFuns + 0x1e4));
  (**(code **)(g_phyFuns + 0x1d8))(*(code **)(g_phyFuns + 0x1d8));
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000110e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_phyFuns + 0x1bc))(0x67,0,3,2,2,uVar5);
    return;
  }
  return;
}

