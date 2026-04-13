/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_restart_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_restart_set(void)

{
  _DAT_20102888 = _DAT_20102888 & 0xbfffffff;
  _DAT_201028bc = _DAT_201028bc | 0x80000000;
  _DAT_20102884 = _DAT_20102884 & 0xffffff | 0xf4000000;
  _DAT_201028e0 = 0x140e0e0f;
  _DAT_201028e4 = 0x1eecf2f2;
  _DAT_201028ec = 0x2d28d3d8;
  _DAT_201028f0 = _DAT_201028f0 & 0xffff | 0xa6a60000;
  _DAT_20102900 = _DAT_20102900 & 0xfff | 0x6668a000;
  _DAT_201028e8 = _DAT_201028e8 & 0x3ff | 0xf1e20c00;
  _DAT_20102068 = _DAT_20102068 | 1;
  _DAT_20102100 = _DAT_20102100 | 0x3807c0;
  _DAT_201028dc = _DAT_201028dc | 0xf8000000;
  _DAT_201028f8 = _DAT_201028f8 & 3 | 0x30580c30;
  return;
}

