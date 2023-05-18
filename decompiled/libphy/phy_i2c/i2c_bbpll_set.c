/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
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
                    /* WARNING: Could not recover jumptable at 0x00010482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x58))(0x66,0,4,DAT_0001104e);
  return;
}

