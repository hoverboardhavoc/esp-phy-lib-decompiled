/*
 * Last changed at upstream commit ea648e92ecaba36b0f2437849569795d85433497
 * https://github.com/espressif/esp-phy-lib/commit/ea648e92ecaba36b0f2437849569795d85433497
 * Upstream date: 2023-10-08 11:21:03 +0800
 * Upstream subject: update c6 libphy for sleep cuash
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
  phy_printf("phy_test_init done: %d, %s, %s, %s\n",2,"9f68e96","Oct  8 2023","10:41:09");
  return;
}

