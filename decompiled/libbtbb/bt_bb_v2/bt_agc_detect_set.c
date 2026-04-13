/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_detect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_detect_set(void)

{
  _DAT_201028a0 = _DAT_201028a0 & 0xf0ffffff | 0x4000000;
  _DAT_201028a8 = _DAT_201028a8 & 0xfffe0ff0 | 0x4007;
  _DAT_201028b8 = _DAT_201028b8 & 0xfffff0ff | 0x700;
  _DAT_201028c0 = _DAT_201028c0 & 0x1f | 0x9c752940;
  _DAT_201028c4 = _DAT_201028c4 & 0x3ff | 0x9ca7bc00;
  return;
}

