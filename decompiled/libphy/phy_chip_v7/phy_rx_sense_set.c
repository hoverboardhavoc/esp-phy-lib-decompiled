/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> phy_rx_sense_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_rx_sense_set(uint param_1)

{
  _DAT_6001c010 = _DAT_6001c010 & 0x7fffff | param_1 << 0x17;
  _DAT_6001c014 = _DAT_6001c014 & 0x7fffff | param_1 << 0x17;
  _DAT_6001c044 = _DAT_6001c044 & 0xffffff00 | param_1;
  if (param_1 == 0) {
    _DAT_6001c108 = _DAT_6001c108 | 0x200;
  }
  else {
    _DAT_6001c108 = _DAT_6001c108 & 0xfffffdff;
  }
  return;
}

