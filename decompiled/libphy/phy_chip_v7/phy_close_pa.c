/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> phy_close_pa
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_close_pa(int param_1)

{
  if (param_1 != 0) {
    _DAT_60006110 = _DAT_60006110 & 0xfffff3ff | 0x800;
    _DAT_6000610c = _DAT_6000610c & 0xffffffeb;
    return;
  }
  _DAT_6000610c = _DAT_6000610c | 0x14;
  _DAT_60006110 = _DAT_60006110 & 0xfffff3ff;
  return;
}

