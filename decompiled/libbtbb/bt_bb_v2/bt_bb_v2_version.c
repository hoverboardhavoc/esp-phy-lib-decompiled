/*
 * Last changed at upstream commit 5695f4f38108658bc4a33e4712c1ebcb34911434
 * https://github.com/espressif/esp-phy-lib/commit/5695f4f38108658bc4a33e4712c1ebcb34911434
 * Upstream date: 2026-07-22 11:10:34 +0800
 * Upstream subject: update s31,C6 for track
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_version
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_version(void)

{
  phy_printf("libbtbb version: %s, %s, %s\n","d5590f7","Jul 14 2026","10:33:07");
  return;
}

