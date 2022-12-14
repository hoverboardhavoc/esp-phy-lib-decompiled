/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_v2_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_v2_set(void)

{
  _DAT_600a2058 = _DAT_600a2058 | 0xc;
  _DAT_600a2854 = _DAT_600a2854 | 1;
  _DAT_600a282c = _DAT_600a282c & 0xfffff01f | 0x140;
  _DAT_600a2828 = _DAT_600a2828 & 0xf0003f80 | 0x5a2c02d;
  _DAT_600a28c8 = _DAT_600a28c8 & 0x80001fff | 0x7db4c000;
  _DAT_600a28d0 = _DAT_600a28d0 & 0xf | 0x3c5050a0;
  _DAT_600a28d4 = _DAT_600a28d4 & 0x1ffffff | 0x14000000;
  _DAT_600a28a0 = _DAT_600a28a0 & 0xffff0000 | 0x5a00;
  _DAT_600a2824 = _DAT_600a2824 & 0xf01fffff | 0x1400000;
  return;
}

