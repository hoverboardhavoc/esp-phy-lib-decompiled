/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_init.o -> phy_close_rf_
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_close_rf_(void)

{
  undefined4 uVar1;
  
  if (DAT_00010a01 != '\0') {
    uVar1 = (*(code *)*g_phyFuns)((code *)*g_phyFuns);
    phy_dis_hw_set_freq();
    phy_xpd_rf();
    phy_bbpll_cal(1);
    DAT_000109f3 = 1;
                    /* WARNING: Could not recover jumptable at 0x00010690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)g_phyFuns[1])(uVar1);
    return;
  }
  return;
}

