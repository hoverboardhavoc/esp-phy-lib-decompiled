/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
 * Source: libphy -> phy_rx_gain.o -> rxiq_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rxiq_cal_init(int param_1,int param_2)

{
  code *pcVar1;
  ushort uVar2;
  code *pcVar3;
  
  chip_v7_set_chan_ana(6);
  _DAT_600a0910 = _DAT_600a0910 | 0xc000;
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
  (**(code **)(_g_phyFuns + 0xc))(1,*(code **)(_g_phyFuns + 0xc));
  if (param_1 != 0) {
    pcVar1 = *(code **)(_g_phyFuns + 0x74);
    uVar2 = (**(code **)(_g_phyFuns + 0x78))(1,1,*(code **)(_g_phyFuns + 0x78));
    (*pcVar1)(1,1,uVar2 | 2);
  }
  _DAT_600a0450 = _DAT_600a0450 & 0xbfffbfff | 0x20002000;
  set_rx_gain_cal_iq_new(0,0x80,&phy_param,0);
  pcVar1 = (code *)&phy_param;
  do {
    pcVar3 = pcVar1 + 2;
    *(ushort *)(pcVar1 + 0xd4) =
         *(ushort *)(pcVar1 + 0xd4) >> 1 & 0x1f80 | *(ushort *)(pcVar1 + 0xd4) & 0x7f;
    pcVar1 = pcVar3;
  } while (pcVar3 != set_txclk_en);
  if (param_2 == 0) {
    _DAT_600a0450 = _DAT_600a0450 & 0xdfffffff | 0x40004000;
    _DAT_600a0910 = _DAT_600a0910 & 0xffff7fff;
    (**(code **)(_g_phyFuns + 0xc))(0,*(code **)(_g_phyFuns + 0xc));
    (**(code **)(_g_phyFuns + 0x88))(*(code **)(_g_phyFuns + 0x88));
    pbus_workmode();
    return;
  }
  return;
}

