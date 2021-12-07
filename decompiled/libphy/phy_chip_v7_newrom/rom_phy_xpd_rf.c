/*
 * Last changed at upstream commit 2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * https://github.com/espressif/esp-phy-lib/commit/2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * Upstream date: 2021-12-07 14:34:50 +0800
 * Upstream subject: Update esp32c3 and esp32s3 phy lib and bb lib Fix the ble task watchdog timeout issue caused by phy enable when exit modem sleep.
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_phy_xpd_rf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_phy_xpd_rf(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)_g_phyFuns[0x61])((code *)_g_phyFuns[0x61]);
  (*(code *)*_g_phyFuns)((code *)*_g_phyFuns);
  _DAT_6002600c = _DAT_6002600c & 0xfffffffd;
  (*(code *)_g_phyFuns[0x75])((code *)_g_phyFuns[0x75]);
  (*(code *)_g_phyFuns[0x73])(1,1,0,(code *)_g_phyFuns[0x73]);
  (*(code *)_g_phyFuns[0x76])((code *)_g_phyFuns[0x76]);
  _DAT_60008034 = _DAT_60008034 & 0x27ffffff;
  _DAT_600061c0 = _DAT_600061c0 & 0xffff0000 | 0x5555;
                    /* WARNING: Could not recover jumptable at 0x000101a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_g_phyFuns[0x62])(uVar1);
  return;
}

