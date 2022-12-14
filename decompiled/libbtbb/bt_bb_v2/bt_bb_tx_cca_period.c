/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_tx_cca_period
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_tx_cca_period(int param_1,int param_2)

{
  _DAT_600a20b8 =
       (param_1 + 0x1ffffffb) * 0x1000 - 0x200U & 0xffe00 |
       ((param_1 - param_2) + 0x1ffffffb) * 0x800000 & 0x7f800000U | _DAT_600a20b8 & 0x800001ff;
  return;
}

