/*
 * Last changed at upstream commit 98617ae683c7456706c7de6e27b7f0355c77dc9b
 * https://github.com/espressif/esp-phy-lib/commit/98617ae683c7456706c7de6e27b7f0355c77dc9b
 * Upstream date: 2023-12-29 17:32:23 +0800
 * Upstream subject: fix h2 crash at pos rssi bug
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
  xtal_freq_rx_cal_init(100,0);
  phy_printf("*RFTestBIN %d\n",0xcb);
  return;
}

