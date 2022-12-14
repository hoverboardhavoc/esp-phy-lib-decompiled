/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_rx_gain.o -> rxiq_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rxiq_cal_init(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  code *pcVar3;
  
  if ((_DAT_000110b4 & 0x400) == 0) {
    chip_v7_set_chan_ana(6);
    _DAT_600a0910 = _DAT_600a0910 | 0xc000;
    pbus_debugmode();
    (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
    (**(code **)(_g_phyFuns + 0xc))(1,*(code **)(_g_phyFuns + 0xc));
    if (param_1 != 0) {
      pcVar3 = *(code **)(_g_phyFuns + 0x74);
      uVar1 = (**(code **)(_g_phyFuns + 0x78))(1,1,*(code **)(_g_phyFuns + 0x78));
      (*pcVar3)(1,1,uVar1 | 2);
    }
    set_rx_gain_cal_iq_new(0,0x80,&phy_param,0);
    pcVar3 = (code *)&phy_param;
    do {
      pcVar2 = pcVar3 + 2;
      *(ushort *)(pcVar3 + 0xd4) =
           *(ushort *)(pcVar3 + 0xd4) >> 1 & 0x1f80 | *(ushort *)(pcVar3 + 0xd4) & 0x7f;
      pcVar3 = pcVar2;
    } while (pcVar2 != set_txclk_en);
    _DAT_600a0450 = _DAT_600a0450 & 0xdfffffff;
    _DAT_600a0910 = _DAT_600a0910 & 0xffff7fff;
    (**(code **)(_g_phyFuns + 0xc))(0,*(code **)(_g_phyFuns + 0xc));
    (**(code **)(_g_phyFuns + 0x88))(*(code **)(_g_phyFuns + 0x88));
    pbus_workmode();
    _DAT_000110b4 = _DAT_000110b4 | 0x400;
  }
  return;
}

