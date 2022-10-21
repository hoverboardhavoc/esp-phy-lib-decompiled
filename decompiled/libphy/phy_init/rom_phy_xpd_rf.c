/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> rom_phy_xpd_rf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_phy_xpd_rf(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)g_phyFuns[0x61])((code *)g_phyFuns[0x61]);
  (*(code *)*g_phyFuns)((code *)*g_phyFuns);
  _DAT_6002600c = _DAT_6002600c & 0xfffffffd;
  (*(code *)g_phyFuns[0x75])((code *)g_phyFuns[0x75]);
  (*(code *)g_phyFuns[0x73])(1,1,0,(code *)g_phyFuns[0x73]);
  (*(code *)g_phyFuns[0x76])((code *)g_phyFuns[0x76]);
  _DAT_60008034 = _DAT_60008034 & 0x27ffffff;
  _DAT_600061c0 = _DAT_600061c0 & 0xffff0000 | 0x5555;
                    /* WARNING: Could not recover jumptable at 0x00010080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)g_phyFuns[0x62])(uVar1);
  return;
}

