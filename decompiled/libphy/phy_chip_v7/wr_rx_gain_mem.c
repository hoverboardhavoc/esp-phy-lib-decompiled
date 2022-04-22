/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> wr_rx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wr_rx_gain_mem(int param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                   uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte abStack_5c [12];
  byte local_50 [28];
  
  iVar10 = 0;
  if (param_1 != 0) {
    iVar10 = 0x50;
  }
  abStack_5c[0] = 0;
  abStack_5c[1] = 0;
  abStack_5c[2] = 1;
  abStack_5c[3] = 0;
  abStack_5c[4] = 5;
  abStack_5c[5] = 0;
  abStack_5c[6] = 0xd;
  abStack_5c[7] = 0;
  abStack_5c[8] = 0x1d;
  abStack_5c[9] = 0;
  memcpy(local_50,&_LANCHOR2,0xf);
  iVar7 = 0;
  uVar9 = 0;
  do {
    pbVar5 = local_50 + iVar7;
    iVar7 = iVar7 + 1;
    uVar9 = uVar9 + *pbVar5 & 0xff;
  } while (iVar7 != 8);
  uVar3 = uVar9;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  uVar2 = 4;
  uVar11 = 0;
  do {
    if (param_7 <= uVar3) {
      return;
    }
    if (param_2 == 0) {
      uVar1 = *(uint *)((uVar3 >> 1) * 4 + param_8);
      if ((uVar3 & 1) == 0) {
        uVar1 = uVar1 << 0x10;
      }
      uVar1 = uVar1 >> 0x10;
      uVar8 = 3;
      uVar2 = 0;
      do {
        uVar12 = uVar8 & 0x1f;
        uVar8 = uVar8 + 1;
        uVar2 = uVar2 + ((int)uVar1 >> uVar12 & 1U) & 0xff;
      } while (uVar8 != 9);
      uVar2 = uVar2 * 6 + (uVar1 & 7) & 0xff;
    }
    else {
      uVar1 = (uint)*param_3 << 8 | (uint)abStack_5c[(uVar2 / 6) * 2] * 8 + uVar2 % 6 & 0xff;
    }
    if ((param_1 == 0) && (uVar9 <= uVar3)) {
      uVar8 = *(uint *)(((int)DAT_0001466e - 1U & 0xffff) * 4 + param_6);
      uVar12 = uVar8 >> 0x10;
      uVar8 = uVar8 & 0xffff;
_L111:
      uVar4 = (int)uVar1 >> 3 & 0x1f;
      uVar13 = *(uint *)((uVar2 >> 1) * 4 + param_5);
      iVar7 = (uVar4 >> 1 & 1) +
              (uVar4 >> 4) + ((int)uVar1 >> 3 & 1U) + (uVar4 >> 3 & 1) + (uVar4 >> 2 & 1);
      uVar4 = uVar13 >> 0x10;
      uVar13 = uVar13 & 0xffff;
      if (iVar7 != 0) {
        iVar7 = 1;
      }
      uVar6 = (uint)(*(ushort *)(&phy_param + (iVar7 + 0xa8) * 2) >> 7) << 6 |
              *(ushort *)(&phy_param + (iVar7 + 0xa8) * 2) & 0x3f;
    }
    else {
      if ((uVar1 & 0xffffff00) != (uint)param_3[uVar11] << 8) {
        uVar11 = uVar11 + 1 & 0xff;
      }
      uVar8 = *(uint *)(uVar11 * 4 + param_4);
      uVar12 = uVar8 >> 0x10;
      uVar8 = uVar8 & 0xffff;
      if (param_1 == 0) goto _L111;
      uVar13 = 0x100;
      uVar4 = 0x100;
      uVar6 = 0;
    }
    (**(code **)(g_phyFuns + 0x2c))
              (((int)uVar4 >> 1) + uVar1 * 0x20000 + uVar12 * 0x100,
               uVar8 * 0x400000 + uVar4 * -0x80000000 + uVar13 * 0x2000 + (uVar6 & 0x7ff) * 4,
               uVar3 + iVar10 & 0xff,*(code **)(g_phyFuns + 0x2c));
    if (param_2 != 0) {
      uVar2 = uVar2 + 1 & 0xff;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while( true );
}

