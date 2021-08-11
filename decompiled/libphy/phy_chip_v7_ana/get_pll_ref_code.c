/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> get_pll_ref_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_pll_ref_code(void)

{
  _DAT_00013052 = _DAT_0001308e + 600;
  _DAT_00013050 = _DAT_0001308e;
  _DAT_00013054 = _DAT_0001308e - 600;
  _DAT_00013056 = (short)(((uint)_DAT_0001308e << 3) / 10);
  return;
}

