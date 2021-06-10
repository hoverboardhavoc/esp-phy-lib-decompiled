/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> pbus_rx_dco_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pbus_rx_dco_cal(undefined4 param_1,short *param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  uint uStack_4c;
  uint uStack_48;
  
  uVar3 = pbus_rd(1,2);
  uVar2 = 0;
  for (uVar8 = uVar3 & 0x3f; uVar8 != 0; uVar8 = uVar8 >> 1) {
    uVar2 = uVar2 + (uVar8 & 1) & 0xff;
  }
  uVar3 = uVar3 >> 6 & 0xff;
  pbus_force_test(2,2,0x100);
  pbus_force_test(3,2,0x100);
  iVar15 = 5;
  if (2 < uVar2) {
    iVar15 = 0xf;
  }
  iVar9 = 5;
  if (uVar2 < 4) {
    iVar9 = 2;
  }
  uVar13 = 1;
  bVar1 = false;
  pbVar12 = (byte *)((int)&dco_gain_coarse_3882 + uVar3);
  uVar8 = (uVar2 + 5 & 0xff) + 2;
  iVar11 = ((int)*param_2 << 0x11) >> 0x10;
  iVar16 = ((int)param_2[1] << 0x11) >> 0x10;
  cVar14 = '\f';
  do {
    cVar10 = '\0';
    do {
      uVar7 = iVar11 + 1 >> 1;
      *param_2 = (short)uVar7;
      pbus_force_test(2,uVar13 & 0xff,uVar7 & 0xffff);
      uVar7 = iVar16 + 1 >> 1;
      param_2[1] = (short)uVar7;
      pbus_force_test(3,uVar13 & 0xff,uVar7 & 0xffff);
      ets_delay_us(param_3);
      dc_iq_est(1,param_1,&uStack_4c);
      if (param_5 != 0) {
        ets_printf(" (%d,%d) ",(int)*param_2,(int)param_2[1]);
        ets_printf("%d,%d ",uStack_4c,uStack_48);
      }
      iVar5 = ((int)uStack_4c >> 0x1f ^ uStack_4c) - ((int)uStack_4c >> 0x1f);
      iVar4 = ((int)uStack_48 >> 0x1f ^ uStack_48) - ((int)uStack_48 >> 0x1f);
      if ((iVar5 <= iVar15) && (iVar4 <= iVar15)) break;
      if (bVar1) {
        uVar7 = uVar2;
        if (uVar2 < 2) {
          uVar7 = 2;
        }
        uVar7 = uVar7 + 2 & 0xff;
        if (iVar15 < iVar5) {
          iVar11 = (iVar11 - ((int)(uStack_4c * 0x118) >> (uVar7 + 2 & 0x1f))) * 0x10000 >> 0x10;
        }
        if (iVar15 < iVar4) {
          iVar4 = (int)(uStack_48 * 0x118) >> (uVar7 + 2 & 0x1f);
          goto _L287;
        }
      }
      else {
        if (iVar15 < iVar5) {
          iVar11 = (iVar11 - ((int)(*pbVar12 * uStack_4c * 6) >> (uVar8 & 0x1f))) * 0x10000 >> 0x10;
        }
        if (iVar15 < iVar4) {
          iVar4 = (int)(*pbVar12 * uStack_48 * 6) >> (uVar8 & 0x1f);
_L287:
          iVar16 = (iVar16 - iVar4) * 0x10000 >> 0x10;
        }
      }
      if (0x3fe < iVar11) {
        iVar11 = 0x3fe;
      }
      sVar6 = (short)iVar11;
      if (iVar11 << 0x10 < 0) {
        sVar6 = 0;
      }
      iVar11 = (int)sVar6;
      if (0x3fe < iVar16) {
        iVar16 = 0x3fe;
      }
      sVar6 = (short)iVar16;
      if (iVar16 << 0x10 < 0) {
        sVar6 = 0;
      }
      cVar10 = cVar10 + '\x01';
      iVar16 = (int)sVar6;
    } while (cVar14 != cVar10);
    if (param_4 != 0) {
      ets_printf("stage %d: CGAIN=%d FGAIN=%d, (%d,%d) %d; ",uVar13,uVar2,uVar3);
    }
    if (param_5 != 0) {
      ets_printf(&_LC8);
    }
    uVar13 = uVar13 + 1;
    param_2 = param_2 + 2;
    if (bVar1) {
      if (param_4 != 0) {
        ets_printf(&_LC8);
      }
      return;
    }
    bVar1 = true;
    iVar16 = 0x200;
    iVar11 = 0x200;
    cVar14 = '\x04';
    iVar15 = iVar9;
  } while( true );
}

