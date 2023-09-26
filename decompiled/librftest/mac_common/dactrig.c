/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
    *(int *)(iVar1 + 0x40840000) = (iVar1 >> 3) + 0x100;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10000);
  ets_delay_us(10000);
  phy_printf("0x%x,0x%x,0x%x,0x%x\n",param_1,param_2,param_3,param_4);
  return;
}

