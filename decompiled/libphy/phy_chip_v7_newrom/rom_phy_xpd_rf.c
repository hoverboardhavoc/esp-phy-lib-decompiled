/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
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
                    /* WARNING: Could not recover jumptable at 0x00010182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_g_phyFuns[0x62])(uVar1);
  return;
}

