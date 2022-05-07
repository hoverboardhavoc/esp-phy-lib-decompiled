/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
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
  
  ets_printf("wifi_init_power:");
  puVar4 = &phy_param;
  puVar5 = &phy_param;
  do {
    pcVar1 = puVar5 + 0xfa;
    puVar5 = puVar5 + 1;
    ets_printf(&_LC17,(int)*pcVar1);
  } while (puVar5 != (undefined *)0x1201e);
  ets_printf("\nwifi_pagain:");
  puVar5 = puVar4;
  do {
    puVar2 = puVar5 + 0x20c;
    puVar5 = puVar5 + 1;
    ets_printf("0x%x,",*puVar2);
  } while (puVar5 != (undefined *)0x1201e);
  ets_printf("\nwifi_bbgain:");
  puVar5 = puVar4;
  do {
    puVar3 = (undefined2 *)(puVar5 + 0x1f0);
    puVar5 = puVar5 + 2;
    ets_printf("0x%x,",*puVar3);
  } while (puVar5 != (undefined *)0x1202c);
  ets_printf("\nwifi_diggain:");
  puVar5 = puVar4;
  do {
    pcVar1 = puVar5 + 0x1e2;
    puVar5 = puVar5 + 1;
    ets_printf(&_LC17,(int)*pcVar1);
  } while (puVar5 != (undefined *)0x1201e);
  ets_printf("\nwifi_correct_power:%d\n",(int)DAT_00012233);
  ets_printf("bt_pagain:");
  puVar5 = puVar4;
  do {
    puVar2 = puVar5 + 0x1c2;
    puVar5 = puVar5 + 1;
    ets_printf("0x%x,",*puVar2);
  } while (puVar5 != (undefined *)0x12020);
  ets_printf("\nbt_diggain:");
  do {
    pcVar1 = puVar4 + 0x1d2;
    puVar4 = puVar4 + 1;
    ets_printf(&_LC17,(int)*pcVar1);
  } while (puVar4 != (undefined *)0x12020);
  ets_printf("\nbt_correct_power:%d\n",(int)DAT_00012234);
  return;
}

