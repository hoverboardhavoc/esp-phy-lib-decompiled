/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> pbus_rx_dco_cal_1step
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pbus_rx_dco_cal_1step
               (int param_1,uint param_2,uint param_3,undefined4 param_4,short *param_5,int param_6,
               uint param_7,uint *param_8)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  short sVar14;
  char cVar15;
  short sVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  uint uVar22;
  char cVar23;
  int iStack_9c;
  uint uStack_94;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int local_58;
  int iStack_54;
  int iStack_4c;
  int iStack_48;
  
  sVar1 = *param_5;
  sVar2 = param_5[1];
  uStack_94 = 0;
  if ((param_3 & 0xfd) == 0) {
    bVar3 = false;
    iVar18 = ((int)sVar1 << 0x11) >> 0x10;
    iVar6 = ((int)sVar2 << 0x11) >> 0x10;
    iVar13 = 0;
_L290:
    uStack_94 = param_2 | 8;
    cVar17 = '\f';
    if (!bVar3) goto _L291;
  }
  else {
    if (param_1 != 0) {
      iVar18 = 0x200;
      bVar3 = true;
      iVar13 = 1;
      iVar6 = 0x200;
      goto _L290;
    }
    pbus_set_rxgain(param_2);
    iVar18 = 0x200;
    bVar3 = true;
    iVar13 = 1;
    iVar6 = 0x200;
  }
  cVar17 = '\x06';
_L291:
  uVar19 = 0x1ff;
  uVar20 = 0x1ff;
  sVar14 = 0;
  sVar16 = 0;
  cVar15 = '\0';
_L326:
  uVar11 = iVar18 + 1 >> 1;
  param_5[1] = (short)(iVar6 + 1 >> 1);
  *param_5 = (short)uVar11;
  pbus_force_test(2,iVar13 + 1,uVar11 & 0xffff);
  pbus_force_test(3,iVar13 + 1,param_5[1]);
  ets_delay_us(10);
  bVar21 = false;
  uVar11 = (int)uVar19 >> 0x1f;
  uVar12 = (int)uVar20 >> 0x1f;
  if ((param_1 != 0) || (!bVar3)) {
    piVar5 = &local_58;
    uVar7 = param_2;
    do {
      iStack_9c = 0x2d;
      if (uVar7 < 0x5c01) {
        iStack_9c = 0x28;
      }
      pbus_set_rxgain();
      cVar23 = '0';
      iVar4 = 0;
      do {
        dc_iq_est(1,param_4,piVar5);
        iVar8 = piVar5[2];
        if (iVar8 < iStack_9c) {
          if (iVar4 == 0) {
            iStack_7c = *piVar5;
            iVar4 = 1;
            iStack_80 = piVar5[1];
            iStack_78 = iVar8;
          }
          else {
            iVar4 = 2;
          }
        }
        if (bVar21) {
          sVar16 = sVar16 + 1;
        }
        else {
          sVar14 = sVar14 + 1;
        }
        bVar9 = sVar14 == 0x2f;
        if (sVar16 == 0x2f) {
          bVar9 = bVar9 | 2;
          if (iVar4 != 2) goto _L301;
_L300:
          *piVar5 = (*piVar5 + iStack_7c) / 2;
          piVar5[1] = (piVar5[1] + iStack_80) / 2;
          piVar5[2] = (iVar8 + iStack_78) / 2;
          if (bVar9 != 0) goto _L301;
          break;
        }
        if (iVar4 == 2) goto _L300;
        if (sVar14 == 0x2f) {
          bVar9 = 1;
          goto _L301;
        }
        cVar23 = cVar23 + -1;
      } while (cVar23 != '\0');
      bVar9 = 0;
      if (bVar21) goto _L301;
      bVar21 = true;
      piVar5 = &iStack_4c;
      uVar7 = uStack_94;
    } while( true );
  }
  dc_iq_est(1,param_4,param_8);
  goto _L293;
_L301:
  if (local_58 == 0x1ff) {
    if (iStack_4c == 0x1ff) {
      uVar7 = 0x40;
    }
    else {
_L307:
      uVar7 = iStack_4c - local_58;
    }
  }
  else {
    if ((local_58 != -0x200) || (iStack_4c != -0x200)) goto _L307;
    uVar7 = 0xffffffc0;
  }
  *param_8 = uVar7;
  if (iStack_54 == 0x1ff) {
    if (iStack_48 == 0x1ff) {
      uVar7 = 0x40;
      goto _L348;
    }
  }
  else if ((iStack_54 == -0x200) && (iStack_48 == -0x200)) {
    uVar7 = 0xffffffc0;
    goto _L348;
  }
  uVar7 = iStack_48 - iStack_54;
_L348:
  param_8[1] = uVar7;
  if (bVar9 != 0) {
    if (((int)((uVar12 ^ uVar20) - uVar12) < 0x11) && ((int)((uVar11 ^ uVar19) - uVar11) < 0x11)) {
      return;
    }
    *param_5 = sVar1;
    param_5[1] = sVar2;
    *param_8 = uVar20;
    param_8[1] = uVar19;
    return;
  }
_L293:
  uVar22 = *param_8;
  uVar7 = param_8[1];
  iVar4 = ((int)uVar22 >> 0x1f ^ uVar22) - ((int)uVar22 >> 0x1f);
  iVar8 = ((int)uVar7 >> 0x1f ^ uVar7) - ((int)uVar7 >> 0x1f);
  if (iVar4 < 3) {
    if (iVar8 < 3) {
      return;
    }
  }
  else if ((int)(((uVar12 ^ uVar20) - uVar12) + 0x20) < iVar4) {
    iVar4 = 0x20;
    if ((int)uVar22 <= (int)uVar20) {
      iVar4 = -0x20;
    }
    *param_8 = iVar4 + uVar20;
  }
  if ((int)(((uVar11 ^ uVar19) - uVar11) + 0x20) < iVar8) {
    iVar4 = 0x20;
    if ((int)uVar7 <= (int)uVar19) {
      iVar4 = -0x20;
    }
    param_8[1] = iVar4 + uVar19;
  }
  uVar20 = *param_8;
  uVar19 = param_8[1];
  if (2 < (int)(((int)uVar20 >> 0x1f ^ uVar20) - ((int)uVar20 >> 0x1f))) {
    iVar18 = (iVar18 - ((int)(uVar20 * param_6) >> (param_7 & 0x1f))) * 0x10000 >> 0x10;
  }
  if (2 < (int)(((int)uVar19 >> 0x1f ^ uVar19) - ((int)uVar19 >> 0x1f))) {
    iVar6 = (iVar6 - ((int)(uVar19 * param_6) >> (param_7 & 0x1f))) * 0x10000 >> 0x10;
  }
  if (0x3fe < iVar18) {
    iVar18 = 0x3fe;
  }
  sVar10 = (short)iVar18;
  if (iVar18 << 0x10 < 0) {
    sVar10 = 0;
  }
  iVar18 = (int)sVar10;
  if (0x3fe < iVar6) {
    iVar6 = 0x3fe;
  }
  sVar10 = (short)iVar6;
  if (iVar6 << 0x10 < 0) {
    sVar10 = 0;
  }
  cVar15 = cVar15 + '\x01';
  iVar6 = (int)sVar10;
  if (cVar17 == cVar15) {
    return;
  }
  goto _L326;
}

