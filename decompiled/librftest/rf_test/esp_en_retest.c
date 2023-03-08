/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  ate_rxdc_remain_check(1);
  phy_printf("\n\nMODULE_ANA TEST EDN!!!\n");
  ate_txframe_dut(100000,1,0x94c,0,1);
  phy_printf("\n\nMODULE_TEST EDN!!!\n\n");
  return;
}

