/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tester_cali.o -> esp_recover_efuse_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esp_recover_efuse_data(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
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
    DAT_00011204 = local_30[0];
    if ((local_30[0] & 0xf) == 1) {
      DAT_00011205 = local_30[1];
      puVar3 = &phy_param;
      do {
        pbVar6 = pbVar4 + 2;
        pbVar4 = pbVar4 + 1;
        puVar3[0x206] = *pbVar6;
        puVar3 = puVar3 + 1;
      } while (pbVar4 != local_30 + 6);
      _DAT_0001120c = uStack_24;
      puVar3 = &phy_param;
      do {
        pbVar6 = pbVar5 + 0x10;
        pbVar5 = pbVar5 + 1;
        puVar3[0x158] = *pbVar6;
        puVar3 = puVar3 + 1;
      } while (pbVar5 != local_30 + 9);
    }
    if ((local_30[0] & 0xf0) == 0x10) {
      DAT_0001117c = local_30[8];
      DAT_00011179 = local_30[9];
      _DAT_0001117a = uStack_26;
      _DAT_0001120e = CONCAT11(uStack_21,uStack_22);
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

