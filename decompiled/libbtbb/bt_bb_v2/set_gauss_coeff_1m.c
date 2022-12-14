/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libbtbb -> bt_bb_v2.o -> set_gauss_coeff_1m
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_gauss_coeff_1m(void)

{
  _DAT_600a20e0 = _DAT_600a20e0 & 3 | 0x1128588;
  _DAT_600a20e4 = _DAT_600a20e4 & 3 | 0x77bcccfc;
  _DAT_600a20e8 = _DAT_600a20e8 & 0x3ff | 0x98185c00;
  _DAT_600a20ec = _DAT_600a20ec & 0x3ff | 0xe0ddf000;
  return;
}

