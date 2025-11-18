/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_gain_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_gain_set(void)

{
  _DAT_600c2854 = _DAT_600c2854 & 0xfffffe03 | 0xc9;
  _DAT_600c2848 = _DAT_600c2848 & 0xffff;
  _DAT_600c2868 = _DAT_600c2868 & 0xffff;
  _DAT_600c2850 = _DAT_600c2850 & 0xffe03fff | 0x168000;
  _DAT_600c2840 = _DAT_600c2840 & 0xffffff80 | 0x5a;
  return;
}

