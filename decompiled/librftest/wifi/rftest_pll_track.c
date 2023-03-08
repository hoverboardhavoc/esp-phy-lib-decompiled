/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  
  ram_tsens_temp_read();
  if ((rom_set_tx_gain_mem != (code)0x0 || phy_tx_pwr_track_en != '\0') &&
     (iVar1 = (**(code **)(_g_phyFuns + 0x100))
                        ((int)_DAT_000180de - (int)track_temp_code,*(code **)(_g_phyFuns + 0x100)),
     9 < iVar1)) {
    rftest_set_chan(DAT_0001823e,internal_vol_test);
    track_temp_code = _DAT_000180de;
  }
  return;
}

