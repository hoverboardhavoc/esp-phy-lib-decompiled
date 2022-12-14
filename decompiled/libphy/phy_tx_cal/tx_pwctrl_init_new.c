/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_tx_cal.o -> tx_pwctrl_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pwctrl_init_new(void)

{
  if (-1 < (int)(_DAT_000110ac << 0xb)) {
    (**(code **)(_g_phyFuns + 0x94))(*(code **)(_g_phyFuns + 0x94));
    set_channel_rfpll_freq(1,DAT_00011057,0);
    (**(code **)(_g_phyFuns + 100))(&phy_param,1,*(code **)(_g_phyFuns + 100));
    pwdet_ref_code(0x50);
    tx_pwctrl_init_cal_new(0,&phy_param,&phy_param,&phy_param);
    txcal_work_mode();
    _DAT_000110ac = _DAT_000110ac | 0x100000;
    _DAT_00011124 = 0xb;
  }
  return;
}

