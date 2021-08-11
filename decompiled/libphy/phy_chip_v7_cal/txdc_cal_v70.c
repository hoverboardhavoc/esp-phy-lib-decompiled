/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> txdc_cal_v70
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txdc_cal_v70(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  
  (**(code **)(_g_phyFuns + 0x1cc))(2,2,0x100,*(code **)(_g_phyFuns + 0x1cc));
  (**(code **)(_g_phyFuns + 0x1cc))(3,2,0x100,*(code **)(_g_phyFuns + 0x1cc));
  iVar7 = 1;
  while( true ) {
    iVar2 = 0;
    iVar1 = 0;
    iVar8 = 0x7c;
    bVar9 = 0;
    uVar3 = 0x100;
    uVar6 = 0x100;
    do {
      uVar3 = uVar3 & 0xffff;
      (**(code **)(_g_phyFuns + 0x1cc))(3,iVar7,uVar3,*(code **)(_g_phyFuns + 0x1cc));
      uVar6 = uVar6 & 0xffff;
      (**(code **)(_g_phyFuns + 0x1cc))(2,iVar7,uVar6,*(code **)(_g_phyFuns + 0x1cc));
      ets_delay_us(2);
      uVar4 = _DAT_6000e04c & 0xff000000 | 0x113cf3;
      do {
      } while (-1 < (int)(uVar4 << 7));
      if ((int)uVar4 < 0) {
        sVar5 = (short)(uVar6 - iVar8);
        if ((int)((uVar6 - iVar8) * 0x10000) < 0) {
          sVar5 = 0;
        }
      }
      else {
        sVar5 = (short)(uVar6 + iVar8);
        if (0x1ff < (int)((uVar6 + iVar8) * 0x10000) >> 0x10) {
          sVar5 = 0x1ff;
        }
      }
      uVar6 = (uint)sVar5;
      if ((_DAT_6000e04c & 0x40000000) == 0) {
        sVar5 = (short)(uVar3 + iVar8);
        if (0x1ff < (int)((uVar3 + iVar8) * 0x10000) >> 0x10) {
          sVar5 = 0x1ff;
        }
      }
      else {
        sVar5 = (short)(uVar3 - iVar8);
        if ((int)((uVar3 - iVar8) * 0x10000) < 0) {
          sVar5 = 0;
        }
      }
      uVar3 = (uint)sVar5;
      if (iVar8 == 2) {
        iVar8 = 1;
      }
      else {
        iVar8 = (iVar8 >> 1) + 1;
      }
      if (7 < bVar9) {
        iVar1 = (int)((iVar1 + uVar6) * 0x10000) >> 0x10;
        iVar2 = (int)((iVar2 + uVar3) * 0x10000) >> 0x10;
      }
      bVar9 = bVar9 + 1;
      _DAT_6000e04c = uVar4;
    } while (bVar9 != 0xc);
    uVar6 = iVar2 + 2 >> 2;
    (**(code **)(_g_phyFuns + 0x1cc))(3,iVar7,uVar6 & 0xffff,*(code **)(_g_phyFuns + 0x1cc));
    uVar3 = iVar1 + 2 >> 2;
    (**(code **)(_g_phyFuns + 0x1cc))(2,iVar7,uVar3 & 0xffff,*(code **)(_g_phyFuns + 0x1cc));
    *param_1 = (short)uVar3;
    param_1[1] = (short)uVar6;
    param_1 = param_1 + 2;
    if (iVar7 == 2) break;
    iVar7 = 2;
  }
  _DAT_6000e04c = _DAT_6000e04c & 0xff000000 | 0x113cf0;
  return;
}

