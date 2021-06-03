/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> read_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short read_pll_cap(void)

{
  short sVar1;
  short sVar2;
  
  sVar1 = (**(code **)(_g_phyFuns + 0x1ac))(0x62,1,1,*(code **)(_g_phyFuns + 0x1ac));
  sVar2 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,2,4,4,*(code **)(_g_phyFuns + 0x1b8));
  return sVar2 * 0x100 + sVar1;
}

