/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> phy_tx_gain_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_tx_gain_print(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  phy_printf("wifi_init_power:");
  puVar4 = &phy_param;
  puVar5 = &phy_param;
  do {
    pcVar1 = puVar5 + 0xf4;
    puVar5 = puVar5 + 1;
    phy_printf(&_LC45,(int)*pcVar1);
  } while (puVar5 != (undefined1 *)0x1448a);
  phy_printf("\nwifi_pagain:");
  puVar5 = puVar4;
  do {
    puVar2 = puVar5 + 0x1e4;
    puVar5 = puVar5 + 1;
    phy_printf("0x%x,",*puVar2);
  } while (puVar5 != (undefined1 *)0x1448a);
  phy_printf("\nwifi_bbgain:");
  puVar5 = puVar4;
  do {
    puVar3 = (undefined2 *)(puVar5 + 0x1c8);
    puVar5 = puVar5 + 2;
    phy_printf("0x%x,",*puVar3);
  } while (puVar5 != (undefined1 *)0x14498);
  phy_printf("\nwifi_diggain:");
  puVar5 = puVar4;
  do {
    pcVar1 = puVar5 + 0x1ba;
    puVar5 = puVar5 + 1;
    phy_printf(&_LC45,(int)*pcVar1);
  } while (puVar5 != (undefined1 *)0x1448a);
  phy_printf("\nwifi_correct_power:%d\n",(int)DAT_00014677);
  phy_printf("bt_pagain:");
  puVar5 = puVar4;
  do {
    puVar2 = puVar5 + 0x19a;
    puVar5 = puVar5 + 1;
    phy_printf("0x%x,",*puVar2);
  } while (puVar5 != (undefined1 *)0x1448c);
  phy_printf("\nbt_diggain:");
  do {
    pcVar1 = puVar4 + 0x1aa;
    puVar4 = puVar4 + 1;
    phy_printf(&_LC45,(int)*pcVar1);
  } while (puVar4 != (undefined1 *)0x1448c);
  phy_printf("\nbt_correct_power:%d\n",(int)DAT_00014678);
  return;
}

