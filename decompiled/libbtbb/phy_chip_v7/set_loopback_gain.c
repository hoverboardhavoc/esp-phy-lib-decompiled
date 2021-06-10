/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> set_loopback_gain
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

