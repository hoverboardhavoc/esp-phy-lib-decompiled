/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
 * Source: libphy -> phy_init.o -> rf_cal_level_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_cal_level_check(void)

{
  undefined4 *puVar1;
  
  if ((byte)(DAT_00010e6a - 0x10U) < 2) {
    DAT_00010e6b = 9;
    DAT_00010e6c = 6;
    if (DAT_00010e6a == '\x11') {
      DAT_00010f20 = 0xb040d0b;
      DAT_00010f24 = 0xd0b040d;
      DAT_00010f28 = 4;
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
      DAT_00010d74 = 0x1000100;
      DAT_00010d78 = 0x1000100;
      DAT_00010d7c = 0x1000100;
      puVar1 = &phy_chan_dc;
      do {
        *puVar1 = 0x1000100;
        puVar1 = puVar1 + 1;
      } while (puVar1 != &phy_rxbb_dc);
      DAT_00010ee8 = DAT_00010ee8 | 0x1c4400;
    }
  }
  return;
}

