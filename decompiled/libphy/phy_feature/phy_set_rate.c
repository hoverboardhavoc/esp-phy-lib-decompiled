/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_feature.o -> phy_set_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_set_rate(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xf;
  if (param_1 < 8) {
    uVar1 = 10;
  }
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,4,7,4,uVar1,*(code **)(_g_phyFuns + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000103c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,6,5,3,7 < param_1);
  return;
}

