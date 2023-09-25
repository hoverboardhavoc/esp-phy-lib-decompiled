/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: librftest -> wifi.o -> rftest_pll_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rftest_pll_track(void)

{
  int iVar1;
  
  rom1_tsens_temp_read();
  if ((tx_pwctrl_background != (code)0x0 || phy_tx_pwr_track_en != '\0') &&
     (iVar1 = (**(code **)(_g_phyFuns + 0x100))
                        ((int)_DAT_000180e2 - (int)track_temp_code,*(code **)(_g_phyFuns + 0x100)),
     9 < iVar1)) {
    rftest_set_chan(DAT_00018242,ate_adc_for_module);
    track_temp_code = _DAT_000180e2;
  }
  return;
}

