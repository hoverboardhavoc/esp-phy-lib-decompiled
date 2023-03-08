/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> phy_test_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_test_init(void)

{
  phy_printf("phy_test_init  start\n");
  phy_get_romfunc_addr();
  _DAT_60026014 = 0xffffffff;
  phy_init();
  phy_printf("phy_test_init done: %d, %s, %s, %s\n",9,"f732b06","Feb 15 2023","18:57:24");
  return;
}

