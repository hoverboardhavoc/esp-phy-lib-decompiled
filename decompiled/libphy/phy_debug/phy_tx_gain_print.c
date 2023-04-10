/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_debug.o -> phy_tx_gain_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_tx_gain_print(void)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  int iVar5;
  char *pcVar6;
  char local_120 [16];
  char local_110 [32];
  char local_f0 [32];
  char local_d0 [32];
  undefined2 local_b0 [32];
  undefined2 local_70 [32];
  undefined2 auStack_30 [4];
  
  pcVar2 = local_f0;
  wifi_get_tx_tab(_DAT_0001212c,local_d0,local_b0,local_70,0);
  bt_get_tx_tab(local_110,pcVar2,local_120,0);
  puVar3 = &phy_param;
  phy_printf("wifi_init_power:");
  do {
    pcVar6 = puVar3 + 0x50;
    puVar3 = puVar3 + 1;
    phy_printf(&_LC33,(int)*pcVar6);
  } while (puVar3 != (undefined *)0x1201e);
  phy_printf("\nwifi_pagain:");
  puVar4 = local_70;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    phy_printf("0x%x,",uVar1);
  } while (puVar4 != auStack_30);
  phy_printf("\nwifi_bbgain:");
  puVar4 = local_b0;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    phy_printf("0x%x,",uVar1);
  } while (local_70 != puVar4);
  phy_printf("\nwifi_diggain:");
  iVar5 = 0;
  do {
    pcVar6 = local_d0 + iVar5;
    iVar5 = iVar5 + 1;
    phy_printf(&_LC33,(int)*pcVar6);
  } while (iVar5 != 0x20);
  phy_printf("\nwifi_correct_power:%d\n",(int)DAT_00012133);
  phy_printf("bt_pagain:");
  pcVar6 = local_110;
  do {
    uVar1 = *(undefined2 *)pcVar6;
    pcVar6 = pcVar6 + 2;
    phy_printf("0x%x,",uVar1);
  } while (pcVar2 != pcVar6);
  phy_printf("\nbt_bbgain:");
  do {
    uVar1 = *(undefined2 *)pcVar2;
    pcVar2 = pcVar2 + 2;
    phy_printf("0x%x,",uVar1);
  } while (local_d0 != pcVar2);
  phy_printf("\nbt_diggain:");
  iVar5 = 0;
  do {
    pcVar2 = local_120 + iVar5;
    iVar5 = iVar5 + 1;
    phy_printf(&_LC33,(int)*pcVar2);
  } while (iVar5 != 0x10);
  phy_printf("\nbt_correct_power:%d\n",(int)DAT_00012134);
  return;
}

