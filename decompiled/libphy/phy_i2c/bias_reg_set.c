/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
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
    (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,3,0,7);
    (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,1,3,0,7,*(code **)(_g_phyFuns + 0x1bc));
    pcVar2 = *(code **)(_g_phyFuns + 0x1bc);
    uVar1 = 7;
  }
  else {
    (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,3,0,0xc);
    (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,1,3,0,0xc,*(code **)(_g_phyFuns + 0x1bc));
    pcVar2 = *(code **)(_g_phyFuns + 0x1bc);
    uVar1 = 0xc;
  }
  (*pcVar2)(0x6a,0,0,7,4,uVar1,pcVar2);
  (**(code **)(_g_phyFuns + 0x1bc))(0x61,0,8,0,0,0,*(code **)(_g_phyFuns + 0x1bc));
                    /* WARNING: Could not recover jumptable at 0x00010810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1bc))(0x61,0,8,4,4,0);
  return;
}

