/*
 * Last changed at upstream commit b88e4b76e090ae59c51cb00b916d38def895b396
 * https://github.com/espressif/esp-phy-lib/commit/b88e4b76e090ae59c51cb00b916d38def895b396
 * Upstream date: 2026-09-07 15:06:44 +0800
 * Upstream subject: update libphy for track and 154 api
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_version
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_version(void)

{
  phy_printf("libbtbb version: %s, %s, %s\n","299ba0d","Sep  2 2026","19:36:27");
  return;
}

