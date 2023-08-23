/*
 * Last changed at upstream commit f4c28b6d72f6cdfcc377f56b2095c061e811e740
 * https://github.com/espressif/esp-phy-lib/commit/f4c28b6d72f6cdfcc377f56b2095c061e811e740
 * Upstream date: 2023-08-23 15:27:04 +0800
 * Upstream subject: update h2 libphy for wakeup tx memory
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_gain_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_gain_set(void)

{
  _DAT_600a2854 = _DAT_600a2854 & 0xfffffe03 | 0xc9;
  _DAT_600a2848 = _DAT_600a2848 & 0xffff;
  _DAT_600a2868 = _DAT_600a2868 & 0xffff;
  _DAT_600a2850 = _DAT_600a2850 & 0xffe03fff | 0x168000;
  _DAT_600a2840 = _DAT_600a2840 & 0xffffff80 | 0x5a;
  return;
}

