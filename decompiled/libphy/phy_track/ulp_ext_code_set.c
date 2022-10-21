/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_track.o -> ulp_ext_code_set
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
    DAT_000110a3 = (undefined1)uVar1;
    DAT_000110a4 = DAT_000110a3;
    (**(code **)(_g_phyFuns + 0x1b4))(0x61,0,6,uVar1,*(code **)(_g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x00010060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x1bc))(0x61,0,5,6,6,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1b4))(0x61,0,6,param_2);
  return;
}

