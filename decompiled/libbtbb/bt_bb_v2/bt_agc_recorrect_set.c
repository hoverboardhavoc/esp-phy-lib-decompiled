/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_recorrect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_recorrect_set(void)

{
  _DAT_600118b4 = _DAT_600118b4 & 0xffffc1ff | 0x1500;
  _DAT_600118bc = _DAT_600118bc | 0x1e0;
  _DAT_600118b0 = _DAT_600118b0 & 0xffffc00f | 0x1500;
  _DAT_60011868 = _DAT_60011868 & 0xffffd820 | 0x1aaa;
  _DAT_6001186c = _DAT_6001186c & 0xffffff | 0xf000000;
  return;
}

