/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_sat_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_sat_gain(undefined4 param_1)

{
  _DAT_20102864 = 0x404;
  _DAT_20102858 = param_1;
  _DAT_2010285c = param_1;
  _DAT_2010284c = _DAT_2010284c & 0xfff80000 | 0xd5081770;
  _DAT_20102820 = _DAT_20102820 & 0xfffffff7;
  _DAT_20102888 = _DAT_20102888 | 0x40000000;
  return;
}

