/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> ram_phy_close_rf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ram_phy_close_rf(void)

{
  (**(code **)(g_phyFuns + 0xe0))(*(code **)(g_phyFuns + 0xe0));
  (**(code **)(g_phyFuns + 0x1b4))(0x67,1,2,6,*(code **)(g_phyFuns + 0x1b4));
  rom_phy_bbpll_cal(1);
                    /* WARNING: Could not recover jumptable at 0x00010282. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(g_phyFuns + 0x228))();
  return;
}

