/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> test_i2c_time
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void test_i2c_time(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = phy_time_now();
  iVar2 = phy_time_now();
  phy_printf("test_i2c_time,%d,%d\n",param_1,iVar2 - iVar1);
  return;
}

