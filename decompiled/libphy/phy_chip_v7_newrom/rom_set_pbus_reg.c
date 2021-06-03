/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_set_pbus_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_set_pbus_reg(void)

{
  _DAT_600060e0 = 0x5040300;
  _DAT_600060e4 = 0xd0c0b06;
  _DAT_600060e8 = 0x11100f0e;
  _DAT_600060ec = 0x17161512;
  _DAT_600060f0 = 0x1f1e1d18;
  _DAT_600060f4 = 0x23222120;
  return;
}

