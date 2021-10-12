/*
 * Last changed at upstream commit b7095b90157d98f116ba43c35b12d51192dc91c8
 * https://github.com/espressif/esp-phy-lib/commit/b7095b90157d98f116ba43c35b12d51192dc91c8
 * Upstream date: 2021-10-12 21:50:40 +0800
 * Upstream subject: Update libphy and libbb
 * Source: libphy -> phy_chip_v7.o -> phy_tx_gain_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_tx_gain_print(void)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  ets_printf("bt_pagain:");
  puVar3 = &phy_param;
  puVar4 = &phy_param;
  do {
    puVar2 = puVar4 + 0x90;
    puVar4 = puVar4 + 1;
    ets_printf("0x%x,",*puVar2);
  } while (puVar4 != (undefined2 *)0x12e80);
  ets_printf("\nbt_bbgain:");
  puVar4 = puVar3;
  do {
    puVar2 = puVar4 + 0xa0;
    puVar4 = puVar4 + 1;
    ets_printf("0x%x,",*puVar2);
  } while (puVar4 != (undefined2 *)0x12e80);
  ets_printf("\nbt_diggain:");
  do {
    pcVar1 = (char *)(puVar3 + 0xb0);
    puVar3 = (undefined2 *)((int)puVar3 + 1);
    ets_printf(&_LC30,(int)*pcVar1);
  } while (puVar3 != (undefined2 *)0x12e70);
  ets_printf("\nbt_correct_power:%d\n",(int)DAT_00012fda);
  return;
}

