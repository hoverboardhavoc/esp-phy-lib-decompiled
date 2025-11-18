/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_tx_cca_period
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_tx_cca_period(int param_1,int param_2)

{
  _DAT_600c20b8 =
       (param_1 + 0x1ffffffb) * 0x1000 - 0x200U & 0xffe00 |
       ((param_1 - param_2) + 0x1ffffffb) * 0x800000 & 0x7f800000U | _DAT_600c20b8 & 0x800001ff;
  return;
}

