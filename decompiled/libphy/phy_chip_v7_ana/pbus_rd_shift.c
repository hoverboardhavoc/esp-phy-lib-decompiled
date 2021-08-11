/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> pbus_rd_shift
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 pbus_rd_shift(int param_1,int param_2)

{
  if (param_1 == 1) {
    if (param_2 != 1) {
      return 0x12;
    }
  }
  else {
    if (param_1 == 0) {
      return 9;
    }
    if (param_1 == 2) {
      if (param_2 != 1) {
        return 0;
      }
      return 9;
    }
    if (param_1 == 3) {
      if (param_2 != 1) {
        return 9;
      }
      return 0x12;
    }
  }
  return 0;
}

