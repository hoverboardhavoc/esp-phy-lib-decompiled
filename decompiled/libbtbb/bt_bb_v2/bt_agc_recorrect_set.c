/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_recorrect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_recorrect_set(void)

{
  _DAT_201028b4 = _DAT_201028b4 & 0xffffc1ff | 0x1500;
  _DAT_201028bc = _DAT_201028bc & 0xfffffebf | 0xa0;
  _DAT_201028b0 = _DAT_201028b0 & 0xff801fff | 0x630000;
  _DAT_20102868 = _DAT_20102868 & 0xfffff820 | 0x3d34;
  _DAT_2010286c = _DAT_2010286c & 0xffffff | 0xf000000;
  return;
}

