/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> get_dump_pbus
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_dump_pbus(undefined4 *param_1)

{
  dump_pbus1 = (undefined2)param_1[1];
  DAT_00014d32 = (undefined2)param_1[2];
  DAT_00014d34 = (undefined2)param_1[3];
  DAT_00014d36 = (undefined2)param_1[4];
  DAT_00014d38 = (undefined2)param_1[5];
  phy_printf("dump_pbus %d rfrx=0x%x bb1=0x%x bb2=0x%x rftx1=0x%x rftx2=0x%x\n",*param_1);
  return;
}

