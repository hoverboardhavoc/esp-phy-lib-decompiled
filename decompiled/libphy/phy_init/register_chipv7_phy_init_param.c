/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> register_chipv7_phy_init_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void register_chipv7_phy_init_param(undefined1 *param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte abStack_14 [20];
  
  abStack_14[4] = 0x50;
  abStack_14[5] = 0x4c;
  abStack_14[6] = 0x4c;
  abStack_14[7] = 0x48;
  DAT_00010e2a = *param_1;
  abStack_14[8] = 0x4c;
  abStack_14[9] = 0x48;
  abStack_14[10] = 0x48;
  abStack_14[0xb] = 0x46;
  abStack_14[0xc] = 0x4a;
  abStack_14[0xd] = 0x46;
  abStack_14[0xe] = 0x46;
  abStack_14[0xf] = 0x44;
  DAT_00010e2b = param_1[1];
  puVar5 = &phy_param;
  iVar6 = 2;
  do {
    cVar1 = param_1[iVar6];
    bVar2 = abStack_14[iVar6];
    *(char *)(puVar5 + 0x3d) = cVar1;
    if ((int)(uint)bVar2 < (int)cVar1) {
      *(byte *)(puVar5 + 0x3d) = bVar2;
    }
    iVar6 = iVar6 + 1;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  } while (iVar6 != 0x10);
  DAT_00010e3a = param_1[0x10];
  if ((char)DAT_00010e3a < '\0') {
    power_cal_offset = DAT_00010e3a & 0x7f;
  }
  DAT_00010e3c = param_1[0x12];
  iVar6 = 0;
  do {
    iVar4 = iVar6 + 0x13;
    puVar8 = &chip7_phy_init_ctrl + iVar6;
    iVar6 = iVar6 + 1;
    *puVar8 = param_1[iVar4];
  } while (iVar6 != 0xe);
  puVar7 = param_1 + 0x21;
  puVar8 = &chip7_phy_init_ctrl;
  do {
    uVar3 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8[0xe] = uVar3;
    puVar8 = puVar8 + 1;
  } while (puVar7 != param_1 + 0x2f);
  puVar8 = &chip7_phy_init_ctrl;
  do {
    uVar3 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8[0x1c] = uVar3;
    puVar8 = puVar8 + 1;
  } while (puVar7 != param_1 + 0x3d);
  puVar5 = &phy_param;
  do {
    uVar3 = *puVar7;
    puVar7 = puVar7 + 1;
    *(undefined1 *)((int)puVar5 + 0x105) = uVar3;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  } while (param_1 + 0x46 != puVar7);
  DAT_00010e50 = CONCAT11(param_1[0x46],param_1[0x47]);
  DAT_00010e52 = param_1[0x48];
  DAT_00010e54 = ((byte)param_1[0x49] & 0x7f) << 8 | (ushort)(byte)param_1[0x4a];
  DAT_00010e56 = param_1[0x4b];
  DAT_00010e57 = param_1[0x4c];
  return;
}

