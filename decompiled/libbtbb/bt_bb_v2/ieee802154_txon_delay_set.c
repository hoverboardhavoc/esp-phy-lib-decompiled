/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> ieee802154_txon_delay_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_txon_delay_set(void)

{
  _DAT_600c3104 = _DAT_600c3104 & 0xfffffc00 | 0x28;
  _DAT_600c3110 = _DAT_600c3110 & 0xfffff800 | 0x32;
  _DAT_600c3114 = _DAT_600c3114 & 0xfffffc00 | 0x7a;
  _DAT_600c310c = _DAT_600c310c & 0xffffffc0 | 1;
  return;
}

