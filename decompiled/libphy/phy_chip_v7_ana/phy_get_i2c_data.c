/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7_ana.o -> phy_get_i2c_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_i2c_data(void)

{
  DAT_000120c1 = 0x1b;
  _DAT_000120c2 = 0x877;
  _DAT_000120c4 = 0x5f080a64;
  _DAT_000120c8 = 0x7f05740a;
  _DAT_000120cc = 0x3f02f000;
  _DAT_000120d0 = 0x4191f3a8;
  DAT_000120d4 = 0x26;
  return;
}

