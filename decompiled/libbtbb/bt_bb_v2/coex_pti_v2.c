/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libbtbb -> bt_bb_v2.o -> coex_pti_v2
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void coex_pti_v2(void)

{
  _DAT_6001c080 = _DAT_6001c080 & 0xffffff3f;
  _DAT_60035098 = _DAT_60035098 & 0xffff | 0x6400000;
  _DAT_6003509c = 0x140064;
  _DAT_60035084 = _DAT_60035084 & 0xf0f000ff | 0xc003c01;
  return;
}

