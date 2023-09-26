/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> rf_test.o -> esp_en_retest
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_en_retest(void)

{
  phy_init();
  phy_printf("\n\nMODULE_TEST START!!!\n\n");
  module_test_print();
  target_power_backoff(8);
  ate_rxdc_remain_check(1);
  phy_printf("\n\nMODULE_ANA TEST EDN!!!\n");
  ate_txframe_dut(100000,1,0x94c,0,1);
  phy_printf("\n\nMODULE_TEST EDN!!!\n\n");
  return;
}

