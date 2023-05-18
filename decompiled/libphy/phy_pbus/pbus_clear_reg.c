/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
 * Source: libphy -> phy_pbus.o -> pbus_clear_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_clear_reg(void)

{
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x74))(4,1,0,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(4,2,0,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(5,1,0,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(5,2,0,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(0,1,0,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(0,2,0,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(1,1,0,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(1,2,0,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(2,1,0x100,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(3,1,0x100,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(2,2,0x100,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(3,2,0x100,*(code **)(_g_phyFuns + 0x74));
  pbus_workmode();
  return;
}

