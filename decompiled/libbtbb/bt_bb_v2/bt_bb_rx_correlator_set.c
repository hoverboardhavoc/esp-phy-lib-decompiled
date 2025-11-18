/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_correlator_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_correlator_set(void)

{
  _DAT_600c2114 = _DAT_600c2114 & 0xf00000ff | 0x8aa600;
  _DAT_600c2068 = _DAT_600c2068 & 0x81f | 0x4d9b060;
  _DAT_600c2100 = _DAT_600c2100 & 0xf33fffff | 0x400000;
  _DAT_600c2064 = _DAT_600c2064 & 0xfc003f03 | 0x518008;
  _DAT_600c20f8 = _DAT_600c20f8 & 0x8000001f | 0x234f0c0;
  _DAT_600c2060 = _DAT_600c2060 & 0xff | 0x10208200;
  return;
}

