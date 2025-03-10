/*
 * Last changed at upstream commit fc76520d481fc3d08cbc001ef47804a4457fffd7
 * https://github.com/espressif/esp-phy-lib/commit/fc76520d481fc3d08cbc001ef47804a4457fffd7
 * Upstream date: 2025-03-10 14:21:08 +0800
 * Upstream subject: update chips libphy add btbb_set_rx_sense api
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_version
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_version(void)

{
  phy_printf("libbtbb version: %s, %s, %s\n","e9c8b26","Mar  3 2025","16:09:24");
  return;
}

