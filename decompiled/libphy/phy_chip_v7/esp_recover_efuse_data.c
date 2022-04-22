/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> esp_recover_efuse_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_recover_efuse_data(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte local_30 [10];
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined1 uStack_22;
  undefined1 uStack_21;
  byte abStack_20 [16];
  
  pbVar4 = local_30;
  pbVar5 = local_30;
  memset(local_30,0,0x20);
  pbVar6 = local_30;
  puVar7 = (undefined4 *)&DAT_6000895c;
  do {
    puVar8 = puVar7 + 1;
    *pbVar6 = (char)*puVar7;
    pbVar6[1] = (char)((uint)*puVar7 >> 8);
    pbVar6[2] = (char)((uint)*puVar7 >> 0x10);
    pbVar6[3] = (char)((uint)*puVar7 >> 0x18);
    pbVar6 = pbVar6 + 4;
    puVar7 = puVar8;
  } while (puVar8 != (undefined4 *)0x6000897c);
  if (local_30[0] != 0) {
    DAT_00014680 = local_30[0];
    if ((local_30[0] & 0xf) == 1) {
      DAT_00014681 = local_30[1];
      puVar3 = &phy_param;
      do {
        pbVar6 = pbVar4 + 2;
        pbVar4 = pbVar4 + 1;
        puVar3[0x206] = *pbVar6;
        puVar3 = puVar3 + 1;
      } while (pbVar4 != local_30 + 6);
      DAT_00014688 = uStack_24;
      puVar3 = &phy_param;
      do {
        pbVar6 = pbVar5 + 0x10;
        pbVar5 = pbVar5 + 1;
        puVar3[0x158] = *pbVar6;
        puVar3 = puVar3 + 1;
      } while (pbVar5 != local_30 + 9);
    }
    if ((local_30[0] & 0xf0) == 0x10) {
      DAT_000145f8 = local_30[8];
      DAT_000145f5 = local_30[9];
      DAT_000145f6 = uStack_26;
      DAT_0001468a = CONCAT11(uStack_21,uStack_22);
    }
  }
  if (param_1 == 1) {
    iVar1 = 0;
    do {
      iVar2 = iVar1 + 1;
      phy_printf("blockk10:%d,%x\n",iVar1,local_30[iVar1]);
      iVar1 = iVar2;
    } while (iVar2 != 0x20);
  }
  return;
}

