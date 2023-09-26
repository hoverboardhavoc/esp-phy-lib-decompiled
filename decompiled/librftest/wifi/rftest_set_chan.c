/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> rftest_set_chan
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rftest_set_chan(char param_1)

{
  RFChannelSel((int)param_1);
  if (phy_tx_pwr_track_en != '\0') {
    tx_pwctrl_background(phy_tx_pwr_correct_en,0);
    bt_track_pll_cap();
    return;
  }
  return;
}

