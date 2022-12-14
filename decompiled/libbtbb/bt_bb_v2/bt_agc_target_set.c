/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_target_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_target_set(void)

{
  _DAT_600a28b0 = _DAT_600a28b0 & 0x3fff | 0xe7738000;
  _DAT_600a2898 = _DAT_600a2898 & 0xffff8000 | 0x19ce;
  _DAT_600a289c = _DAT_600a289c & 0xff000000 | 0x339dce;
  _DAT_600a2840 = _DAT_600a2840 & 0xffc003ff | 0x39c800;
  _DAT_600a2894 = _DAT_600a2894 & 0x3fff | 0xe7738000;
  _DAT_600a28b4 = _DAT_600a28b4 & 0x3fff | 0xe7738000;
  return;
}

