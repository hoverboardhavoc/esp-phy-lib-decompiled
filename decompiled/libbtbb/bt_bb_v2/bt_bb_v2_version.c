/*
 * Last changed at upstream commit b5d8d9b52c547d789d82108a463c647671744af5
 * https://github.com/espressif/esp-phy-lib/commit/b5d8d9b52c547d789d82108a463c647671744af5
 * Upstream date: 2024-01-05 14:41:53 +0800
 * Upstream subject: fix h2 eco2 sleep-wakeup bug
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_version
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_version(void)

{
  phy_printf("libbtbb version: %s, %s, %s\n","944f18e","Jan  5 2024","14:16:24");
  return;
}

