/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> rftest_set_chan
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rftest_set_chan(char param_1,char param_2)

{
  RFChannelSel((int)param_1,(int)param_2);
  if (phy_tx_pwr_track_en != '\0') {
    tx_pwctrl_background(phy_tx_pwr_correct_en,0);
    bt_track_pll_cap();
    return;
  }
  return;
}

