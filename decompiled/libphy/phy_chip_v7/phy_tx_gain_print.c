/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
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
    phy_printf(&_LC46,(int)*pcVar1);
  } while (puVar5 != (undefined1 *)0x14432);
  phy_printf("\nwifi_pagain:");
  puVar5 = puVar4;
  do {
    puVar2 = puVar5 + 0x1e4;
    puVar5 = puVar5 + 1;
    phy_printf("0x%x,",*puVar2);
  } while (puVar5 != (undefined1 *)0x14432);
  phy_printf("\nwifi_bbgain:");
  puVar5 = puVar4;
  do {
    puVar3 = (undefined2 *)(puVar5 + 0x1c8);
    puVar5 = puVar5 + 2;
    phy_printf("0x%x,",*puVar3);
  } while (puVar5 != (undefined1 *)0x14440);
  phy_printf("\nwifi_diggain:");
  puVar5 = puVar4;
  do {
    pcVar1 = puVar5 + 0x1ba;
    puVar5 = puVar5 + 1;
    phy_printf(&_LC46,(int)*pcVar1);
  } while (puVar5 != (undefined1 *)0x14432);
  phy_printf("\nwifi_correct_power:%d\n",(int)DAT_0001461f);
  phy_printf("bt_pagain:");
  puVar5 = puVar4;
  do {
    puVar2 = puVar5 + 0x19a;
    puVar5 = puVar5 + 1;
    phy_printf("0x%x,",*puVar2);
  } while (puVar5 != (undefined1 *)0x14434);
  phy_printf("\nbt_diggain:");
  do {
    pcVar1 = puVar4 + 0x1aa;
    puVar4 = puVar4 + 1;
    phy_printf(&_LC46,(int)*pcVar1);
  } while (puVar4 != (undefined1 *)0x14434);
  phy_printf("\nbt_correct_power:%d\n",(int)DAT_00014620);
  return;
}

