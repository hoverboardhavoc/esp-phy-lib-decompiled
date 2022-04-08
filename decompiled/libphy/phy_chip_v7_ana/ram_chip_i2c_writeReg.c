/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_ana.o -> ram_chip_i2c_writeReg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_chip_i2c_writeReg(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  
  uVar1 = (**(code **)(_g_phyFuns + 0x184))(*(code **)(_g_phyFuns + 0x184));
  phy_i2c_enter_critical();
  iVar2 = (**(code **)(_g_phyFuns + 0x180))(param_1,*(code **)(_g_phyFuns + 0x180));
  puVar3 = (uint *)((iVar2 + 0x18003800) * 4);
  *puVar3 = param_3 << 0x10 | param_1 | param_2 << 8 | 0x5000000;
  do {
  } while ((int)(*puVar3 << 6) < 0);
  phy_i2c_exit_critical();
                    /* WARNING: Could not recover jumptable at 0x00010354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x188))(uVar1);
  return;
}

