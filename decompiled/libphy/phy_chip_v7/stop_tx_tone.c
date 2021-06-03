/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> stop_tx_tone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void stop_tx_tone(int param_1)

{
  if (param_1 == 2) {
    _DAT_60006044 = _DAT_60006044 & 0xfffbffff;
  }
  else if (param_1 == 3) {
    _DAT_6000604c = _DAT_6000604c & 0xfffbffff;
  }
  else if (param_1 == 1) {
    _DAT_60006040 = _DAT_60006040 & 0xfffbffff;
  }
  else {
    _DAT_60006040 = _DAT_60006040 & 0xfffbffff;
    _DAT_60006044 = _DAT_60006044 & 0xfffbffff;
    _DAT_6000604c = _DAT_6000604c & 0xfffbffff;
  }
  _DAT_60006000 = _DAT_60006000 | 0x4000000;
  _DAT_600061e4 = _DAT_600061e4 & 0xfffffbff;
  return;
}

