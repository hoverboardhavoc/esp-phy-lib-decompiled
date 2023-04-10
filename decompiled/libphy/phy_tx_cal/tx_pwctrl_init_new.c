/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_tx_cal.o -> tx_pwctrl_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pwctrl_init_new(void)

{
  if (-1 < (int)(_DAT_000120b8 << 0xb)) {
    (**(code **)(_g_phyFuns + 0x94))(*(code **)(_g_phyFuns + 0x94));
    set_channel_rfpll_freq(1,DAT_00012063,0);
    (**(code **)(_g_phyFuns + 100))(&phy_param,1,*(code **)(_g_phyFuns + 100));
    pwdet_ref_code(0x50);
    tx_pwctrl_init_cal_new(0,&phy_param,&phy_param,&phy_param);
    txcal_work_mode();
    _DAT_000120b8 = _DAT_000120b8 | 0x100000;
    _DAT_00012130 = 0xb;
  }
  return;
}

