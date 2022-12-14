/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_recorrect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_recorrect_set(void)

{
  _DAT_600a28b4 = _DAT_600a28b4 & 0xffffc1ff | 0x1500;
  _DAT_600a28bc = _DAT_600a28bc & 0xfffffebf | 0xa0;
  _DAT_600a28b0 = _DAT_600a28b0 & 0xffffc00f | 0x14a0;
  _DAT_600a2868 = _DAT_600a2868 & 0xfffff820 | 0x3aaa;
  _DAT_600a286c = _DAT_600a286c & 0xffffff | 0xf000000;
  return;
}

