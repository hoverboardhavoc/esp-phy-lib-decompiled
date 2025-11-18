/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_recorrect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_recorrect_set(void)

{
  _DAT_600c28b4 = _DAT_600c28b4 | 0x100;
  _DAT_600c28bc = _DAT_600c28bc & 0xfffffebf | 0xa0;
  _DAT_600c28b0 = _DAT_600c28b0 & 0xff83ffff | 0x700000;
  _DAT_600c2868 = _DAT_600c2868 & 0xffffffe0 | 0x383c;
  return;
}

