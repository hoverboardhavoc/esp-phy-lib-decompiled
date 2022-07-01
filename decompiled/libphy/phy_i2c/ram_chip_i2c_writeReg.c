/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_i2c.o -> ram_chip_i2c_writeReg
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
  
  uVar1 = (**(code **)(_g_phyFuns + 4))(*(code **)(_g_phyFuns + 4));
  phy_i2c_enter_critical();
  iVar2 = (**(code **)(_g_phyFuns + 0x24))(param_1,*(code **)(_g_phyFuns + 0x24));
  puVar3 = (uint *)((iVar2 + 0x18013a00) * 4);
  do {
  } while ((int)(*puVar3 << 6) < 0);
  *puVar3 = param_3 << 0x10 | param_1 | param_2 << 8 | 0x5000000;
  do {
  } while ((int)(*puVar3 << 6) < 0);
  phy_i2c_exit_critical();
                    /* WARNING: Could not recover jumptable at 0x000100f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 8))(uVar1);
  return;
}

