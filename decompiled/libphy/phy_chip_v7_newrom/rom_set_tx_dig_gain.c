/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_set_tx_dig_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_set_tx_dig_gain(int param_1,uint param_2)

{
  if (param_1 != 0) {
    _DAT_60006000 = _DAT_60006000 & 0xfbffffff;
    _DAT_60006088 = (param_2 & 0xff) << 8 | _DAT_60006088 & 0xffff00ff;
    return;
  }
  _DAT_60006000 = _DAT_60006000 | 0x4000000;
  _DAT_60006088 = _DAT_60006088 & 0xffff00ff;
  return;
}

