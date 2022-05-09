/*
 * Last changed at upstream commit d8ee8f776acd1aafdfc3046f526db024b175b094
 * https://github.com/espressif/esp-phy-lib/commit/d8ee8f776acd1aafdfc3046f526db024b175b094
 * Upstream date: 2022-05-09 07:50:30 -0400
 * Upstream subject: esp32c2: optimize rf performace
 * Source: libphy -> phy_debug.o -> phy_tx_gain_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_tx_gain_print(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  phy_printf("wifi_init_power:");
  puVar4 = &phy_param;
  puVar5 = &phy_param;
  do {
    pcVar1 = puVar5 + 0xfa;
    puVar5 = puVar5 + 1;
    phy_printf(&_LC17,(int)*pcVar1);
  } while (puVar5 != (undefined *)0x1201e);
  phy_printf("\nwifi_pagain:");
  puVar5 = puVar4;
  do {
    puVar2 = puVar5 + 0x20c;
    puVar5 = puVar5 + 1;
    phy_printf("0x%x,",*puVar2);
  } while (puVar5 != (undefined *)0x1201e);
  phy_printf("\nwifi_bbgain:");
  puVar5 = puVar4;
  do {
    puVar3 = (undefined2 *)(puVar5 + 0x1f0);
    puVar5 = puVar5 + 2;
    phy_printf("0x%x,",*puVar3);
  } while (puVar5 != (undefined *)0x1202c);
  phy_printf("\nwifi_diggain:");
  puVar5 = puVar4;
  do {
    pcVar1 = puVar5 + 0x1e2;
    puVar5 = puVar5 + 1;
    phy_printf(&_LC17,(int)*pcVar1);
  } while (puVar5 != (undefined *)0x1201e);
  phy_printf("\nwifi_correct_power:%d\n",(int)DAT_00012233);
  phy_printf("bt_pagain:");
  puVar5 = puVar4;
  do {
    puVar2 = puVar5 + 0x1c2;
    puVar5 = puVar5 + 1;
    phy_printf("0x%x,",*puVar2);
  } while (puVar5 != (undefined *)0x12020);
  phy_printf("\nbt_diggain:");
  do {
    pcVar1 = puVar4 + 0x1d2;
    puVar4 = puVar4 + 1;
    phy_printf(&_LC17,(int)*pcVar1);
  } while (puVar4 != (undefined *)0x12020);
  phy_printf("\nbt_correct_power:%d\n",(int)DAT_00012234);
  return;
}

