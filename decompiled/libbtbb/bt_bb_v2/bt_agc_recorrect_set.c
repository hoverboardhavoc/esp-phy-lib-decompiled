/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_recorrect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_recorrect_set(void)

{
  _DAT_600a28b4 = _DAT_600a28b4 & 0xffffc1ff | 0x1500;
  _DAT_600a28bc = _DAT_600a28bc & 0xfffffebf | 0xa0;
  _DAT_600a2868 = _DAT_600a2868 & 0xfffff820 | 0x3bef;
  _DAT_600a286c = _DAT_600a286c & 0xffffff | 0xf000000;
  _DAT_600a28b0 = _DAT_600a28b0 & 0xffffc00f | 0x1f20;
  return;
}

