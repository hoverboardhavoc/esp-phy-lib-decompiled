/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
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
    iVar3 = abs_temp((int)_DAT_000111b8 - (int)_phy_param);
    if (0x13 < iVar3) {
      _DAT_000110a4 = _DAT_000110a4 & 0xfffffd7f;
      set_rx_gain_table(0x985,0);
      chip_v7_set_chan(uVar1 & 0xff,iVar2);
      _DAT_000111b8 = _phy_param;
    }
    _DAT_600a981c = _DAT_600a981c & 0xfffffffd;
    (**(code **)(_g_phyFuns + 0x10))(0,*(code **)(_g_phyFuns + 0x10));
    txdc_cal_pwdet_init(&phy_param);
    _DAT_00011048 = _phy_param;
    (**(code **)(_g_phyFuns + 0x10))(iVar2,*(code **)(_g_phyFuns + 0x10));
    mac_enable_bb();
    return;
  }
  return;
}

