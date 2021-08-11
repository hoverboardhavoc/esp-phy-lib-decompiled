/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_target_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_target_set(void)

{
  _DAT_600118b0 = _DAT_600118b0 & 0x3fff | 0xea750000;
  _DAT_60011898 = _DAT_60011898 & 0xffff8000 | 0x19d4;
  _DAT_6001189c = _DAT_6001189c & 0xff000000 | 0x33a9d4;
  _DAT_60011840 = _DAT_60011840 & 0xffc003ff | 0x3a8800;
  _DAT_60011894 = _DAT_60011894 & 0x3fff | 0xea750000;
  _DAT_600118b4 = _DAT_600118b4 & 0x3fff | 0xea750000;
  return;
}

