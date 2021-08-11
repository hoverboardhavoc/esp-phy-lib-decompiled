/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> phy_get_i2c_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_i2c_data(void)

{
  DAT_0001306d = 0x1b;
  _DAT_0001306e = 0x6877;
  _DAT_00013070 = 0x5fc80a74;
  _DAT_00013074 = 0x7705740a;
  _DAT_00013078 = 0x3002f000;
  _DAT_0001307c = 0x4191f3b0;
  DAT_00013080 = 0x26;
  return;
}

