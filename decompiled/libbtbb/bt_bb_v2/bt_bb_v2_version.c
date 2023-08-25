/*
 * Last changed at upstream commit 95c370089907f74805eac72975b0e85c62e175ed
 * https://github.com/espressif/esp-phy-lib/commit/95c370089907f74805eac72975b0e85c62e175ed
 * Upstream date: 2023-08-25 17:58:43 +0800
 * Upstream subject: fix h2 wakeup rx_freq_offset
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_version
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_version(void)

{
  phy_printf("libbtbb version: %s, %s, %s\n","b821802","Aug 25 2023","18:47:24");
  return;
}

