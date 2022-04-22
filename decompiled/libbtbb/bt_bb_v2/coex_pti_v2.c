/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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
  _DAT_60031530 = _DAT_60031530 | 0xf1;
  _DAT_60031150 = _DAT_60031150 | 0xf1;
  _DAT_60031048 = _DAT_60031048 | 0x1f0;
  return;
}

