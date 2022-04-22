/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_newrom.o -> read_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short read_pll_cap(void)

{
  short sVar1;
  short sVar2;
  
  sVar1 = (**(code **)(_g_phyFuns + 0x1ac))(0x62,1,5,*(code **)(_g_phyFuns + 0x1ac));
  sVar2 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,7,2,2,*(code **)(_g_phyFuns + 0x1b8));
  return sVar2 * 0x100 + sVar1;
}

