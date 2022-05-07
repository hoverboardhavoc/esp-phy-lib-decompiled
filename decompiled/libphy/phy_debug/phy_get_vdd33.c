/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
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
  
  (**(code **)(_g_phyFuns + 0x78))(*(code **)(_g_phyFuns + 0x78));
  (**(code **)(_g_phyFuns + 0x70))(5,1,0x80,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,0,0xd,7,7,1,*(code **)(_g_phyFuns + 0x58));
  iVar1 = (**(code **)(_g_phyFuns + 0xd4))(3,*(code **)(_g_phyFuns + 0xd4));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,0,0xd,7,7,0,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x70))(5,1,0,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x7c))(*(code **)(_g_phyFuns + 0x7c));
  return (iVar1 * 0x826) / 1000 & 0xffff;
}

