/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_tx_cal.o -> tx_pwctrl_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pwctrl_init_new(void)

{
  if (-1 < (int)(_DAT_000110b4 << 0xb)) {
    (**(code **)(_g_phyFuns + 0x94))(*(code **)(_g_phyFuns + 0x94));
    set_channel_rfpll_freq(1,DAT_0001105f,0);
    (**(code **)(_g_phyFuns + 100))(&phy_param,1,*(code **)(_g_phyFuns + 100));
    pwdet_ref_code(0x50);
    tx_pwctrl_init_cal_new(0,&phy_param,&phy_param,&phy_param);
    txcal_work_mode();
    _DAT_000110b4 = _DAT_000110b4 | 0x100000;
    _DAT_0001112c = 0xb;
  }
  return;
}

