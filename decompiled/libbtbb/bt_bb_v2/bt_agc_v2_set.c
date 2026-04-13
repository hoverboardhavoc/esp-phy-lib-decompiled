/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_v2_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_v2_set(void)

{
  _DAT_201028d0 = _DAT_201028d0 & 0xfe0007ff | 0x50a000;
  _DAT_201028d4 = _DAT_201028d4 & 0xfe00003f | 0xf000;
  _DAT_2010288c = _DAT_2010288c & 0xdfffffff;
  return;
}

