/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_ana.o -> get_pll_ref_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_pll_ref_code(void)

{
  _DAT_000120ae = _DAT_000120ea + 600;
  _DAT_000120ac = _DAT_000120ea;
  _DAT_000120b0 = _DAT_000120ea - 600;
  _DAT_000120b2 = (short)(((uint)_DAT_000120ea << 3) / 10);
  return;
}

