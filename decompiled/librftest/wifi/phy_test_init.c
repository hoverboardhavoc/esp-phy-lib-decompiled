/*
 * Last changed at upstream commit 7bdaf7da843d762451b59947318cd2c6cf733855
 * https://github.com/espressif/esp-phy-lib/commit/7bdaf7da843d762451b59947318cd2c6cf733855
 * Upstream date: 2023-07-27 11:33:55 +0800
 * Upstream subject: fix c3 ble tx bug
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
  phy_printf("phy_test_init done: %d, %s, %s, %s\n",0xb,"9c20f0a","Jul 27 2023","10:43:28");
  return;
}

