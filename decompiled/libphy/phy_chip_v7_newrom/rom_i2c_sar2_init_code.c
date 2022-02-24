/*
 * Last changed at upstream commit 449b432d94b968a75ffabffae91fe15796de7644
 * https://github.com/espressif/esp-phy-lib/commit/449b432d94b968a75ffabffae91fe15796de7644
 * Upstream date: 2022-02-24 11:32:38 +0800
 * Upstream subject: Update phy lib: S3_20220128_fbd66bc :  for high/low temperature performance C3_20220119_908_049c04c : for high/low temperature performance
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_i2c_sar2_init_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_i2c_sar2_init_code(uint param_1)

{
  (**(code **)(_g_phyFuns + 0x1bc))(0x69,0,4,3,0,param_1 >> 8,*(code **)(_g_phyFuns + 0x1bc));
                    /* WARNING: Could not recover jumptable at 0x00010c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1b4))(0x69,0,3,param_1 & 0xff);
  return;
}

