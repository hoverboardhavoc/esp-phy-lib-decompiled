/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_init.o -> phy_close_rf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_close_rf(void)

{
  undefined4 uVar1;
  
  if (DAT_00010566 != '\0') {
    uVar1 = enter_critical_phy();
    phy_dis_hw_set_freq();
    phy_xpd_rf();
    phy_xpd_tsens();
    phy_bbpll_cal(1);
    DAT_0001056f = 1;
    exit_critical_phy(uVar1);
    return;
  }
  return;
}

