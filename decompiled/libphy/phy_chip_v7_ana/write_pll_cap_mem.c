/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> write_pll_cap_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_pll_cap_mem(int param_1,uint param_2)

{
  _DAT_6000e148 = param_2 | _DAT_6000e0c0 & 0xffffff00;
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffd00 | param_1 * 3 & 0xffU;
  return;
}

