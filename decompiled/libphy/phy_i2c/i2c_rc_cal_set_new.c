/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_i2c.o -> i2c_rc_cal_set_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_rc_cal_set_new(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 6;
  if ((phy_param != '\x02') && (uVar1 = 5, phy_param != '\x01')) {
    uVar1 = 10;
  }
  (**(code **)(_g_phyFuns + 0x58))(0x6b,0,0xb,5,4,param_1,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,0,8,7,3,param_2,*(code **)(_g_phyFuns + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x58))(0x6b,0,0xd,5,2,uVar1);
  return;
}

