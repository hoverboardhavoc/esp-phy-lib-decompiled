/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> register_chipv7_phy_init_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void register_chipv7_phy_init_param(undefined1 *param_1)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  
  chip7_phy_init_ctrl[0] = *param_1;
  chip7_phy_init_ctrl[1] = 2;
  iVar7 = 2;
  do {
    puVar3 = param_1 + iVar7;
    puVar4 = chip7_phy_init_ctrl + iVar7;
    iVar7 = iVar7 + 1;
    *puVar4 = *puVar3;
  } while (iVar7 != 0x11);
  iVar7 = 0x11;
  do {
    puVar3 = param_1 + iVar7;
    puVar4 = chip7_phy_init_ctrl + iVar7;
    iVar7 = iVar7 + 1;
    *puVar4 = *puVar3;
  } while (iVar7 != 0x20);
  pcVar5 = param_1 + 0x20;
  pcVar8 = chip7_phy_init_ctrl;
  do {
    cVar1 = *pcVar5;
    pcVar6 = pcVar5 + 1;
    *pcVar8 = cVar1;
    cVar2 = pcVar5[3];
    pcVar8[6] = -0x1e;
    pcVar8[3] = cVar1 + cVar2;
    pcVar5 = pcVar6;
    pcVar8 = pcVar8 + 1;
  } while (pcVar6 != param_1 + 0x23);
  chip7_phy_init_ctrl[0x29] = param_1[0x29];
  chip7_phy_init_ctrl[0x2a] = param_1[0x2a];
  chip7_phy_init_ctrl[0x2b] = param_1[0x2b];
  iVar7 = 0x2c;
  do {
    puVar3 = param_1 + iVar7;
    puVar4 = chip7_phy_init_ctrl + iVar7;
    iVar7 = iVar7 + 1;
    *puVar4 = *puVar3;
  } while (iVar7 != 0x32);
  iVar7 = 0x32;
  do {
    puVar3 = param_1 + iVar7;
    puVar4 = chip7_phy_init_ctrl + iVar7;
    iVar7 = iVar7 + 1;
    *puVar4 = *puVar3;
  } while (iVar7 != 0x3a);
  chip7_phy_init_ctrl[0x3a] = param_1[0x3a];
  chip7_phy_init_ctrl[0x3b] = param_1[0x3b];
  chip7_phy_init_ctrl[0x3c] = param_1[0x3c];
  chip7_phy_init_ctrl[0x3d] = param_1[0x3d];
  iVar7 = 0x3e;
  do {
    puVar3 = param_1 + iVar7;
    puVar4 = chip7_phy_init_ctrl + iVar7;
    iVar7 = iVar7 + 1;
    *puVar4 = *puVar3;
  } while (iVar7 != 0x4c);
  iVar7 = 0x4c;
  do {
    puVar3 = param_1 + iVar7;
    puVar4 = chip7_phy_init_ctrl + iVar7;
    iVar7 = iVar7 + 1;
    *puVar4 = *puVar3;
  } while (iVar7 != 0x51);
  chip7_phy_init_ctrl[0x51] = param_1[0x51];
  iVar7 = 0x52;
  do {
    puVar3 = param_1 + iVar7;
    puVar4 = chip7_phy_init_ctrl + iVar7;
    iVar7 = iVar7 + 1;
    *puVar4 = *puVar3;
  } while (iVar7 != 0x5a);
  chip7_phy_init_ctrl[0x5b] = param_1[0x5a];
  chip7_phy_init_ctrl[0x5a] = param_1[0x5b];
  chip7_phy_init_ctrl[0x5c] = param_1[0x5c];
  chip7_phy_init_ctrl._94_2_ = ((byte)param_1[0x5d] & 0x7f) << 8 | (ushort)(byte)param_1[0x5e];
  chip7_phy_init_ctrl[0x61] = param_1[0x5f];
  chip7_phy_init_ctrl[0x60] = param_1[0x60];
  chip7_phy_init_ctrl[0x62] = param_1[0x61];
  chip7_phy_init_ctrl._100_2_ = ((byte)param_1[0x62] & 0x7f) << 8 | (ushort)(byte)param_1[99];
  chip7_phy_init_ctrl[0x67] = param_1[100];
  chip7_phy_init_ctrl[0x66] = param_1[0x65];
  chip7_phy_init_ctrl[0x68] = param_1[0x66];
  chip7_phy_init_ctrl._106_2_ = ((byte)param_1[0x67] & 0x7f) << 8 | (ushort)(byte)param_1[0x68];
  chip7_phy_init_ctrl[0x6c] = param_1[0x69];
  chip7_phy_init_ctrl[0x6d] = param_1[0x6a];
  return;
}

