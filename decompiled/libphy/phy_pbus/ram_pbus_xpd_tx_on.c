/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_pbus.o -> ram_pbus_xpd_tx_on
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_pbus_xpd_tx_on(short param_1,undefined4 param_2)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0x1000100;
  uStack_18 = 0x1000100;
  (**(code **)(_g_phyFuns + 0x74))(0,1,0x80,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(0,2,0,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(4,2,0,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(1,1,0x7c,*(code **)(_g_phyFuns + 0x74));
  pbus_set_dco(&uStack_18);
  (**(code **)(_g_phyFuns + 0x74))(1,2,param_2,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(4,1,0xb,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(5,1,param_1 + 0x1c0,*(code **)(_g_phyFuns + 0x74));
  return;
}

