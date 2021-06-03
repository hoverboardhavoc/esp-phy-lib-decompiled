/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> phy_get_vdd33
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint phy_get_vdd33(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = get_bias_ref_code();
  (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
  (**(code **)(_g_phyFuns + 0x1cc))(4,1,2,*(code **)(_g_phyFuns + 0x1cc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,9,7,7,1,*(code **)(_g_phyFuns + 0x1bc));
  uVar2 = (**(code **)(_g_phyFuns + 0x150))(3,*(code **)(_g_phyFuns + 0x150));
  if (iVar1 != 0) {
    uVar2 = (int)(uVar2 * 0xf00) / iVar1 & 0xffff;
  }
  (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,9,7,7,0,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1cc))(4,1,0,*(code **)(_g_phyFuns + 0x1cc));
  (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
  return uVar2;
}

