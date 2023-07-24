/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
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
  phy_param = 1;
  open_pwr_domain();
  phy_get_romfunc_addr();
  _DAT_60026014 = 0xffffffff;
  phy_init();
  mac_init();
  crypto_disable();
  FillTxPacket(0xa0400,0x400,0,0,0,0,1,2);
  phy_version_print();
  bt_testmode_init();
  rftest_optimize();
  esp_origin_mac();
  (**(code **)(_g_phyFuns + 0x170))(1,*(code **)(_g_phyFuns + 0x170));
  phy_printf("*RFTestBIN %d, Ver.%d\n",0x73,chip_eco_ver);
  return;
}

