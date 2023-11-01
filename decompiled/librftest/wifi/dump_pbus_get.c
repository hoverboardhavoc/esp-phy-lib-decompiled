/*
 * Last changed at upstream commit a8e8b9532e2874ac167d4ade7808fda70fe05820
 * https://github.com/espressif/esp-phy-lib/commit/a8e8b9532e2874ac167d4ade7808fda70fe05820
 * Upstream date: 2023-11-01 14:13:34 +0800
 * Upstream subject: h2 libphy fix ble track
 * Source: librftest -> wifi.o -> dump_pbus_get
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void dump_pbus_get(undefined4 *param_1)

{
  dump_pbus1 = (undefined2)param_1[1];
  DAT_00013efa = (undefined2)param_1[2];
  DAT_00013efc = (undefined2)param_1[3];
  DAT_00013efe = (undefined2)param_1[4];
  DAT_00013f00 = (undefined2)param_1[5];
  phy_printf("dump_pbus %d rfrx=0x%x bb1=0x%x bb2=0x%x rftx1=0x%x rftx2=0x%x\n",*param_1);
  return;
}

