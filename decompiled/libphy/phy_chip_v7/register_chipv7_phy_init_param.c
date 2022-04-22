/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> register_chipv7_phy_init_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void register_chipv7_phy_init_param(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  DAT_0001456e = *param_1;
  DAT_0001456f = param_1[1];
  puVar3 = param_1 + 2;
  puVar5 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5[0xf4] = uVar1;
    puVar5 = puVar5 + 1;
  } while (puVar3 != param_1 + 0x10);
  DAT_0001457e = param_1[0x10];
  if ((char)DAT_0001457e < '\0') {
    power_cal_offset = DAT_0001457e & 0x7f;
  }
  DAT_00014580 = param_1[0x12];
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 0x13;
    puVar5 = &chip7_phy_init_ctrl + iVar4;
    iVar4 = iVar4 + 1;
    *puVar5 = param_1[iVar2];
  } while (iVar4 != 0xe);
  puVar3 = param_1 + 0x21;
  puVar5 = &chip7_phy_init_ctrl;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5[0xe] = uVar1;
    puVar5 = puVar5 + 1;
  } while (puVar3 != param_1 + 0x2f);
  puVar5 = &chip7_phy_init_ctrl;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5[0x1c] = uVar1;
    puVar5 = puVar5 + 1;
  } while (puVar3 != param_1 + 0x3d);
  puVar5 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5[0x105] = uVar1;
    puVar5 = puVar5 + 1;
  } while (param_1 + 0x46 != puVar3);
  DAT_00014594 = CONCAT11(param_1[0x46],param_1[0x47]);
  DAT_00014596 = param_1[0x48];
  DAT_00014598 = ((byte)param_1[0x49] & 0x7f) << 8 | (ushort)(byte)param_1[0x4a];
  DAT_0001459a = param_1[0x4b];
  DAT_0001459b = param_1[0x4c];
  return;
}

