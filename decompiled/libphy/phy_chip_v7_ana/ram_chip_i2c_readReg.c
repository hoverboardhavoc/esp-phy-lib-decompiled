/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_ana.o -> ram_chip_i2c_readReg
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
  
  uVar1 = (**(code **)(_g_phyFuns + 0x184))(*(code **)(_g_phyFuns + 0x184));
  phy_i2c_enter_critical();
  uVar2 = (**(code **)(_g_phyFuns + 0x178))(param_1,*(code **)(_g_phyFuns + 0x178));
  uVar3 = (**(code **)(_g_phyFuns + 0x180))(param_1,*(code **)(_g_phyFuns + 0x180));
  uVar2 = (**(code **)(_g_phyFuns + 0x18c))
                    (param_1,uVar2,uVar3,param_2,*(code **)(_g_phyFuns + 0x18c));
  phy_i2c_exit_critical();
  (**(code **)(_g_phyFuns + 0x188))(uVar1,*(code **)(_g_phyFuns + 0x188));
  return uVar2;
}

