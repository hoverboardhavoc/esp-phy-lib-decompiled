/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libphy -> phy_init.o -> rf_cal_level_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_cal_level_check(void)

{
  undefined4 *puVar1;
  
  if ((byte)(DAT_00010dbe - 0x10U) < 2) {
    DAT_00010dbf = 9;
    DAT_00010dc0 = 6;
    if (DAT_00010dbe == '\x11') {
      DAT_00010e74 = 0xb040d0b;
      DAT_00010e78 = 0xd0b040d;
      DAT_00010e7c = 4;
      phy_rxrf_dc._36_4_ = 0x1000100;
      phy_rxrf_dc._40_4_ = 0x1000100;
      phy_rxrf_dc._44_4_ = 0x1000100;
      phy_rxrf_dc._48_4_ = 0x1000100;
      phy_rxrf_dc._52_4_ = 0x1000100;
      phy_rxrf_dc._56_4_ = 0x1000100;
      phy_rxrf_dc._60_4_ = 0x1000100;
      phy_rxrf_dc._64_4_ = 0x1000100;
      phy_rxrf_dc._68_4_ = 0x1000100;
      phy_rxbb_dc = 0x1000100;
      DAT_00010cc8 = 0x1000100;
      DAT_00010ccc = 0x1000100;
      DAT_00010cd0 = 0x1000100;
      puVar1 = &phy_chan_dc;
      do {
        *puVar1 = 0x1000100;
        puVar1 = puVar1 + 1;
      } while (puVar1 != &phy_rxbb_dc);
      DAT_00010e3c = DAT_00010e3c | 0x1c4400;
    }
  }
  return;
}

