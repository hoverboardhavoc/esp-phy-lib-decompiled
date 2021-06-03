/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> txcal_debuge_mode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txcal_debuge_mode(void)

{
  int iVar1;
  
  (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
  (**(code **)(_g_phyFuns + 0x1ec))(0x3f,0,*(code **)(_g_phyFuns + 0x1ec));
  iVar1 = (**(code **)(_g_phyFuns + 0xec))(0,*(code **)(_g_phyFuns + 0xec));
  (**(code **)(_g_phyFuns + 0x1f0))(iVar1 * 8 + 0x1312c,*(code **)(_g_phyFuns + 0x1f0));
  (**(code **)(_g_phyFuns + 0x50))(1,*(code **)(_g_phyFuns + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000102fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0xfc))();
  return;
}

