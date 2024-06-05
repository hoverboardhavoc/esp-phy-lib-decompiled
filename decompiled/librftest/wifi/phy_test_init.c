/*
 * Last changed at upstream commit c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * https://github.com/espressif/esp-phy-lib/commit/c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * Upstream date: 2024-06-05 14:35:04 +0800
 * Upstream subject: update C6 H2 libphy for coex test ble 154 chan bug
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
  phy_printf("phy_test_init done: %d, %s, %s, %s\n",3,"8fa9cb4","Jun  5 2024","14:19:21");
  return;
}

