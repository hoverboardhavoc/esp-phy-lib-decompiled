/*
 * Last changed at upstream commit 38908075833e4ae3a48e6ffe431a672698e07e21
 * https://github.com/espressif/esp-phy-lib/commit/38908075833e4ae3a48e6ffe431a672698e07e21
 * Upstream date: 2025-02-13 17:19:18 +0800
 * Upstream subject: update H2 libphy fit ECO5 btbb rssi fix
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_version
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_version(void)

{
  phy_printf("libbtbb version: %s, %s, %s\n","509a2a6","Feb 13 2025","16:29:25");
  return;
}

