/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_feature.o -> phy_txtone_stop
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_txtone_stop(void)

{
  target_power_backoff(0);
  start_tx_tone_step(0,0,0,0,0,0);
  _DAT_60006000 = _DAT_60006000 & 0xfffffffd;
  (**(code **)(_g_phyFuns + 200))(0,*(code **)(_g_phyFuns + 200));
  chip_v7_set_chan((int)DAT_000111fe,(int)DAT_00011200);
  return;
}

