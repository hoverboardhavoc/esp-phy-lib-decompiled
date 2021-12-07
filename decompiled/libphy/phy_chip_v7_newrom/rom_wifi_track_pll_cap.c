/*
 * Last changed at upstream commit 2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * https://github.com/espressif/esp-phy-lib/commit/2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * Upstream date: 2021-12-07 14:34:50 +0800
 * Upstream subject: Update esp32c3 and esp32s3 phy lib and bb lib Fix the ble task watchdog timeout issue caused by phy enable when exit modem sleep.
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
  
  if (DAT_000120a8 != '\0') {
    uVar1 = 0x54;
    if (DAT_000121fe < 0xe) {
      uVar1 = (DAT_000121fe + -1) * 5 + 0xcU & 0xffff;
    }
                    /* WARNING: Could not recover jumptable at 0x00011384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x22c))(uVar1 & 0xff,&phy_param,1,DAT_000120a7);
    return;
  }
  return;
}

