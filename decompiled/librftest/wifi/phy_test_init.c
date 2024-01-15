/*
 * Last changed at upstream commit 798678e4e011c666a931292fc300ec02160cdc6a
 * https://github.com/espressif/esp-phy-lib/commit/798678e4e011c666a931292fc300ec02160cdc6a
 * Upstream date: 2024-01-15 11:52:07 +0800
 * Upstream subject: fix h2 eco2 wakeup write i2c fail
 * Source: librftest -> wifi.o -> phy_test_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_test_init(void)

{
  phy_printf("phy_test_init  start\n");
  phy_get_romfunc_addr();
  phy_init();
  phy_printf("phy_test_init done: %d, %s, %s, %s\n",2,"9aae6ea","Jan 15 2024","11:17:23");
  return;
}

