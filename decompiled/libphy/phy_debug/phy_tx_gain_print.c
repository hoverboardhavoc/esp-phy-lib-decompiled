/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
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
    pcVar1 = puVar5 + 0xf4;
    puVar5 = puVar5 + 1;
    phy_printf(&_LC22,(int)*pcVar1);
  } while (puVar5 != (undefined *)0x1201e);
  phy_printf("\nwifi_pagain:");
  puVar5 = puVar4;
  do {
    puVar2 = puVar5 + 0x1e4;
    puVar5 = puVar5 + 1;
    phy_printf("0x%x,",*puVar2);
  } while (puVar5 != (undefined *)0x1201e);
  phy_printf("\nwifi_bbgain:");
  puVar5 = puVar4;
  do {
    puVar3 = (undefined2 *)(puVar5 + 0x1c8);
    puVar5 = puVar5 + 2;
    phy_printf("0x%x,",*puVar3);
  } while (puVar5 != (undefined *)0x1202c);
  phy_printf("\nwifi_diggain:");
  puVar5 = puVar4;
  do {
    pcVar1 = puVar5 + 0x1ba;
    puVar5 = puVar5 + 1;
    phy_printf(&_LC22,(int)*pcVar1);
  } while (puVar5 != (undefined *)0x1201e);
  phy_printf("\nwifi_correct_power:%d\n",(int)DAT_0001220b);
  phy_printf("bt_pagain:");
  puVar5 = puVar4;
  do {
    puVar2 = puVar5 + 0x19a;
    puVar5 = puVar5 + 1;
    phy_printf("0x%x,",*puVar2);
  } while (puVar5 != &phy_rxbb_dc);
  phy_printf("\nbt_diggain:");
  do {
    pcVar1 = puVar4 + 0x1aa;
    puVar4 = puVar4 + 1;
    phy_printf(&_LC22,(int)*pcVar1);
  } while (puVar4 != &phy_rxbb_dc);
  phy_printf("\nbt_correct_power:%d\n",(int)DAT_0001220c);
  return;
}

