/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_rx_gain.o -> set_rx_gain_param
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
    pcVar2 = *(code **)(_g_phyFuns + 0x1cc);
    uVar3 = (**(code **)(_g_phyFuns + 0x1d0))(1,1,*(code **)(_g_phyFuns + 0x1d0));
    (*pcVar2)(1,1,uVar3 | 2);
  }
  _DAT_6000607c = _DAT_6000607c & 0xf7ffffff;
  (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
  bVar1 = param_1 == 0;
  if (bVar1) {
    uVar4 = 3;
  }
  else {
    pcVar2 = *(code **)(_g_phyFuns + 0x1cc);
    uVar3 = (**(code **)(_g_phyFuns + 0x1d0))(1,1,*(code **)(_g_phyFuns + 0x1d0));
    (*pcVar2)(1,1,uVar3 | 2);
    (**(code **)(_g_phyFuns + 0x1cc))(4,2,0,*(code **)(_g_phyFuns + 0x1cc));
    uVar4 = 2;
  }
  set_rx_gain_cal_dc(!bVar1,!bVar1,uVar4,param_2,&phy_rxrf_dc,&phy_rxbb_dc,&phy_chan_dc,param_3);
  _DAT_60006110 = _DAT_60006110 & 0xffff7fff;
  if (param_1 != 0) {
    (**(code **)(_g_phyFuns + 0x1cc))(4,2,0,*(code **)(_g_phyFuns + 0x1cc));
  }
  (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
                    /* WARNING: Could not recover jumptable at 0x000104d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1d8))();
  return;
}

