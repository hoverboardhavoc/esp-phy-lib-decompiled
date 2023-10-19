/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> dump_pbus_get
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void dump_pbus_get(undefined4 *param_1)

{
  dump_pbus1 = (undefined2)param_1[1];
  DAT_00013e96 = (undefined2)param_1[2];
  DAT_00013e98 = (undefined2)param_1[3];
  DAT_00013e9a = (undefined2)param_1[4];
  DAT_00013e9c = (undefined2)param_1[5];
  phy_printf("dump_pbus %d rfrx=0x%x bb1=0x%x bb2=0x%x rftx1=0x%x rftx2=0x%x\n",*param_1);
  return;
}

