/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_i2c.o -> ram_chip_i2c_readReg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ram_chip_i2c_readReg(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (**(code **)(_g_phyFuns + 4))(*(code **)(_g_phyFuns + 4));
  phy_i2c_enter_critical();
  uVar2 = (**(code **)(_g_phyFuns + 0x1c))(param_1,*(code **)(_g_phyFuns + 0x1c));
  uVar3 = (**(code **)(_g_phyFuns + 0x24))(param_1,*(code **)(_g_phyFuns + 0x24));
  uVar2 = (**(code **)(_g_phyFuns + 0x28))
                    (param_1,uVar2,uVar3,param_2,*(code **)(_g_phyFuns + 0x28));
  phy_i2c_exit_critical();
  (**(code **)(_g_phyFuns + 8))(uVar1,*(code **)(_g_phyFuns + 8));
  return uVar2;
}

