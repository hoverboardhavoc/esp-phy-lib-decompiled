/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> set_loopback_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_loopback_gain(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  pbus_force_test(4,1,0x7f);
  pbus_force_test(5,1,param_1);
  pbus_force_test(0,1,param_2);
  pbus_force_test(1,1,0x1f9);
  pbus_force_test(1,2,param_3);
  return;
}

