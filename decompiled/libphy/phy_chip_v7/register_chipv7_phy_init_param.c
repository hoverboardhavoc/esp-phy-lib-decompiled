/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> register_chipv7_phy_init_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void register_chipv7_phy_init_param(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  
  DAT_00012e46 = *param_1;
  DAT_00012e47 = param_1[1];
  puVar3 = param_1 + 2;
  puVar2 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)(puVar2 + 0x4e) = uVar1;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  } while (puVar3 != param_1 + 0x12);
  DAT_00012e58 = param_1[0x10];
  if ((char)DAT_00012e58 < '\0') {
    power_cal_offset = DAT_00012e58 & 0x7f;
  }
  DAT_00012e5a = param_1[0x12];
  puVar3 = param_1 + 0x13;
  puVar2 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)((int)puVar2 + 0xaf) = uVar1;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  } while (puVar3 != param_1 + 0x21);
  puVar2 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)((int)puVar2 + 0xbd) = uVar1;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  } while (puVar3 != param_1 + 0x2f);
  puVar2 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)((int)puVar2 + 0xcb) = uVar1;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  } while (puVar3 != param_1 + 0x3d);
  puVar2 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)((int)puVar2 + 0xd9) = uVar1;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  } while (param_1 + 0x46 != puVar3);
  DAT_00012e98 = CONCAT11(param_1[0x46],param_1[0x47]);
  DAT_00012e9a = param_1[0x48];
  DAT_00012e9c = ((byte)param_1[0x49] & 0x7f) << 8 | (ushort)(byte)param_1[0x4a];
  DAT_00012e9e = param_1[0x4b];
  DAT_00012e9f = param_1[0x4c];
  return;
}

