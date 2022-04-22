/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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
  
  (**(code **)(_g_phyFuns + 0x50))(1,*(code **)(_g_phyFuns + 0x50));
  (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
  (**(code **)(_g_phyFuns + 0x1ec))(0x3f,0,*(code **)(_g_phyFuns + 0x1ec));
  iVar1 = (**(code **)(_g_phyFuns + 0xec))(0,*(code **)(_g_phyFuns + 0xec));
  (**(code **)(_g_phyFuns + 0x1f0))(iVar1 * 8 + 0x1312c,*(code **)(_g_phyFuns + 0x1f0));
                    /* WARNING: Could not recover jumptable at 0x0001035a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0xfc))();
  return;
}

