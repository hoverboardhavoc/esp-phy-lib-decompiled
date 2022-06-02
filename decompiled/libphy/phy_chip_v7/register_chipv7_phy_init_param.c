/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
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
  
  DAT_00014516 = *param_1;
  DAT_00014517 = param_1[1];
  puVar3 = param_1 + 2;
  puVar5 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5[0xf4] = uVar1;
    puVar5 = puVar5 + 1;
  } while (puVar3 != param_1 + 0x10);
  DAT_00014526 = param_1[0x10];
  if ((char)DAT_00014526 < '\0') {
    power_cal_offset = DAT_00014526 & 0x7f;
  }
  DAT_00014528 = param_1[0x12];
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
  DAT_0001453c = CONCAT11(param_1[0x46],param_1[0x47]);
  DAT_0001453e = param_1[0x48];
  DAT_00014540 = ((byte)param_1[0x49] & 0x7f) << 8 | (ushort)(byte)param_1[0x4a];
  DAT_00014542 = param_1[0x4b];
  DAT_00014543 = param_1[0x4c];
  return;
}

