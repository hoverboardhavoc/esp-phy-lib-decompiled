/*
 * Last changed at upstream commit fc76520d481fc3d08cbc001ef47804a4457fffd7
 * https://github.com/espressif/esp-phy-lib/commit/fc76520d481fc3d08cbc001ef47804a4457fffd7
 * Upstream date: 2025-03-10 14:21:08 +0800
 * Upstream subject: update chips libphy add btbb_set_rx_sense api
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_gain_max
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_gain_max(uint param_1)

{
  _DAT_600a2850 = (param_1 & 0x7f) << 0xe | _DAT_600a2850 & 0xffe03fff;
  _DAT_600a2840 = _DAT_600a2840 & 0xffffff80 | param_1 & 0x7f;
  return;
}

