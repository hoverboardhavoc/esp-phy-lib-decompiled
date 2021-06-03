/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
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
    phy_printf(&_LC40,(int)*pcVar1);
  } while (puVar5 != (undefined1 *)0x13f3e);
  phy_printf("\nwifi_pagain:");
  puVar5 = puVar4;
  do {
    puVar2 = puVar5 + 0x1e4;
    puVar5 = puVar5 + 1;
    phy_printf("0x%x,",*puVar2);
  } while (puVar5 != (undefined1 *)0x13f3e);
  phy_printf("\nwifi_bbgain:");
  puVar5 = puVar4;
  do {
    puVar3 = (undefined2 *)(puVar5 + 0x1c8);
    puVar5 = puVar5 + 2;
    phy_printf("0x%x,",*puVar3);
  } while (puVar5 != (undefined1 *)0x13f4c);
  phy_printf("\nwifi_diggain:");
  puVar5 = puVar4;
  do {
    pcVar1 = puVar5 + 0x1ba;
    puVar5 = puVar5 + 1;
    phy_printf(&_LC40,(int)*pcVar1);
  } while (puVar5 != (undefined1 *)0x13f3e);
  phy_printf("\nwifi_correct_power:%d\n",(int)DAT_0001412b);
  phy_printf("bt_pagain:");
  puVar5 = puVar4;
  do {
    puVar2 = puVar5 + 0x19a;
    puVar5 = puVar5 + 1;
    phy_printf("0x%x,",*puVar2);
  } while (puVar5 != (undefined1 *)0x13f40);
  phy_printf("\nbt_diggain:");
  do {
    pcVar1 = puVar4 + 0x1aa;
    puVar4 = puVar4 + 1;
    phy_printf(&_LC40,(int)*pcVar1);
  } while (puVar4 != (undefined1 *)0x13f40);
  phy_printf("\nbt_correct_power:%d\n",(int)DAT_0001412c);
  return;
}

