/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_track.o -> rfpll_cap_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfpll_cap_track(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(_g_phyFuns + 0x100))
                    ((int)_DAT_00011096 - (int)_DAT_00011098,*(code **)(_g_phyFuns + 0x100));
  if (9 < iVar1) {
    (**(code **)(_g_phyFuns + 0x228))(*(code **)(_g_phyFuns + 0x228));
    uVar2 = rfpll_cap_correct(DAT_0001109f);
    if (param_1 != 0) {
      phy_printf("temp=%d,%d,delta=%d\n",(int)_DAT_00011096,(int)_DAT_00011098,uVar2);
    }
    _DAT_00011098 = _DAT_00011096;
    if (DAT_000110a3 != '\0') {
      ulp_code_track(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001030c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x224))();
    return;
  }
  return;
}

