/*
 * Last changed at upstream commit fc76520d481fc3d08cbc001ef47804a4457fffd7
 * https://github.com/espressif/esp-phy-lib/commit/fc76520d481fc3d08cbc001ef47804a4457fffd7
 * Upstream date: 2025-03-10 14:21:08 +0800
 * Upstream subject: update chips libphy add btbb_set_rx_sense api
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_set_max_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_set_max_gain(int param_1,uint param_2)

{
  if (param_1 == 0) {
    param_2 = 0x50;
  }
  _DAT_600a2850 = (param_2 & 0x7f) << 0xe | _DAT_600a2850 & 0xffe03fff;
  _DAT_600a2840 = _DAT_600a2840 & 0xffffff80 | param_2 & 0x7f;
  return;
}

