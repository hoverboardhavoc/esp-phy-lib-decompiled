/*
 * Last changed at upstream commit 449b432d94b968a75ffabffae91fe15796de7644
 * https://github.com/espressif/esp-phy-lib/commit/449b432d94b968a75ffabffae91fe15796de7644
 * Upstream date: 2022-02-24 11:32:38 +0800
 * Upstream subject: Update phy lib: S3_20220128_fbd66bc :  for high/low temperature performance C3_20220119_908_049c04c : for high/low temperature performance
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_wifi_track_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_wifi_track_pll_cap(void)

{
  uint uVar1;
  
  if (DAT_000120a0 != '\0') {
    uVar1 = 0x54;
    if (DAT_000121f6 < 0xe) {
      uVar1 = (DAT_000121f6 + -1) * 5 + 0xcU & 0xffff;
    }
                    /* WARNING: Could not recover jumptable at 0x000111ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x22c))(uVar1 & 0xff,&phy_param,1,DAT_0001209f);
    return;
  }
  return;
}

