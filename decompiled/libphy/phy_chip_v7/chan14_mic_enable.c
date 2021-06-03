/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> chan14_mic_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x000123d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chan14_mic_enable(int param_1,int param_2)

{
  DAT_00014016 = (undefined1)param_1;
  if (param_1 == 0) {
    _DAT_6001c400 = _DAT_6001c400 | 0x6000;
    ram_wifi_set_tx_gain(DAT_00014122,0);
    return;
  }
  DAT_00014014 = (undefined1)param_2;
  if (0x30 < param_2) {
    DAT_00014014 = 0x30;
  }
  return;
}

