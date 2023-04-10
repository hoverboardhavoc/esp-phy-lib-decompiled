/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_track.o -> phy_cal_param_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_cal_param_track(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = abs_temp((int)_DAT_00011048 - (int)_phy_param);
  uVar1 = _DAT_0001111c;
  if (param_1 <= iVar2) {
    iVar2 = (int)DAT_0001111f;
    if (param_2 != 0) {
      phy_printf("cal:%d,%d\n",(int)_DAT_00011048,(int)_phy_param);
    }
    _DAT_600a981c = _DAT_600a981c & 0xfffffffd;
    iVar3 = abs_temp((int)_DAT_00011190 - (int)_phy_param);
    if (0x13 < iVar3) {
      _DAT_000110a4 = _DAT_000110a4 & 0xfffffd7f;
      set_rx_gain_table(0x985,0);
      chip_v7_set_chan(uVar1 & 0xff,iVar2);
      _DAT_00011190 = _phy_param;
    }
    _DAT_600a981c = _DAT_600a981c & 0xfffffffd;
    (**(code **)(_g_phyFuns + 0x10))(0,*(code **)(_g_phyFuns + 0x10));
    txdc_cal_pwdet_init(0,0);
    wifi_set_tx_gain(uVar1 & 0xff,0);
    _DAT_00011048 = _phy_param;
    (**(code **)(_g_phyFuns + 0x10))(iVar2,*(code **)(_g_phyFuns + 0x10));
    mac_enable_bb();
    return;
  }
  return;
}

