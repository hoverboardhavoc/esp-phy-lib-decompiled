/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_init.o -> phy_close_rf_
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_close_rf_(void)

{
  undefined4 uVar1;
  
  if (DAT_00010a91 != '\0') {
    uVar1 = (*(code *)*g_phyFuns)((code *)*g_phyFuns);
    phy_dis_hw_set_freq();
    phy_xpd_rf();
    phy_bbpll_cal(1);
    DAT_00010a83 = 1;
                    /* WARNING: Could not recover jumptable at 0x00010722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)g_phyFuns[1])(uVar1);
    return;
  }
  return;
}

