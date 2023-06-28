/*
 * Last changed at upstream commit 97a141a563a4b752f5943d0049aa691038d08613
 * https://github.com/espressif/esp-phy-lib/commit/97a141a563a4b752f5943d0049aa691038d08613
 * Upstream date: 2023-06-28 11:18:04 +0800
 * Upstream subject: h2: optimize track pll when temperature changes. fix ramp up and ramp down timing.
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
  phy_printf("phy_version: %d,%d, %s, %s, %s\n",uVar1,phy_param,"8a31b65","Jun  6 2023","20:13:10");
  return;
}

