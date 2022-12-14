/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_reg.o -> rx_11b_opt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rx_11b_opt(void)

{
  _DAT_600a7044 = _DAT_600a7044 & 0xffffc0ff | 0x3f1a00;
  _DAT_600a7124 = _DAT_600a7124 & 0xffff03f0 | 0x6c03;
  _DAT_600a8004 = _DAT_600a8004 & 0xffff0fff | 0x9000;
  _DAT_600a7104 = _DAT_600a7104 & 0xfffffe00 | 0x1e2;
  return;
}

