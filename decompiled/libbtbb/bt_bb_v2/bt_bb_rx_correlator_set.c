/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_correlator_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_correlator_set(void)

{
  _DAT_600110fc = _DAT_600110fc & 0x81ffffff | 0x12000000;
  _DAT_60011068 = _DAT_60011068 & 0x81f | 0xcd9f860;
  _DAT_60011060 = _DAT_60011060 & 0x3ffffff | 0x10000000;
  _DAT_60011100 = _DAT_60011100 & 0xf33fffff | 0x8400000;
  _DAT_60011064 = _DAT_60011064 & 0xfc000003 | 0x208908;
  _DAT_600110f8 = _DAT_600110f8 & 0x8000001f | 0x154040;
  return;
}

