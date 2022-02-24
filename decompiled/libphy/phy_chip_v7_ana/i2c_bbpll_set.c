/*
 * Last changed at upstream commit 449b432d94b968a75ffabffae91fe15796de7644
 * https://github.com/espressif/esp-phy-lib/commit/449b432d94b968a75ffabffae91fe15796de7644
 * Upstream date: 2022-02-24 11:32:38 +0800
 * Upstream subject: Update phy lib: S3_20220128_fbd66bc :  for high/low temperature performance C3_20220119_908_049c04c : for high/low temperature performance
 * Source: libphy -> phy_chip_v7_ana.o -> i2c_bbpll_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_bbpll_set(void)

{
  (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,9,3,2,3,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,9,5,4,2,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,10,1,0,1,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,4,3,2,3,*(code **)(_g_phyFuns + 0x1bc));
  DAT_000120e5 = (**(code **)(_g_phyFuns + 0x1ac))(0x66,0,9,*(code **)(_g_phyFuns + 0x1ac));
  DAT_000120e6 = (**(code **)(_g_phyFuns + 0x1ac))(0x66,0,10,*(code **)(_g_phyFuns + 0x1ac));
  phy_bbpll_i2c = (**(code **)(_g_phyFuns + 0x1ac))(0x66,0,4,*(code **)(_g_phyFuns + 0x1ac));
  if (bbpll_en_usb == '\0') {
    (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,5,7,7,0,*(code **)(_g_phyFuns + 0x1bc));
  }
  DAT_00011b3d = (**(code **)(_g_phyFuns + 0x1ac))(0x66,0,5,*(code **)(_g_phyFuns + 0x1ac));
  return;
}

