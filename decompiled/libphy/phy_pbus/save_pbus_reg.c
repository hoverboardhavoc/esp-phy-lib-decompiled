/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_pbus.o -> save_pbus_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void save_pbus_reg(void)

{
  _DAT_00011038 = _DAT_600a08e0;
  _DAT_0001103c = _DAT_600a08e4;
  _DAT_00011040 = _DAT_600a08e8;
  _DAT_00011044 = _DAT_600a08ec;
  _DAT_00011048 = _DAT_600a08f0;
  _DAT_0001104c = _DAT_600a08f4;
  return;
}

