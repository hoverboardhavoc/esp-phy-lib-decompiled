/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_i2c.o -> bias_reg_set
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
    (**(code **)(_g_phyFuns + 0x60))(0x6a,1,0,3,0,7);
    pcVar2 = *(code **)(_g_phyFuns + 0x60);
    uVar1 = 7;
  }
  else {
    (**(code **)(_g_phyFuns + 0x60))(0x6a,1,0,3,0,0xf);
    pcVar2 = *(code **)(_g_phyFuns + 0x60);
    uVar1 = 0xc;
  }
  (*pcVar2)(0x6a,1,1,3,0,uVar1,pcVar2);
  (**(code **)(_g_phyFuns + 0x60))(0x6a,1,0,7,4,7,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x61,0,8,0,0,0,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x61,0,8,4,4,0,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x61,0,7,5,5,0,*(code **)(_g_phyFuns + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x60))(0x61,0,7,5,5,1);
  return;
}

