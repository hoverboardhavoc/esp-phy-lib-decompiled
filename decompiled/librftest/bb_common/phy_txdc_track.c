/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> phy_txdc_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_txdc_track(void)

{
  if (fcc_mode_sel == '\0') {
    if (999999 < (uint)(_DAT_600ad000 - tx_temp_time)) {
      if (((phy_track_num < 6) && ((phy_track_num & 3) == 0)) || ((phy_track_num & 0x1f) == 0)) {
        phy_cal_param_track(0,phy_tx_pwr_print_en);
      }
      phy_track_num = phy_track_num + 1;
      tx_temp_time = _DAT_600ad000;
    }
    return;
  }
  return;
}

