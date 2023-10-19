/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> rftest_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rftest_init(void)

{
  phy_printf("rftest_init  start\n");
  pd_apb_peri_();
  rftest_open_clk();
  phy_init();
  phy_version_print();
  bt_testmode_init();
  phy_printf("*RFTestBIN %d\n",0xcb);
  return;
}

