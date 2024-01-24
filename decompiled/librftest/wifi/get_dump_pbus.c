/*
 * Last changed at upstream commit ab9b9d0880221ad8423d78ba36e73ff2cb450358
 * https://github.com/espressif/esp-phy-lib/commit/ab9b9d0880221ad8423d78ba36e73ff2cb450358
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix wifi boot bug at low temp
 * Source: librftest -> wifi.o -> get_dump_pbus
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_dump_pbus(undefined4 *param_1)

{
  dump_pbus1 = (undefined2)param_1[1];
  DAT_00014de6 = (undefined2)param_1[2];
  DAT_00014de8 = (undefined2)param_1[3];
  DAT_00014dea = (undefined2)param_1[4];
  DAT_00014dec = (undefined2)param_1[5];
  phy_printf("dump_pbus %d rfrx=0x%x bb1=0x%x bb2=0x%x rftx1=0x%x rftx2=0x%x\n",*param_1);
  return;
}

