/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
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
    rftest_set_chan(DAT_0001823e,phy_i2c_check);
    track_temp_code = _DAT_000180de;
  }
  return;
}

