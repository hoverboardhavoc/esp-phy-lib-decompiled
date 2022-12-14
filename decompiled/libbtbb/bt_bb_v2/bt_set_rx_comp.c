/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libbtbb -> bt_bb_v2.o -> bt_set_rx_comp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_set_rx_comp(uint param_1,uint param_2,uint param_3,uint param_4)

{
  _DAT_600a2844 =
       (param_2 & 0x1f) << 0xe |
       (param_3 & 0x1f) << 0x13 |
       (param_4 & 0x1f) << 0x18 |
       (param_1 & 0x7f) << 7 | _DAT_600a2844 & 0xe0000000 | param_1 & 0x7f;
  return;
}

