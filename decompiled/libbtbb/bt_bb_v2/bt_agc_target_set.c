/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_target_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_target_set(void)

{
  _DAT_600a28b0 = _DAT_600a28b0 & 0x7fffff | 0xea000000;
  _DAT_600a2898 = _DAT_600a2898 & 0xffff8000 | 0x19d4;
  _DAT_600a2840 = _DAT_600a2840 & 0xffc003ff | 0x3a8800;
  _DAT_600a2894 = _DAT_600a2894 & 0xff803fff | 0x710000;
  _DAT_600a28b4 = _DAT_600a28b4 & 0x7fffff | 0xe2000000;
  return;
}

