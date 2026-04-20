/*
 * Last changed at upstream commit 6b304ed9f5ba7f70b2bde6549f24f18f6b634f23
 * https://github.com/espressif/esp-phy-lib/commit/6b304ed9f5ba7f70b2bde6549f24f18f6b634f23
 * Upstream date: 2026-04-20 19:43:28 +0800
 * Upstream subject: S31 support 154 api and light sleep
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_version
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_version(void)

{
  phy_printf("libbtbb version: %s, %s, %s\n","4ef64f3","Apr 20 2026","19:04:27");
  return;
}

