/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_cal.o -> pbus_rx_dco_cal_1step
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_rx_dco_cal_1step(int param_1,int param_2,undefined4 param_3,short *param_4,int *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  code *pcVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  sVar1 = param_4[1];
  iVar12 = (int)sVar1;
  iStack_58 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  iStack_4c = 0;
  iStack_48 = 0;
  uStack_44 = 0;
  sVar2 = *param_4;
  uVar18 = (uint)sVar2;
  uVar5 = (**(code **)(_g_phyFuns + 0x1d0))(1,2,*(code **)(_g_phyFuns + 0x1d0));
  uVar9 = 0;
  uVar16 = 0;
  do {
    uVar17 = uVar16 + ((int)(uVar5 & 0xff) >> (uVar9 & 0x1f) & 1U);
    uVar9 = uVar9 + 1;
    uVar16 = uVar17 & 0xff;
  } while (uVar9 != 6);
  if (param_2 == 0) {
    uVar5 = uVar16;
    if (uVar16 < 2) {
      uVar5 = 2;
    }
    uVar5 = uVar5 - 1 & 0xff;
  }
  else {
    uVar5 = 6;
    if (param_1 == 0) {
      uVar5 = 2;
    }
  }
  cVar10 = '\b';
  cVar15 = (param_2 == 0) + '\x01';
  uVar9 = uVar18;
  iVar8 = iVar12;
  do {
    pcVar11 = *(code **)(_g_phyFuns + 0x1cc);
    *param_4 = (short)uVar9;
    param_4[1] = (short)iVar8;
    (*pcVar11)(2,cVar15,uVar9 & 0xffff,pcVar11);
    (**(code **)(_g_phyFuns + 0x1cc))(3,cVar15,param_4[1],*(code **)(_g_phyFuns + 0x1cc));
    if (param_2 == 0) {
      ets_delay_us(10);
      rxdc_est_min(param_3,1,param_5,&uStack_5a);
      uStack_59 = 0;
      uVar13 = uVar17 & 0xff;
      if (uVar16 == 0) {
        uVar13 = 1;
      }
      uVar13 = uVar13 - 1 & 0xff;
    }
    else {
      uVar13 = 3;
      (**(code **)(_g_phyFuns + 0x1cc))(1,2,0,*(code **)(_g_phyFuns + 0x1cc));
      ets_delay_us(10);
      rxdc_est_min(param_3,1,&iStack_58,&uStack_5a);
      (**(code **)(_g_phyFuns + 0x1cc))(1,2,0x20,*(code **)(_g_phyFuns + 0x1cc));
      ets_delay_us(10);
      rxdc_est_min(param_3,1,&iStack_4c,&uStack_59);
      *param_5 = iStack_4c - iStack_58;
      param_5[1] = iStack_48 - iStack_54;
      (**(code **)(_g_phyFuns + 0x100))(*(code **)(_g_phyFuns + 0x100));
      (**(code **)(_g_phyFuns + 0x100))(param_5[1],*(code **)(_g_phyFuns + 0x100));
      if (param_1 == 0) {
        uVar13 = 0;
      }
    }
    iVar14 = 0;
    iVar6 = (**(code **)(_g_phyFuns + 0x100))(*param_5,*(code **)(_g_phyFuns + 0x100));
    if ((int)uVar5 <= iVar6) {
      iVar14 = (int)(short)(*param_5 >> (uVar13 & 0x1f));
    }
    iVar6 = (**(code **)(_g_phyFuns + 0x100))(param_5[1],*(code **)(_g_phyFuns + 0x100));
    if (iVar6 < (int)uVar5) {
      if (iVar14 == 0) {
        iVar6 = 0;
        goto _L189;
      }
_L190:
      iVar6 = 1;
      if (param_5[1] < 1) {
        iVar6 = -1;
      }
    }
    else {
      iVar6 = (int)(short)(param_5[1] >> (uVar13 & 0x1f));
      if (iVar14 == 0) {
_L189:
        iVar14 = 1;
        if (*param_5 < 1) {
          iVar14 = -1;
        }
      }
      if (iVar6 == 0) goto _L190;
    }
    if (param_2 == 2) {
      sVar3 = (**(code **)(_g_phyFuns + 0x28))(iVar14,5,0xfffffffb,*(code **)(_g_phyFuns + 0x28));
      sVar4 = (**(code **)(_g_phyFuns + 0x28))(iVar6,5,0xfffffffb,*(code **)(_g_phyFuns + 0x28));
      iVar14 = (int)sVar3;
      iVar6 = (int)sVar4;
    }
    iVar7 = (**(code **)(_g_phyFuns + 0x100))(*param_5,*(code **)(_g_phyFuns + 0x100));
    if ((iVar7 <= (int)uVar5) &&
       (iVar7 = (**(code **)(_g_phyFuns + 0x100))(param_5[1],*(code **)(_g_phyFuns + 0x100)),
       iVar7 <= (int)uVar5)) {
      if (param_1 == 0) {
        *param_4 = *param_4 - (short)iStack_58;
        param_4[1] = param_4[1] - (short)iStack_54;
        goto _L170;
      }
      *param_4 = *param_4 + (short)(iStack_58 / -6);
      param_4[1] = param_4[1] + (short)(iStack_54 / -6);
      goto _L169;
    }
    iVar7 = (**(code **)(_g_phyFuns + 0x100))(*param_5,*(code **)(_g_phyFuns + 0x100));
    if ((int)uVar5 < iVar7) {
      uVar9 = (int)(((uVar9 & 0xffff) - iVar14) * 0x10000) >> 0x10;
    }
    iVar14 = (**(code **)(_g_phyFuns + 0x100))(param_5[1],*(code **)(_g_phyFuns + 0x100));
    if ((int)uVar5 < iVar14) {
      iVar8 = (iVar8 - iVar6) * 0x10000 >> 0x10;
    }
    if (0x1ff < (int)uVar9) {
      uVar9 = 0x1ff;
    }
    sVar3 = (short)uVar9;
    if ((int)(uVar9 << 0x10) < 0) {
      sVar3 = 0;
    }
    uVar9 = (uint)sVar3;
    if (0x1ff < iVar8) {
      iVar8 = 0x1ff;
    }
    sVar3 = (short)iVar8;
    if (iVar8 << 0x10 < 0) {
      sVar3 = 0;
    }
    iVar8 = (int)sVar3;
    cVar10 = cVar10 + -1;
    if (cVar10 == '\0') {
      if (param_1 == 0) {
_L170:
        if ((param_2 != 0) && ((uVar18 != 0x100 || (iVar12 != 0x100)))) {
          iVar8 = (**(code **)(_g_phyFuns + 0x100))(iStack_58,*(code **)(_g_phyFuns + 0x100));
          if ((0x14 < iVar8) ||
             (((iVar8 = (**(code **)(_g_phyFuns + 0x100))(iStack_4c,*(code **)(_g_phyFuns + 0x100)),
               0x14 < iVar8 ||
               (iVar8 = (**(code **)(_g_phyFuns + 0x100))(*param_5,*(code **)(_g_phyFuns + 0x100)),
               5 < iVar8)) ||
              (iVar8 = (**(code **)(_g_phyFuns + 0x100))
                                 ((int)*param_4 - uVar18,*(code **)(_g_phyFuns + 0x100)),
              0x28 < iVar8)))) {
            *param_4 = sVar2;
          }
          iVar8 = (**(code **)(_g_phyFuns + 0x100))(iStack_54,*(code **)(_g_phyFuns + 0x100));
          if (((0x14 < iVar8) ||
              (iVar8 = (**(code **)(_g_phyFuns + 0x100))(iStack_48,*(code **)(_g_phyFuns + 0x100)),
              0x14 < iVar8)) ||
             ((iVar8 = (**(code **)(_g_phyFuns + 0x100))(param_5[1],*(code **)(_g_phyFuns + 0x100)),
              5 < iVar8 ||
              (iVar12 = (**(code **)(_g_phyFuns + 0x100))
                                  (param_4[1] - iVar12,*(code **)(_g_phyFuns + 0x100)),
              0x28 < iVar12)))) {
            param_4[1] = sVar1;
          }
        }
      }
_L169:
      if (*param_4 < 0) {
        *param_4 = 0;
      }
      else if (0x1ff < *param_4) {
        *param_4 = 0x1ff;
      }
      if (param_4[1] < 0) {
        param_4[1] = 0;
      }
      else if (0x1ff < param_4[1]) {
        param_4[1] = 0x1ff;
      }
      (**(code **)(_g_phyFuns + 0x1cc))(2,cVar15,*param_4,*(code **)(_g_phyFuns + 0x1cc));
      (**(code **)(_g_phyFuns + 0x1cc))(3,cVar15,param_4[1],*(code **)(_g_phyFuns + 0x1cc));
      return;
    }
  } while( true );
}

