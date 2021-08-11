/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> set_loopback_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_loopback_gain(uint param_1,uint param_2,undefined4 param_3)

{
  pbus_force_test(3,1,param_1 >> 8);
  pbus_force_test(3,2,param_1 & 0xff);
  pbus_force_test(0,1,(param_2 & 0xfff) << 4 | 0x147);
  pbus_force_test(1,1,0x4f);
  pbus_force_test(1,2,param_3);
  return;
}

