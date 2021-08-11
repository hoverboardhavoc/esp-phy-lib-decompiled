/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> pbus_set_rxgain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_set_rxgain(uint param_1)

{
  pbus_force_test(1,2,param_1 >> 10 & 0xc0 | param_1 >> 3 & 0x100 | param_1 >> 10 & 0x3c);
  do {
  } while (_DAT_60006110 < 0);
  _DAT_60006104 = (param_1 >> 0xe & 0x1f0 | 7) << 6 | 0x8000 | _DAT_60006104 & 0xfffe0001;
  return;
}

