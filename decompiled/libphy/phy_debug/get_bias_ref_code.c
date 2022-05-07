/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
 * Source: libphy -> phy_debug.o -> get_bias_ref_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 get_bias_ref_code(void)

{
  undefined4 uVar1;
  
  (**(code **)(_g_phyFuns + 0x58))(0x6b,0,0xb,1,1,1,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,0,5,6,4,1,*(code **)(_g_phyFuns + 0x58));
  uVar1 = (**(code **)(_g_phyFuns + 0xd4))(3,*(code **)(_g_phyFuns + 0xd4));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,0,0xb,1,1,0,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,0,5,6,4,0,*(code **)(_g_phyFuns + 0x58));
  return uVar1;
}

