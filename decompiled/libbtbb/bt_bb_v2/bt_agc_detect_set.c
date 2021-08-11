/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_detect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_detect_set(void)

{
  _DAT_600118a0 = _DAT_600118a0 & 0xf0ffffff | 0x3000000;
  _DAT_600118a8 = _DAT_600118a8 & 0xff83ffff | 0x100000;
  _DAT_6001c080 = _DAT_6001c080 & 0xffffffc1 | 8;
  _DAT_600118ac = _DAT_600118ac & 0xff87ffff | 0x180000;
  _DAT_600118b8 = _DAT_600118b8 & 0xfffff0ff | 0x300;
  _DAT_600118c0 = _DAT_600118c0 & 0xfffff | 0x9c600000;
  _DAT_600118c4 = _DAT_600118c4 & 0xfffff | 0x9c700000;
  return;
}

