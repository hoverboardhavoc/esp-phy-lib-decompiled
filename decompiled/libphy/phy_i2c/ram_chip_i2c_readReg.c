/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
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

