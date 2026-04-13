/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_target_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_target_set(void)

{
  _DAT_20102898 = _DAT_20102898 & 0xfffffe00 | 0x1d4;
  _DAT_201028b0 = _DAT_201028b0 & 0x7fffff | 0xea000000;
  _DAT_20102840 = _DAT_20102840 & 0xffc01fff | 0x3a8000;
  _DAT_20102894 = _DAT_20102894 & 0xff803fff | 0x738000;
  _DAT_201028b4 = _DAT_201028b4 & 0x7fffff | 0xe3000000;
  return;
}

