/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_set_corr_thresh_le
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_set_corr_thresh_le(uint param_1,uint param_2,int param_3)

{
  _DAT_600a2064 = (param_2 & 0x3f) << 0xe | (param_1 & 0x3f) << 0x14 | _DAT_600a2064 & 0xfc003fff;
  _DAT_600a20f8 = (param_2 & 0x3f) << 5 | (param_2 & 0x3f) << 0x13 | _DAT_600a20f8 & 0xfe07f81f;
  _DAT_600a2060 = _DAT_600a2060 & 0x3ffffff | param_3 << 0x1a;
  return;
}

