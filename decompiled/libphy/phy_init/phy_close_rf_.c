/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_init.o -> phy_close_rf_
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_close_rf_(void)

{
  undefined4 uVar1;
  
  if (DAT_00010a89 != '\0') {
    uVar1 = (*(code *)*g_phyFuns)((code *)*g_phyFuns);
    phy_dis_hw_set_freq();
    phy_xpd_rf();
    phy_bbpll_cal(1);
    DAT_00010a7b = 1;
                    /* WARNING: Could not recover jumptable at 0x00010722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)g_phyFuns[1])(uVar1);
    return;
  }
  return;
}

