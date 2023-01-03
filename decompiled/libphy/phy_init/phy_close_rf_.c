/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_init.o -> phy_close_rf_
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_close_rf_(void)

{
  undefined4 uVar1;
  
  if (DAT_00010a51 != '\0') {
    uVar1 = (*(code *)*g_phyFuns)((code *)*g_phyFuns);
    phy_dis_hw_set_freq();
    phy_xpd_rf();
    phy_bbpll_cal(1);
    DAT_00010a43 = 1;
                    /* WARNING: Could not recover jumptable at 0x000106e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)g_phyFuns[1])(uVar1);
    return;
  }
  return;
}

