/*
 * Last changed at upstream commit 798678e4e011c666a931292fc300ec02160cdc6a
 * https://github.com/espressif/esp-phy-lib/commit/798678e4e011c666a931292fc300ec02160cdc6a
 * Upstream date: 2024-01-15 11:52:07 +0800
 * Upstream subject: fix h2 eco2 wakeup write i2c fail
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_version
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_version(void)

{
  phy_printf("libbtbb version: %s, %s, %s\n","944f18e","Jan 15 2024","11:17:25");
  return;
}

