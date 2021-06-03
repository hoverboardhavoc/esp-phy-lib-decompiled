/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> get_power_db
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int get_power_db(int param_1)

{
  int iVar1;
  int iVar2;
  short sStack_14;
  short sStack_12;
  
  get_fm_sar_dout(&sStack_14,&sStack_12);
  iVar1 = (**(code **)(_g_phyFuns + 0x118))((int)sStack_14,3,*(code **)(_g_phyFuns + 0x118));
  iVar2 = (**(code **)(_g_phyFuns + 0x118))((int)sStack_12,3,*(code **)(_g_phyFuns + 0x118));
  return ((param_1 + iVar1) - iVar2) * 0x10000 >> 0x10;
}

