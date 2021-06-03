/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_fe_i2c_reg_renew
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_fe_i2c_reg_renew(void)

{
  _DAT_6000e058 = _DAT_6000e058 & 0xffffff00 | 0x10;
  _DAT_6000e060 = _DAT_6000e060 & 0xffff00ff | 0x800;
  _DAT_60006000 = _DAT_60006000 | 0xc000000;
  return;
}

