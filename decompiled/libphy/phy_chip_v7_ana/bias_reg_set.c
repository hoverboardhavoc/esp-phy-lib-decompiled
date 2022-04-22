/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_ana.o -> bias_reg_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bias_reg_set(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_1 == 0) {
    (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,1,3,0,7);
    pcVar2 = *(code **)(_g_phyFuns + 0x1bc);
    uVar1 = 7;
  }
  else {
    (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,1,3,0,0xc);
    pcVar2 = *(code **)(_g_phyFuns + 0x1bc);
    uVar1 = 0xc;
  }
  (*pcVar2)(0x6a,0,0,7,4,uVar1,pcVar2);
  (**(code **)(_g_phyFuns + 0x1bc))(0x61,0,8,0,0,0,*(code **)(_g_phyFuns + 0x1bc));
                    /* WARNING: Could not recover jumptable at 0x00010a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1bc))(0x61,0,8,4,4,0);
  return;
}

