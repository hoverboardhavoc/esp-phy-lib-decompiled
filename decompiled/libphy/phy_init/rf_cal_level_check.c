/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> rf_cal_level_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_cal_level_check(void)

{
  undefined4 *puVar1;
  
  if ((byte)(DAT_00010dda - 0x10U) < 2) {
    DAT_00010ddb = 9;
    DAT_00010ddc = 6;
    if (DAT_00010dda == '\x11') {
      DAT_00010e90 = 0xb040d0b;
      DAT_00010e94 = 0xd0b040d;
      DAT_00010e98 = 4;
      phy_rxrf_dc._36_4_ = 0x1000100;
      phy_rxrf_dc._40_4_ = 0x1000100;
      phy_rxrf_dc._44_4_ = 0x1000100;
      phy_rxrf_dc._48_4_ = 0x1000100;
      phy_rxrf_dc._52_4_ = 0x1000100;
      phy_rxrf_dc._56_4_ = 0x1000100;
      phy_rxrf_dc._60_4_ = 0x1000100;
      phy_rxrf_dc._64_4_ = 0x1000100;
      phy_rxrf_dc._68_4_ = 0x1000100;
      puVar1 = &phy_rxbb_dc;
      do {
        *puVar1 = 0x1000100;
        puVar1 = puVar1 + 1;
      } while (puVar1 != (undefined4 *)phy_rxrf_dc);
      puVar1 = &phy_chan_dc;
      do {
        *puVar1 = 0x1000100;
        puVar1 = puVar1 + 1;
      } while (puVar1 != &phy_rxbb_dc);
      DAT_00010e58 = DAT_00010e58 | 0x1c4400;
    }
  }
  return;
}

