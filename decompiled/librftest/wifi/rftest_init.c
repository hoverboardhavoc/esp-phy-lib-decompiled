/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> rftest_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rftest_init(void)

{
  phy_printf("rftest_init  start\n");
  pd_apb_peri(1);
  _DAT_60096084 = _DAT_60096084 | 0x400000;
  _DAT_60096108 = _DAT_60096108 | 1;
  phy_get_romfunc_addr();
  _DAT_600a9804 = 0xffffffff;
  _DAT_600a9814 = 0x7ffff;
  rftest_open_clk();
  _DAT_600af010 = _DAT_600af010 | 1;
  _DAT_600990c4 = _DAT_600990c4 & 0xfffffff0;
  init_param_chg();
  phy_init();
  mac_init();
  crypto_disable();
  FillTxPacket(0xa0400,0x400,0,0,0,0,1,2);
  phy_version_print();
  rftest_optimize();
  bt_testmode_init();
  esp_origin_mac();
  phy_printf("*RFTestBIN %d\n",0x67);
  return;
}

