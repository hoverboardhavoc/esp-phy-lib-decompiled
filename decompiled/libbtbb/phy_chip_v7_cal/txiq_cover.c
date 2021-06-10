/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> txiq_cover
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txiq_cover(int param_1,undefined4 param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  short sStack_44;
  short local_42 [7];
  
  uVar5 = (param_1 + -0xc) * 0x1000000 >> 0x18;
  uVar2 = 0;
  if (-1 < (int)uVar5) {
    uVar2 = uVar5 & 0xff;
  }
  iVar11 = 0;
  iVar9 = 0;
  iVar10 = 0;
  iVar12 = 0;
  bVar13 = 0;
  do {
    if (bVar13 < 3) {
      uVar5 = iVar10 * iVar10 + 0x80 >> 8 & 0xff;
      iVar12 = txiq_set_reg((int)((uVar5 + iVar12) * 0x1000000) >> 0x18,1);
      iVar10 = txiq_set_reg(iVar10,0);
      iVar12 = (int)((iVar12 - uVar5) * 0x1000000) >> 0x18;
    }
    txiq_get_mis_pwr(1,uVar2,param_2,&sStack_44,local_42,param_4);
    sVar4 = local_42[0];
    if ((int)sStack_44 < (int)local_42[0]) {
      sVar4 = sStack_44;
    }
    iVar3 = (int)sVar4;
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    *param_3 = (byte)((((int)local_42[0] - (int)sStack_44) * 0x800) / iVar3 + 0x10 >> 5);
    txiq_get_mis_pwr(0,param_1,param_2,&sStack_44,local_42,param_4);
    iVar3 = ((int)sStack_44 + (int)local_42[0]) * 0x10000 >> 0x10;
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    bVar1 = *param_3;
    uVar5 = (uint)bVar1;
    uVar6 = (((int)sStack_44 - (int)local_42[0]) * 0x1000) / iVar3 + 0x10 >> 5;
    param_3[1] = (byte)uVar6;
    uVar7 = uVar6 & 0xff;
    if (bVar13 < 3) {
_L99:
      iVar12 = (int)((iVar12 - uVar5) * 0x1000000) >> 0x18;
      iVar10 = (int)((iVar10 - uVar7) * 0x1000000) >> 0x18;
    }
    else {
      uVar8 = (int)(char)bVar1 >> 0x1f;
      iVar9 = (int)((iVar9 + uVar5) * 0x1000000) >> 0x18;
      iVar11 = (int)((uVar7 + iVar11) * 0x1000000) >> 0x18;
      if (((int)(((int)(char)bVar1 ^ uVar8) - uVar8) < 2) &&
         (uVar5 = (int)(uVar6 << 0x18) >> 0x1f,
         (int)(((int)(uVar6 << 0x18) >> 0x18 ^ uVar5) - uVar5) < 2)) break;
      if (bVar13 == 6) {
        uVar5 = iVar9 + 2 >> 2;
        uVar7 = iVar11 + 2 >> 2;
        goto _L99;
      }
    }
    bVar13 = bVar13 + 1;
  } while (bVar13 != 7);
  txiq_set_reg(iVar12,1);
  txiq_set_reg(iVar10,0);
  *param_3 = (byte)iVar12;
  param_3[1] = (byte)iVar10;
  return;
}

