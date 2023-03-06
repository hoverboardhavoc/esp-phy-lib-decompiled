/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_correlator_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_correlator_set(void)

{
  _DAT_600a20fc = _DAT_600a20fc & 0x81ffffff | 0x12000000;
  _DAT_600a2068 = _DAT_600a2068 & 0x81f | 0x10d9b860;
  _DAT_600a2060 = _DAT_600a2060 & 0x3ffffff | 0x10000000;
  _DAT_600a2100 = _DAT_600a2100 & 0xf33fffff | 0x400000;
  _DAT_600a2064 = _DAT_600a2064 & 0xfc000003 | 0x310908;
  _DAT_600a20f8 = _DAT_600a20f8 & 0x8000001f | 0x214e060;
  return;
}

