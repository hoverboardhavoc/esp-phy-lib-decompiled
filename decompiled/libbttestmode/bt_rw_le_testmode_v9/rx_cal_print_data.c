/*
 * Last changed at upstream commit 218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * https://github.com/espressif/esp-phy-lib/commit/218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * Upstream date: 2025-10-28 15:27:17 +0800
 * Upstream subject: update C3 S3 C2 S2 libphy for rxdc opt
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rx_cal_print_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rx_cal_print_data(void)

{
  phy_printf(&_LC14,dreg_1p1_data);
  phy_printf(&_LC14,DAT_000142fd);
  phy_printf(&_LC14,DAT_000142fe);
  phy_printf(&_LC14,xtal_dphase_data);
  phy_printf(&_LC14,DAT_00014309);
  phy_printf(&_LC14,DAT_0001430a);
  phy_printf(&_LC14,div_adc_data);
  phy_printf(&_LC14,DAT_000142f9);
  phy_printf(&_LC14,DAT_000142fa);
  phy_printf(&_LC14,rx_cal_flag);
  phy_printf(&_LC14,DAT_000142b5);
  phy_printf(&_LC14,DAT_000142b6);
  phy_printf(&_LC15);
  return;
}

