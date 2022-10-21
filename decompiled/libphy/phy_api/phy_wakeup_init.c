/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_api.o -> phy_wakeup_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_wakeup_init(void)

{
  ram_phy_wakeup_init();
  if ((_DAT_00011120 & 0x20) == 0) {
    get_rf_freq_init();
    (**(code **)(_g_phyFuns + 0xd8))(DAT_000111f2,*(code **)(_g_phyFuns + 0xd8));
    _DAT_00011120 = _DAT_00011120 | 0x20;
  }
  return;
}

