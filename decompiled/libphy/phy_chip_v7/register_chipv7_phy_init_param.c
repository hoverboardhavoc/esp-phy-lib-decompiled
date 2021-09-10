/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7.o -> register_chipv7_phy_init_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void register_chipv7_phy_init_param(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  
  DAT_00012ebe = *param_1;
  DAT_00012ebf = param_1[1];
  puVar3 = param_1 + 2;
  puVar2 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)(puVar2 + 0x4e) = uVar1;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  } while (puVar3 != param_1 + 0x12);
  DAT_00012ed0 = param_1[0x10];
  if ((char)DAT_00012ed0 < '\0') {
    power_cal_offset = DAT_00012ed0 & 0x7f;
  }
  DAT_00012ed2 = param_1[0x12];
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
  _DAT_00012f10 = CONCAT11(param_1[0x46],param_1[0x47]);
  DAT_00012f12 = param_1[0x48];
  _DAT_00012f14 = ((byte)param_1[0x49] & 0x7f) << 8 | (ushort)(byte)param_1[0x4a];
  DAT_00012f16 = param_1[0x4b];
  DAT_00012f17 = param_1[0x4c];
  return;
}

