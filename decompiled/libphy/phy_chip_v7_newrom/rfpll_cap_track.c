/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_newrom.o -> rfpll_cap_track
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
                    ((int)_DAT_00012096 - (int)_DAT_00012098,*(code **)(_g_phyFuns + 0x100));
  if (9 < iVar1) {
    (**(code **)(_g_phyFuns + 0x228))(*(code **)(_g_phyFuns + 0x228));
    uVar2 = rfpll_cap_correct(DAT_0001209f);
    if (param_1 != 0) {
      phy_printf("temp=%d,%d,delta=%d\n",(int)_DAT_00012096,(int)_DAT_00012098,uVar2);
    }
    _DAT_00012098 = _DAT_00012096;
    if (DAT_000120a3 != '\0') {
      ulp_code_track(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x000112f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x224))();
    return;
  }
  return;
}

