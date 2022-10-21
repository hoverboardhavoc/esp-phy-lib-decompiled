/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
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
  
  uVar1 = (**(code **)(_g_phyFuns + 0x184))(*(code **)(_g_phyFuns + 0x184));
  phy_i2c_enter_critical();
  iVar2 = (**(code **)(_g_phyFuns + 0x180))(param_1,*(code **)(_g_phyFuns + 0x180));
  puVar3 = (uint *)((iVar2 + 0x18003800) * 4);
  *puVar3 = param_3 << 0x10 | param_1 | param_2 << 8 | 0x5000000;
  do {
  } while ((int)(*puVar3 << 6) < 0);
  phy_i2c_exit_critical();
                    /* WARNING: Could not recover jumptable at 0x00010202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x188))(uVar1);
  return;
}

