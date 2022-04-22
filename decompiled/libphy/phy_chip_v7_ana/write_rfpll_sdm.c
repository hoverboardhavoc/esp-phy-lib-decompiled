/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_ana.o -> write_rfpll_sdm
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_rfpll_sdm(undefined1 *param_1)

{
  (**(code **)(_g_phyFuns + 0x1b4))(99,1,0,7,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(99,1,3,*param_1,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(99,1,4,param_1[1],*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(99,1,5,param_1[2],*(code **)(_g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x00010492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1b4))(99,1,0,0x17);
  return;
}

