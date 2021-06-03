/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_phy_close_rf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_phy_close_rf(void)

{
  noise_check_loop(1,1);
  (**(code **)(_g_phyFuns + 0xe0))(*(code **)(_g_phyFuns + 0xe0));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,0,2,6,*(code **)(_g_phyFuns + 0x1b4));
  _DAT_6000e040 = _DAT_6000e040 & 0xfffffff3 | 8;
  return;
}

