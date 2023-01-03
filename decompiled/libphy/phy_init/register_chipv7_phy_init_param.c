/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_init.o -> register_chipv7_phy_init_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void register_chipv7_phy_init_param(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  DAT_00010a7a = *param_1;
  DAT_00010a7b = param_1[1];
  puVar3 = param_1 + 2;
  puVar2 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)(puVar2 + 0x14) = uVar1;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (puVar3 != param_1 + 0x14);
  DAT_00010a8e = param_1[0x14];
  if ((char)DAT_00010a8e < '\0') {
    DAT_00010a57 = DAT_00010a8e & 0x7f;
  }
  DAT_00010a90 = param_1[0x16];
  puVar3 = param_1 + 0x17;
  puVar2 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)((int)puVar2 + 0x6e) = uVar1;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (puVar3 != param_1 + 0x25);
  puVar2 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)(puVar2 + 0x1f) = uVar1;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (puVar3 != param_1 + 0x33);
  puVar2 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)((int)puVar2 + 0x8a) = uVar1;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (puVar3 != param_1 + 0x41);
  puVar2 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)((int)puVar2 + 0x65) = uVar1;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (param_1 + 0x4a != puVar3);
  _DAT_00010ac6 = CONCAT11(param_1[0x4a],param_1[0x4b]);
  DAT_00010aca = param_1[0x4c];
  _DAT_00010ac8 = ((byte)param_1[0x4d] & 0x7f) << 8 | (ushort)(byte)param_1[0x4e];
  DAT_00010acb = param_1[0x4f];
  DAT_00010acc = param_1[0x50];
  return;
}

