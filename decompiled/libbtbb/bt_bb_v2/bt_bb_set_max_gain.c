/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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
    param_2 = (uint)phy_param;
  }
  _DAT_20102850 = (param_2 & 0x7f) << 0xe | _DAT_20102850 & 0xffe03fff;
  _DAT_20102840 = _DAT_20102840 & 0xffffff80 | param_2 & 0x7f;
  return;
}

