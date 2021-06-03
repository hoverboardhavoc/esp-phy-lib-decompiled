/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_agc_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_agc_reg_init(uint param_1,int param_2)

{
  _DAT_6001c13c = _DAT_6001c13c & 0xfe03ffff | 0x1300000;
  _DAT_6001c094 = _DAT_6001c094 & 0xfffffe03 | 0x124;
  _DAT_6001c0a4 = param_2 << 0xf | 0x2346;
  _DAT_6001c02c = (param_1 & 0xcd007f) << 8 | _DAT_6001c02c & 0x7f80ff | 0x32000000;
  _DAT_6001c05c = _DAT_6001c05c & 0xfff80000 | 3000;
  return;
}

