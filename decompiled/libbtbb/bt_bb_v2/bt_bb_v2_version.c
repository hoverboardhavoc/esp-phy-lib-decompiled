/*
 * Last changed at upstream commit f4c28b6d72f6cdfcc377f56b2095c061e811e740
 * https://github.com/espressif/esp-phy-lib/commit/f4c28b6d72f6cdfcc377f56b2095c061e811e740
 * Upstream date: 2023-08-23 15:27:04 +0800
 * Upstream subject: update h2 libphy for wakeup tx memory
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_version
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_version(void)

{
  phy_printf("libbtbb version: %s, %s, %s\n","b821802","Aug 23 2023","10:32:46");
  return;
}

