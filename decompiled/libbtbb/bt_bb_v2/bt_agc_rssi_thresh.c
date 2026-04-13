/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_rssi_thresh
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_rssi_thresh(void)

{
  _DAT_201028a0 = _DAT_201028a0 & 0xff00ffff | 0x9c0000;
  _DAT_201028a8 = _DAT_201028a8 & 0xfe01f00f | 0x1380880;
  _DAT_201028b8 = _DAT_201028b8 & 0xfff00fff | 0x88000;
  return;
}

