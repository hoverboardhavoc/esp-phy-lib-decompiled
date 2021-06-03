/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> rf_cal_data_backup
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rf_cal_data_backup(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  puVar2 = (undefined1 *)(param_1 + 0xc);
  iVar3 = 0;
  do {
    iVar1 = 0;
    puVar7 = puVar2;
    while( true ) {
      uVar4 = _DAT_6000e0c0;
      _DAT_6000e0c4 = _DAT_6000e0c4 & 0xffffff00 | iVar1 + iVar3;
      uVar5 = 0;
      puVar8 = puVar7;
      do {
        *puVar8 = (char)(uVar4 >> (uVar5 & 0x1f));
        uVar5 = uVar5 + 8;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0x20);
      puVar7 = puVar7 + 4;
      if (iVar1 == 1) break;
      iVar1 = 1;
    }
    iVar3 = iVar3 + 3;
    puVar2 = puVar2 + 0xc;
  } while (iVar3 != 0xff);
  puVar2 = &phy_param;
  iVar3 = 0x2b4;
  do {
    uVar4 = 0;
    puVar7 = (undefined1 *)(iVar3 + param_1);
    do {
      *puVar7 = (char)(*(uint *)(puVar2 + 0x120) >> (uVar4 & 0x1f));
      uVar4 = uVar4 + 8;
      puVar7 = puVar7 + 1;
    } while (uVar4 != 0x20);
    iVar3 = iVar3 + 4;
    puVar2 = puVar2 + 4;
  } while (iVar3 != 0x398);
  puVar6 = &phy_rxrf_dc;
  iVar3 = 0x528;
  do {
    uVar4 = 0;
    puVar2 = (undefined1 *)(param_1 + iVar3);
    do {
      *puVar2 = (char)(*puVar6 >> (uVar4 & 0x1f));
      uVar4 = uVar4 + 8;
      puVar2 = puVar2 + 1;
    } while (uVar4 != 0x20);
    iVar3 = iVar3 + 4;
    puVar6 = puVar6 + 1;
  } while (iVar3 != 0x570);
  puVar6 = &phy_rxbb_dc;
  iVar3 = 0x570;
  do {
    uVar4 = 0;
    puVar2 = (undefined1 *)(param_1 + iVar3);
    do {
      *puVar2 = (char)(*puVar6 >> (uVar4 & 0x1f));
      uVar4 = uVar4 + 8;
      puVar2 = puVar2 + 1;
    } while (uVar4 != 0x20);
    iVar3 = iVar3 + 4;
    puVar6 = puVar6 + 1;
  } while (iVar3 != 0x5e8);
  puVar6 = &phy_chan_dc;
  iVar3 = 0x5e8;
  do {
    uVar4 = 0;
    puVar2 = (undefined1 *)(param_1 + iVar3);
    do {
      *puVar2 = (char)(*puVar6 >> (uVar4 & 0x1f));
      uVar4 = uVar4 + 8;
      puVar2 = puVar2 + 1;
    } while (uVar4 != 0x20);
    iVar3 = iVar3 + 4;
    puVar6 = puVar6 + 1;
  } while (iVar3 != 0x620);
  return 0x620;
}

