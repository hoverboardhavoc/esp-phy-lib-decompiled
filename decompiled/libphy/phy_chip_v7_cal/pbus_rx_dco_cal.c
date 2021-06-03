/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> pbus_rx_dco_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_rx_dco_cal(undefined4 param_1,short *param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  char cVar16;
  int iVar17;
  int iStack_70;
  int iStack_6c;
  int iStack_4c;
  int iStack_48;
  
  uVar2 = (**(code **)(_g_phyFuns + 0x1d0))(1,2,*(code **)(_g_phyFuns + 0x1d0));
  uVar1 = 0;
  for (uVar11 = uVar2 & 0x30; uVar11 != 0; uVar11 = uVar11 >> 1) {
    uVar1 = uVar1 + (uVar11 & 1) & 0xff;
  }
  uVar11 = 0;
  for (uVar7 = uVar2 & 0xf; uVar7 != 0; uVar7 = uVar7 >> 1) {
    uVar11 = uVar11 + (uVar7 & 1) & 0xff;
  }
  uVar2 = uVar2 >> 6 & 0xff;
  (**(code **)(_g_phyFuns + 0x1cc))(2,2,0x100,*(code **)(_g_phyFuns + 0x1cc));
  uVar1 = uVar1 + uVar11 & 0xff;
  (**(code **)(_g_phyFuns + 0x1cc))(3,2,0x100,*(code **)(_g_phyFuns + 0x1cc));
  iVar15 = 5;
  if (2 < uVar1) {
    iVar15 = 0xf;
  }
  uVar7 = 4;
  if (uVar11 != 0) {
    uVar7 = uVar11 + 5;
  }
  uVar11 = (uVar7 & 0xff) + 2;
  iVar8 = 5;
  if (uVar1 < 4) {
    iVar8 = 2;
  }
  uVar7 = uVar1 + 6 & 0xff;
  iVar17 = 0;
  iVar9 = 0;
  iVar13 = ((int)*param_2 << 0x11) >> 0x10;
  iVar12 = ((int)param_2[1] << 0x11) >> 0x10;
  cVar6 = '\f';
  do {
    cVar16 = '\0';
    do {
      uVar5 = iVar13 + 1 >> 1;
      pcVar10 = *(code **)(_g_phyFuns + 0x1cc);
      *param_2 = (short)uVar5;
      (*pcVar10)(2,iVar9 + 1,uVar5 & 0xffff,pcVar10);
      pcVar10 = *(code **)(_g_phyFuns + 0x1cc);
      uVar5 = iVar12 + 1 >> 1;
      param_2[1] = (short)uVar5;
      (*pcVar10)(3,iVar9 + 1,uVar5 & 0xffff,pcVar10);
      ets_delay_us(param_3);
      (**(code **)(_g_phyFuns + 0x10c))(1,param_1,&iStack_4c,*(code **)(_g_phyFuns + 0x10c));
      if (param_5 != 0) {
        phy_printf(" (%d,%d) ",(int)*param_2,(int)param_2[1]);
        phy_printf("%d,%d ",iStack_4c,iStack_48);
      }
      iVar3 = (**(code **)(_g_phyFuns + 0x100))(iStack_4c,*(code **)(_g_phyFuns + 0x100));
      if ((iVar3 <= iVar15) &&
         (iVar3 = (**(code **)(_g_phyFuns + 0x100))(iStack_48,*(code **)(_g_phyFuns + 0x100)),
         iVar3 <= iVar15)) break;
      if (cVar16 == '\0') {
        iStack_70 = iStack_4c;
        iStack_6c = iStack_48;
      }
      if (iVar17 == 0) {
        iVar3 = (**(code **)(_g_phyFuns + 0x100))();
        uVar5 = uVar7;
        if (iVar15 < iVar3) {
          iVar3 = (**(code **)(_g_phyFuns + 0x100))
                            (iStack_4c - iStack_70,*(code **)(_g_phyFuns + 0x100));
          iVar4 = (**(code **)(_g_phyFuns + 0x100))
                            ((iStack_4c * 3) / 2,*(code **)(_g_phyFuns + 0x100));
          if (iVar4 < iVar3) {
            uVar5 = uVar1 + 7 & 0xff;
          }
          iVar13 = (iVar13 - ((int)((uint)(byte)(&_LANCHOR0)[uVar2] * iStack_4c * 6) >>
                             (uVar5 + 2 & 0x1f))) * 0x10000 >> 0x10;
        }
        iVar3 = (**(code **)(_g_phyFuns + 0x100))(iStack_48,*(code **)(_g_phyFuns + 0x100));
        if (iVar15 < iVar3) {
          iVar3 = (**(code **)(_g_phyFuns + 0x100))
                            (iStack_48 - iStack_6c,*(code **)(_g_phyFuns + 0x100));
          iVar4 = (**(code **)(_g_phyFuns + 0x100))
                            ((iStack_48 * 3) / 2,*(code **)(_g_phyFuns + 0x100));
          if (iVar4 < iVar3) {
            uVar5 = uVar5 + 1 & 0xff;
          }
          sVar14 = (short)((int)((uint)(byte)(&_LANCHOR0)[uVar2] * iStack_48 * 6) >>
                          (uVar5 + 2 & 0x1f));
_L138:
          iVar12 = (int)(short)((short)iVar12 - sVar14);
        }
      }
      else {
        iVar3 = (**(code **)(_g_phyFuns + 0x100))();
        if (iVar15 < iVar3) {
          iVar13 = (iVar13 - (iStack_4c * 0x118 >> (uVar11 & 0x1f))) * 0x10000 >> 0x10;
        }
        iVar3 = (**(code **)(_g_phyFuns + 0x100))(iStack_48,*(code **)(_g_phyFuns + 0x100));
        if (iVar15 < iVar3) {
          sVar14 = (short)(iStack_48 * 0x118 >> (uVar11 & 0x1f));
          goto _L138;
        }
      }
      if (0x3fe < iVar13) {
        iVar13 = 0x3fe;
      }
      sVar14 = (short)iVar13;
      if (iVar13 << 0x10 < 0) {
        sVar14 = 0;
      }
      iVar13 = (int)sVar14;
      if (0x3fe < iVar12) {
        iVar12 = 0x3fe;
      }
      sVar14 = (short)iVar12;
      if (iVar12 << 0x10 < 0) {
        sVar14 = 0;
      }
      iStack_70 = iStack_4c;
      cVar16 = cVar16 + '\x01';
      iStack_6c = iStack_48;
      iVar12 = (int)sVar14;
    } while (cVar6 != cVar16);
    if (param_4 != 0) {
      phy_printf("stage %d: CGAIN=%d FGAIN=%d, (%d,%d) %d; ",iVar17 + 1,uVar1,uVar2,iStack_4c,
                 iStack_48,cVar16);
    }
    if (param_5 != 0) {
      phy_printf(&_LC3);
    }
    param_2 = param_2 + 2;
    if (iVar17 != 0) {
      if (param_4 != 0) {
        phy_printf(&_LC3);
      }
      return;
    }
    iVar17 = 1;
    iVar9 = 1;
    iVar12 = 0x200;
    iVar13 = 0x200;
    cVar6 = '\x04';
    iVar15 = iVar8;
  } while( true );
}

