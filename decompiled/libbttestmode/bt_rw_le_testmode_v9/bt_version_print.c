/*
 * Last changed at upstream commit fc76520d481fc3d08cbc001ef47804a4457fffd7
 * https://github.com/espressif/esp-phy-lib/commit/fc76520d481fc3d08cbc001ef47804a4457fffd7
 * Upstream date: 2025-03-10 14:21:08 +0800
 * Upstream subject: update chips libphy add btbb_set_rx_sense api
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> bt_version_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_version_print(void)

{
  bt_bb_v2_version();
  phy_printf("LE autotest version: %s, %s, %s\n","8c21064","Mar  3 2025","15:36:31");
  return;
}

