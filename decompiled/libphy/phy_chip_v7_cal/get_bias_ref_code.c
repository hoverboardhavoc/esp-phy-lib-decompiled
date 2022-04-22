/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_cal.o -> get_bias_ref_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 get_bias_ref_code(void)

{
  undefined4 uVar1;
  
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,2,1,1,1,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,7,3,2,1,*(code **)(_g_phyFuns + 0x1bc));
  uVar1 = (**(code **)(_g_phyFuns + 0x150))(3,*(code **)(_g_phyFuns + 0x150));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,2,1,1,0,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,7,3,2,0,*(code **)(_g_phyFuns + 0x1bc));
  return uVar1;
}

