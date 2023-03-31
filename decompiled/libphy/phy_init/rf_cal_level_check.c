/*
 * Last changed at upstream commit 9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * https://github.com/espressif/esp-phy-lib/commit/9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * Upstream date: 2023-03-31 17:07:27 +0800
 * Upstream subject: update_for_rftest_20230331
 * Source: libphy -> phy_init.o -> rf_cal_level_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_cal_level_check(void)

{
  undefined4 *puVar1;
  
  if ((byte)(DAT_00010e2a - 0x10U) < 2) {
    DAT_00010e2b = 9;
    DAT_00010e2c = 6;
    if (DAT_00010e2a == '\x11') {
      DAT_00010ee0 = 0xb040d0b;
      DAT_00010ee4 = 0xd0b040d;
      DAT_00010ee8 = 4;
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
      DAT_00010d34 = 0x1000100;
      DAT_00010d38 = 0x1000100;
      DAT_00010d3c = 0x1000100;
      puVar1 = &phy_chan_dc;
      do {
        *puVar1 = 0x1000100;
        puVar1 = puVar1 + 1;
      } while (puVar1 != &phy_rxbb_dc);
      DAT_00010ea8 = DAT_00010ea8 | 0x1c4400;
    }
  }
  return;
}

