/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
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
  (**(code **)(_g_phyFuns + 0x74))(4,1,0x83,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(5,1,param_1 + 0x1c0,*(code **)(_g_phyFuns + 0x74));
  return;
}

