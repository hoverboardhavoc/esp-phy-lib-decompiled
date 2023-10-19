/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_target_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_target_set(void)

{
  _DAT_600a28b0 = _DAT_600a28b0 & 0x7fffff | 0xef000000;
  _DAT_600a2898 = _DAT_600a2898 & 0xffff8000 | 0x19d4;
  _DAT_600a2840 = _DAT_600a2840 & 0xffc003ff | 0x3a8800;
  _DAT_600a2894 = _DAT_600a2894 & 0xff803fff | 0x710000;
  _DAT_600a28b4 = _DAT_600a28b4 & 0x7fffff | 0xe2000000;
  return;
}

