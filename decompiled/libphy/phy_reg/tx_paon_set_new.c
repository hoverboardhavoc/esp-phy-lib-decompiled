/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_reg.o -> tx_paon_set_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_paon_set_new(void)

{
  _DAT_600a7c00 = _DAT_600a7c00 & 0xffe007ff | 0xa000;
  _DAT_600a08f8 = _DAT_600a08f8 & 0xffff00ff | 0x5000;
  _DAT_600a7c6c = 0x140c81e;
  _DAT_600a7c30 = _DAT_600a7c30 & 0xfffffc00 | 0x1e;
  return;
}

