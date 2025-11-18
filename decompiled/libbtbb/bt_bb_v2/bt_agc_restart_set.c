/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_restart_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_restart_set(void)

{
  _DAT_600c28e0 = 0x14141414;
  _DAT_600c28e4 = _DAT_600c28e4 & 0xffffff | 0x19000000;
  _DAT_600c28ec = 0x2d2dd3d3;
  _DAT_600c28f0 = _DAT_600c28f0 & 0xffff | 0xa6a60000;
  _DAT_600c2900 = _DAT_600c2900 & 0xfff | 0x66666000;
  _DAT_600c28e8 = _DAT_600c28e8 & 0xff0003ff | 0xe70c00;
  _DAT_600c28dc = _DAT_600c28dc | 0x10000000;
  return;
}

