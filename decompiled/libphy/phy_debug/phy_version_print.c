/*
 * Last changed at upstream commit d8ee8f776acd1aafdfc3046f526db024b175b094
 * https://github.com/espressif/esp-phy-lib/commit/d8ee8f776acd1aafdfc3046f526db024b175b094
 * Upstream date: 2022-05-09 07:50:30 -0400
 * Upstream subject: esp32c2: optimize rf performace
 * Source: libphy -> phy_debug.o -> phy_version_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_version_print(void)

{
  undefined4 uVar1;
  
  uVar1 = phy_get_rf_cal_version();
  phy_printf("phy_version: %d, %s, %s, %s\n",uVar1,"9d63be8","Apr 20 2022","15:43:12");
  return;
}

