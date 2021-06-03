/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> tx_pwctrl_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pwctrl_init(void)

{
  if (-1 < (int)(_DAT_00013128 << 0xb)) {
    txcal_debuge_mode();
    set_channel_rfpll_freq(1,DAT_000130fb,0);
    (**(code **)(_g_phyFuns + 0x114))(&phy_param,1,*(code **)(_g_phyFuns + 0x114));
    pwdet_ref_code(0x50);
    tx_pwctrl_init_cal(0,&phy_param,&phy_param,&phy_param);
    txcal_work_mode();
    _DAT_00013128 = _DAT_00013128 | 0x100000;
    DAT_000131fa = 0xb;
  }
  return;
}

