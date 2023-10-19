/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> mac_common.o -> dactrig
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void dactrig(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(int *)(iVar1 + 0x40820000) = (iVar1 >> 3) + 0x100;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10000);
  ets_delay_us(10000);
  phy_printf("0x%x,0x%x,0x%x,0x%x\n",param_1,param_2,param_3,param_4);
  return;
}

