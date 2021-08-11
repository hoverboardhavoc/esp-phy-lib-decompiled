/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_restart_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_restart_set(void)

{
  _DAT_60011888 = _DAT_60011888 & 0xefffffff;
  _DAT_600118a4 = _DAT_600118a4 & 0xf8007fff | 0xe60000;
  _DAT_600118ac = _DAT_600118ac & 0xfffc0000 | 0x31e74;
  _DAT_600118b8 = _DAT_600118b8 & 0xfffff | 0x3f100000;
  _DAT_600118bc = _DAT_600118bc & 0xf80001ff | 0xf9249200;
  _DAT_60011884 = _DAT_60011884 & 0xffffff | 0xf4800000;
  return;
}

