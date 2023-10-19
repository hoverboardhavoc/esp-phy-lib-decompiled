/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> rf_test.o -> module_test_func_local
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void module_test_func_local(void)

{
  phy_printf("\n\nMODULE_TEST START!!!\n\n");
  module_test_cal_print();
  ate_rxdc_remain_check(1);
  phy_printf("\n\nMODULE_ANA TEST EDN!!!\n");
  ate_txframe_dut(100000,1,0x94c,0,1);
  phy_printf("\n\nMODULE_TEST EDN!!!\n\n");
  return;
}

