/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_i2c.o -> i2c_bbpll_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_bbpll_set(int param_1)

{
  if (param_1 != 0) {
    (**(code **)(_g_phyFuns + 0x60))(0x66,0,4,3,2,2,*(code **)(_g_phyFuns + 0x60));
    DAT_0001104e = (**(code **)(_g_phyFuns + 0x50))(0x66,0,4,*(code **)(_g_phyFuns + 0x50));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x58))(0x66,0,4,DAT_0001104e);
  return;
}

