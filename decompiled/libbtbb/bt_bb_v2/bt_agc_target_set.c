/*
 * Last changed at upstream commit fc76520d481fc3d08cbc001ef47804a4457fffd7
 * https://github.com/espressif/esp-phy-lib/commit/fc76520d481fc3d08cbc001ef47804a4457fffd7
 * Upstream date: 2025-03-10 14:21:08 +0800
 * Upstream subject: update chips libphy add btbb_set_rx_sense api
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_target_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_target_set(void)

{
  _DAT_600a28b0 = _DAT_600a28b0 & 0x7fffff | 0xef000000;
  _DAT_600a2898 = _DAT_600a2898 & 0xffff8000 | 0x19d4;
  _DAT_600a2840 = _DAT_600a2840 & 0xffc003ff | 0x3a8800;
  _DAT_600a2894 = _DAT_600a2894 & 0xff803fff | 0x710000;
  _DAT_600a28b4 = _DAT_600a28b4 & 0x7fffff | 0xea000000;
  return;
}

