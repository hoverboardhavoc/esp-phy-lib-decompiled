/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
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
  
  DAT_00010a9a = *param_1;
  DAT_00010a9b = param_1[1];
  puVar3 = param_1 + 2;
  puVar2 = &phy_param;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)(puVar2 + 0x14) = uVar1;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (puVar3 != param_1 + 0x14);
  DAT_00010aae = param_1[0x14];
  if ((char)DAT_00010aae < '\0') {
    DAT_00010a77 = DAT_00010aae & 0x7f;
  }
  DAT_00010ab0 = param_1[0x16];
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
  _DAT_00010ae6 = CONCAT11(param_1[0x4a],param_1[0x4b]);
  DAT_00010aea = param_1[0x4c];
  _DAT_00010ae8 = ((byte)param_1[0x4d] & 0x7f) << 8 | (ushort)(byte)param_1[0x4e];
  DAT_00010aeb = param_1[0x4f];
  DAT_00010aec = param_1[0x50];
  return;
}

