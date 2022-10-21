/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_track.o -> rfcal_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfcal_track(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(_g_phyFuns + 0x100))
                    ((int)_DAT_00011096 - (int)_DAT_00011218,*(code **)(_g_phyFuns + 0x100));
  if (0x13 < iVar1) {
    txdc_cal_init(&phy_param,0xf,0x20,0);
    ram_wifi_set_tx_gain(DAT_000111f6,0);
    if (param_1 != 0) {
      phy_printf("cal:temp=%d,%d\n",(int)_DAT_00011096,(int)_DAT_00011218);
    }
    _DAT_00011218 = _DAT_00011096;
  }
  return;
}

