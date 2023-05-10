/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
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
  phy_printf("phy_test_init done: %d, %s, %s, %s\n",9,"1856f88","May 10 2023","17:44:25");
  return;
}

