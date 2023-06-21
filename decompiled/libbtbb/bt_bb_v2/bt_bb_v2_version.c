/*
 * Last changed at upstream commit 30e464c44ca5f7291bdf88b4396ebd8c1a055388
 * https://github.com/espressif/esp-phy-lib/commit/30e464c44ca5f7291bdf88b4396ebd8c1a055388
 * Upstream date: 2023-06-21 14:25:38 +0800
 * Upstream subject: btbb: fix btbb version print using phy_printf
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_version
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_version(void)

{
  phy_printf("libbtbb version: %s, %s, %s\n","89556a1","May 22 2023","11:57:29");
  return;
}

