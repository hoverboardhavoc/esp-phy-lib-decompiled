/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
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
  if ((rom_set_tx_gain_mem != (code)0x0 || phy_tx_pwr_track_en != '\0') &&
     (iVar1 = (**(code **)(_g_phyFuns + 0x100))
                        ((int)_DAT_000180e2 - (int)track_temp_code,*(code **)(_g_phyFuns + 0x100)),
     9 < iVar1)) {
    rftest_set_chan(DAT_00018242,le_master_test);
    track_temp_code = _DAT_000180e2;
  }
  return;
}

