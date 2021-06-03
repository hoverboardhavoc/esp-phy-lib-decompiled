/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_ana.o -> set_chan_freq_hw_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_chan_freq_hw_init(uint param_1,uint param_2)

{
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [12];
  
  _DAT_000120ea = get_bias_ref_code();
  get_pll_ref_code();
  get_rf_freq_init();
  if (-1 < (int)(_DAT_0001212c << 0x12)) {
    freq_get_i2c_data(auStack_70,auStack_64,auStack_58,auStack_1c,auStack_40,auStack_4c,auStack_34,9
                     );
    freq_i2c_write_set(auStack_70,auStack_64,auStack_58,auStack_1c,auStack_40,auStack_4c,auStack_34,
                       9);
    _DAT_6003509c = _DAT_6003509c & 0xffff | 0xc800000;
    _DAT_0001212c = _DAT_0001212c | 0x2000;
  }
  _DAT_6000e0c4 =
       (param_2 & 0xf) << 0x14 | (param_1 & 0xf) << 0x10 | _DAT_6000e0c4 & 0xdf00ffff | 0x41000000;
  return;
}

