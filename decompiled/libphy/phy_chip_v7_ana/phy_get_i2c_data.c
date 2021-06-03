/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_ana.o -> phy_get_i2c_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_i2c_data(void)

{
  DAT_000120c9 = 0x1b;
  _DAT_000120ca = 0x6877;
  _DAT_000120cc = 0x5fc80a74;
  _DAT_000120d0 = 0x7705740a;
  _DAT_000120d4 = 0x3002f000;
  _DAT_000120d8 = 0x4191f3b0;
  DAT_000120dc = 0x26;
  return;
}

