/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_get_channel_pwr_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_get_channel_pwr_set(uint param_1)

{
  do {
  } while (-1 < (int)(_DAT_600c001c & 0xffefff00 | 0x40000000 | param_1 & 0xff | 0x100));
  _DAT_600c001c = _DAT_600c001c & 0xffeffe00 | 0x40000000 | param_1 & 0xff;
  _DAT_600c2004 = _DAT_600c2004 | 0x300;
  return;
}

