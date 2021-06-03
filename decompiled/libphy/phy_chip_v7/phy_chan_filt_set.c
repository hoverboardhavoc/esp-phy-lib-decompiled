/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> phy_chan_filt_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_chan_filt_set(int param_1,int param_2)

{
  if (param_1 == 0) {
    _DAT_6001cc0c = _DAT_6001cc0c | 0x10000000;
    _DAT_6001cd08 = _DAT_6001cd08 & 0xfffffff8;
    _DAT_6001cd04 = _DAT_6001cd04 & 0xfffffff8;
  }
  else {
    _DAT_6001cc0c = _DAT_6001cc0c & 0xefffffff;
  }
  if (param_2 != 0) {
    _DAT_6001c074 = _DAT_6001c074 & 0xffffdfff;
    return;
  }
  _DAT_6001c074 = _DAT_6001c074 | 0x2000;
  return;
}

