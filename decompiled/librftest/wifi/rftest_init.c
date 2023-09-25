/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
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
  DAT_00018266 = 1;
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
  phy_printf("*RFTestBIN %d, Ver.%d\n",0x74,DAT_0001836c);
  return;
}

