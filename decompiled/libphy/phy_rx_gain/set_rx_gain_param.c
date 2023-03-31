/*
 * Last changed at upstream commit 9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * https://github.com/espressif/esp-phy-lib/commit/9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * Upstream date: 2023-03-31 17:07:27 +0800
 * Upstream subject: update_for_rftest_20230331
 * Source: libphy -> phy_rx_gain.o -> set_rx_gain_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_param(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  ushort uVar2;
  undefined4 uVar3;
  
  _DAT_60006110 = _DAT_60006110 | 0xc000;
  (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
  (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
  if (param_1 == 0) {
    if ((_DAT_00011128 & 0x400) == 0) {
      set_rx_gain_cal_iq(0,0x80,&phy_param,0);
      _DAT_00011128 = _DAT_00011128 | 0x400;
    }
  }
  else {
    pcVar1 = *(code **)(_g_phyFuns + 0x1cc);
    uVar2 = (**(code **)(_g_phyFuns + 0x1d0))(1,1,*(code **)(_g_phyFuns + 0x1d0));
    (*pcVar1)(1,1,uVar2 | 2);
  }
  _DAT_6000607c = _DAT_6000607c & 0xf7ffffff;
  (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
  if (param_1 == 0) {
    uVar3 = 3;
  }
  else {
    pcVar1 = *(code **)(_g_phyFuns + 0x1cc);
    uVar2 = (**(code **)(_g_phyFuns + 0x1d0))(1,1,*(code **)(_g_phyFuns + 0x1d0));
    (*pcVar1)(1,1,uVar2 | 2);
    (**(code **)(_g_phyFuns + 0x1cc))(4,2,0,*(code **)(_g_phyFuns + 0x1cc));
    uVar3 = 1;
  }
  set_rx_gain_cal_dc(param_1 != 0,0,uVar3,param_2,&phy_rxrf_dc,&phy_rxbb_dc,&phy_chan_dc,param_3);
  _DAT_60006110 = _DAT_60006110 & 0xffff7fff;
  if (param_1 != 0) {
    (**(code **)(_g_phyFuns + 0x1cc))(4,2,0,*(code **)(_g_phyFuns + 0x1cc));
  }
  (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
                    /* WARNING: Could not recover jumptable at 0x0001051c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1d8))();
  return;
}

