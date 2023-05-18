/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
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
  
  iVar2 = abs_temp((int)_DAT_00011190 - (int)_phy_param);
  if (0x1d < iVar2) {
    force_txrx_off(1);
    pbus_clear_reg();
    uVar1 = _DAT_0001111c;
    iVar2 = (int)DAT_0001111f;
    if (param_2 != 0) {
      phy_printf("cal:%d,%d\n",(int)_DAT_00011190,(int)_phy_param);
    }
    _DAT_600a981c = _DAT_600a981c & 0xfffffffd;
    _DAT_000110a4 = _DAT_000110a4 & 0xfffffd7f;
    set_rx_gain_table(0x985,0);
    chip_v7_set_chan(uVar1 & 0xff,iVar2);
    mac_enable_bb();
    force_txrx_off(0);
    _DAT_00011190 = _phy_param;
  }
  iVar2 = abs_temp((int)_DAT_00011048 - (int)_phy_param);
  if (param_1 <= iVar2) {
    force_txrx_off(1);
    pbus_clear_reg();
    uVar1 = _DAT_0001111c;
    iVar2 = (int)DAT_0001111f;
    _DAT_600a981c = _DAT_600a981c & 0xfffffffd;
    if (param_2 != 0) {
      phy_printf("cal:%d,%d\n",(int)_DAT_00011048,(int)_phy_param);
    }
    (**(code **)(_g_phyFuns + 0x10))(0,*(code **)(_g_phyFuns + 0x10));
    txdc_cal_pwdet_init(0,0);
    wifi_set_tx_gain(uVar1 & 0xff,0);
    _DAT_00011048 = _phy_param;
    (**(code **)(_g_phyFuns + 0x10))(iVar2,*(code **)(_g_phyFuns + 0x10));
    mac_enable_bb();
    force_txrx_off(0);
    return;
  }
  return;
}

