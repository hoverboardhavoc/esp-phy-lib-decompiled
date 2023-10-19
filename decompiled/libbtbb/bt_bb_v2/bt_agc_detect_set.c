/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_detect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_detect_set(void)

{
  _DAT_600a28a8 = _DAT_600a28a8 & 0xff83ffff | 0x100000;
  _DAT_600a28ac = _DAT_600a28ac & 0xff87ffff | 0x380000;
  _DAT_600a28b8 = _DAT_600a28b8 & 0xfffff0ff | 0x700;
  _DAT_600a28c0 = _DAT_600a28c0 & 0x1f | 0x9c752940;
  _DAT_600a28c4 = _DAT_600a28c4 & 0x3ff | 0x9ca7bc00;
  _DAT_600a28a0 = _DAT_600a28a0 & 0xc000ffff | 0x249c0000;
  return;
}

