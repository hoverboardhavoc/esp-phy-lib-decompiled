/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_tx_cal.o -> txdc_cal_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txdc_cal_new(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  
  (**(code **)(_g_phyFuns + 0x74))(2,2,0x100,*(code **)(_g_phyFuns + 0x74));
  iVar7 = 1;
  (**(code **)(_g_phyFuns + 0x74))(3,2,0x100,*(code **)(_g_phyFuns + 0x74));
  while( true ) {
    iVar2 = 0;
    iVar1 = 0;
    iVar8 = 0x7c;
    bVar9 = 0;
    uVar3 = 0x100;
    uVar6 = 0x100;
    do {
      uVar3 = uVar3 & 0xffff;
      (**(code **)(_g_phyFuns + 0x74))(3,iVar7,uVar3,*(code **)(_g_phyFuns + 0x74));
      uVar6 = uVar6 & 0xffff;
      (**(code **)(_g_phyFuns + 0x74))(2,iVar7,uVar6,*(code **)(_g_phyFuns + 0x74));
      ets_delay_us(2);
      uVar5 = _DAT_600a0418 & 0xfffffffe | 3;
      do {
      } while (-1 < (int)(uVar5 << 9));
      if ((int)(uVar5 << 2) < 0) {
        sVar4 = (short)(uVar6 - iVar8);
        if ((int)((uVar6 - iVar8) * 0x10000) < 0) {
          sVar4 = 0;
        }
      }
      else {
        sVar4 = (short)(uVar6 + iVar8);
        if (0x1ff < (int)((uVar6 + iVar8) * 0x10000) >> 0x10) {
          sVar4 = 0x1ff;
        }
      }
      uVar6 = (uint)sVar4;
      if ((_DAT_600a0418 & 0x10000000) == 0) {
        sVar4 = (short)(uVar3 + iVar8);
        if (0x1ff < (int)((uVar3 + iVar8) * 0x10000) >> 0x10) {
          sVar4 = 0x1ff;
        }
      }
      else {
        sVar4 = (short)(uVar3 - iVar8);
        if ((int)((uVar3 - iVar8) * 0x10000) < 0) {
          sVar4 = 0;
        }
      }
      uVar3 = (uint)sVar4;
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
      _DAT_600a0418 = uVar5;
    } while (bVar9 != 0xc);
    uVar6 = iVar2 + 2 >> 2;
    (**(code **)(_g_phyFuns + 0x74))(3,iVar7,uVar6 & 0xffff,*(code **)(_g_phyFuns + 0x74));
    uVar3 = iVar1 + 2 >> 2;
    (**(code **)(_g_phyFuns + 0x74))(2,iVar7,uVar3 & 0xffff,*(code **)(_g_phyFuns + 0x74));
    *param_1 = (short)uVar3;
    param_1[1] = (short)uVar6;
    param_1 = param_1 + 2;
    if (iVar7 == 2) break;
    iVar7 = 2;
  }
  _DAT_600a0418 = _DAT_600a0418 & 0xfffffffc;
  return;
}

