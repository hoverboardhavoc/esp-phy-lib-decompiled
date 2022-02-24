/*
 * Last changed at upstream commit 449b432d94b968a75ffabffae91fe15796de7644
 * https://github.com/espressif/esp-phy-lib/commit/449b432d94b968a75ffabffae91fe15796de7644
 * Upstream date: 2022-02-24 11:32:38 +0800
 * Upstream subject: Update phy lib: S3_20220128_fbd66bc :  for high/low temperature performance C3_20220119_908_049c04c : for high/low temperature performance
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_write_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_write_pll_cap(uint param_1)

{
  (**(code **)(_g_phyFuns + 0x1b4))(0x62,1,1,param_1 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x00010578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1bc))(0x62,1,2,4,4,param_1 >> 8);
  return;
}

