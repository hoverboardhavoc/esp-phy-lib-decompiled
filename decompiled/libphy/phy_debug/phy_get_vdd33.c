/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_debug.o -> phy_get_vdd33
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint phy_get_vdd33(void)

{
  int iVar1;
  
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x74))(5,1,0x80,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,0xd,1,*(code **)(_g_phyFuns + 0x58));
  iVar1 = get_sar2_vol_new(3);
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,0xd,0,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x74))(5,1,0,*(code **)(_g_phyFuns + 0x74));
  pbus_workmode();
  return (iVar1 * 0xf8c) / 1000 & 0xffff;
}

