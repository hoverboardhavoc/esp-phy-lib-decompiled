/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_set_rx_comp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_set_rx_comp(uint param_1,uint param_2,uint param_3,uint param_4)

{
  _DAT_600c2844 =
       (param_2 & 0x1f) << 0xe |
       (param_3 & 0x1f) << 0x13 |
       (param_4 & 0x1f) << 0x18 |
       (param_1 & 0x7f) << 7 | _DAT_600c2844 & 0xe0000000 | param_1 & 0x7f;
  return;
}

