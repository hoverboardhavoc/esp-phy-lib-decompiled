/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> txiq_cover
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txiq_cover(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  short local_44;
  short asStack_42 [7];
  
  uVar5 = (param_1 + -0xc) * 0x1000000 >> 0x18;
  uVar9 = 0;
  if (-1 < (int)uVar5) {
    uVar9 = uVar5 & 0xff;
  }
  iVar11 = 0;
  iVar10 = 0;
  iVar2 = 0;
  iVar12 = 0;
  bVar13 = 0;
  do {
    if (bVar13 < 3) {
      iVar12 = txiq_set_reg(iVar12,1);
      iVar2 = txiq_set_reg(iVar2,0);
    }
    txiq_get_mis_pwr(1,uVar9,param_2,&local_44,asStack_42);
    sVar3 = asStack_42[0];
    if ((int)local_44 < (int)asStack_42[0]) {
      sVar3 = local_44;
    }
    iVar4 = (int)sVar3;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    *param_3 = (byte)((((int)asStack_42[0] - (int)local_44) * 0x800) / iVar4 + 0x10 >> 5);
    txiq_get_mis_pwr(0,param_1,param_2,&local_44,asStack_42);
    iVar4 = ((int)local_44 + (int)asStack_42[0]) * 0x10000 >> 0x10;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    bVar1 = *param_3;
    uVar5 = (uint)bVar1;
    uVar6 = (((int)local_44 - (int)asStack_42[0]) * 0x1000) / iVar4 + 0x10 >> 5;
    param_3[1] = (byte)uVar6;
    uVar7 = uVar6 & 0xff;
    if (bVar13 < 3) {
_L309:
      iVar12 = (int)((iVar12 - uVar5) * 0x1000000) >> 0x18;
      iVar2 = (int)((iVar2 - uVar7) * 0x1000000) >> 0x18;
    }
    else {
      uVar8 = (int)(char)bVar1 >> 0x1f;
      iVar10 = (int)((iVar10 + uVar5) * 0x1000000) >> 0x18;
      iVar11 = (int)((uVar7 + iVar11) * 0x1000000) >> 0x18;
      if (((int)(((int)(char)bVar1 ^ uVar8) - uVar8) < 2) &&
         (uVar5 = (int)(uVar6 << 0x18) >> 0x1f,
         (int)(((int)(uVar6 << 0x18) >> 0x18 ^ uVar5) - uVar5) < 2)) break;
      if (bVar13 == 6) {
        uVar5 = iVar10 + 2 >> 2;
        uVar7 = iVar11 + 2 >> 2;
        goto _L309;
      }
    }
    bVar13 = bVar13 + 1;
  } while (bVar13 != 7);
  txiq_set_reg(iVar12,1);
  txiq_set_reg(iVar2,0);
  param_3[1] = (byte)iVar2;
  *param_3 = (byte)iVar12;
  return;
}

