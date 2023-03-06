/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_rssi_thresh
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_rssi_thresh(void)

{
  _DAT_600a28a0 = _DAT_600a28a0 & 0xff00ffff | 0x970000;
  _DAT_600a28ac = _DAT_600a28ac & 0x807fffff | 0x44000000;
  _DAT_600a28b8 = _DAT_600a28b8 & 0xfff00fff | 0x88000;
  return;
}

