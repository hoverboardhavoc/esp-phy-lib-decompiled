/*
 * Last changed at upstream commit 2d319a382336cf0522ea4bb5a3fbd6701a8633c6
 * https://github.com/espressif/esp-phy-lib/commit/2d319a382336cf0522ea4bb5a3fbd6701a8633c6
 * Upstream date: 2024-01-24 19:07:44 +0800
 * Upstream subject: keep regs before sleep and after wakeup are same
 * Source: librftest -> wifi.o -> get_dump_pbus
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_dump_pbus(undefined4 *param_1)

{
  dump_pbus1 = (undefined2)param_1[1];
  DAT_00014dde = (undefined2)param_1[2];
  DAT_00014de0 = (undefined2)param_1[3];
  DAT_00014de2 = (undefined2)param_1[4];
  DAT_00014de4 = (undefined2)param_1[5];
  phy_printf("dump_pbus %d rfrx=0x%x bb1=0x%x bb2=0x%x rftx1=0x%x rftx2=0x%x\n",*param_1);
  return;
}

