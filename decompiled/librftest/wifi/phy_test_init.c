/*
 * Last changed at upstream commit b5d8d9b52c547d789d82108a463c647671744af5
 * https://github.com/espressif/esp-phy-lib/commit/b5d8d9b52c547d789d82108a463c647671744af5
 * Upstream date: 2024-01-05 14:41:53 +0800
 * Upstream subject: fix h2 eco2 sleep-wakeup bug
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
  phy_printf("phy_test_init done: %d, %s, %s, %s\n",2,"5c15ca6","Jan  5 2024","14:16:22");
  return;
}

