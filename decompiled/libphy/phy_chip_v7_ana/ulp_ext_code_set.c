/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_ana.o -> ulp_ext_code_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ulp_ext_code_set(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (**(code **)(_g_phyFuns + 0x1ac))(0x61,0,4,*(code **)(_g_phyFuns + 0x1ac));
    DAT_000120a3 = (undefined1)uVar1;
    DAT_000120a4 = DAT_000120a3;
    (**(code **)(_g_phyFuns + 0x1b4))(0x61,0,6,uVar1,*(code **)(_g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x0001010e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x1bc))(0x61,0,5,6,6,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1b4))(0x61,0,6,param_2);
  return;
}

