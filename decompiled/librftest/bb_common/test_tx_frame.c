/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> test_tx_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void test_tx_frame(undefined4 param_1,int param_2,undefined2 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  set_tx_rate(param_4,param_5,param_6,param_7);
  for (iVar1 = 0; iVar1 != param_2; iVar1 = iVar1 + 1) {
    tx_a_frame(param_1);
    if (phy_tx_pwr_track_en != '\0') {
      tx_pwctrl_background(phy_tx_pwr_correct_en,phy_tx_pwr_print_en);
      phy_txdc_track();
    }
    ets_delay_us(param_3);
  }
  return;
}

