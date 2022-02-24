/*
 * Last changed at upstream commit 449b432d94b968a75ffabffae91fe15796de7644
 * https://github.com/espressif/esp-phy-lib/commit/449b432d94b968a75ffabffae91fe15796de7644
 * Upstream date: 2022-02-24 11:32:38 +0800
 * Upstream subject: Update phy lib: S3_20220128_fbd66bc :  for high/low temperature performance C3_20220119_908_049c04c : for high/low temperature performance
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
                    /* WARNING: Could not recover jumptable at 0x00011256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x224))();
    return;
  }
  return;
}

