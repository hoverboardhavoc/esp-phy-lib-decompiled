/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_i2c.o -> i2c_rc_set_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_rc_set_reg(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,0xb,5,4,param_2,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,8,7,3,param_3,*(code **)(_g_phyFuns + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,0xd,5,2,param_1);
  return;
}

