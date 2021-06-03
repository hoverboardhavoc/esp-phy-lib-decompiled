/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
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
  char cVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  code *pcVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  iStack_58 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  iStack_4c = 0;
  iStack_48 = 0;
  uStack_44 = 0;
  cVar3 = '\b';
  if (param_2 != 0) {
    cVar3 = '\x14';
  }
  sVar1 = param_4[1];
  iVar13 = (int)sVar1;
  sVar2 = *param_4;
  uVar19 = (uint)sVar2;
  uVar17 = 0;
  uVar6 = (**(code **)(_g_phyFuns + 0x1d0))(1,2,*(code **)(_g_phyFuns + 0x1d0));
  uVar10 = 0;
  do {
    uVar18 = uVar17 + ((int)(uVar6 & 0xff) >> (uVar10 & 0x1f) & 1U);
    uVar10 = uVar10 + 1;
    uVar17 = uVar18 & 0xff;
  } while (uVar10 != 6);
  if (param_2 == 0) {
    uVar6 = uVar17;
    if (uVar17 < 2) {
      uVar6 = 2;
    }
    uVar6 = uVar6 - 1 & 0xff;
  }
  else {
    uVar6 = 6;
    if (param_1 == 0) {
      uVar6 = 1;
    }
  }
  cVar11 = '\0';
  cVar16 = (param_2 == 0) + '\x01';
  uVar10 = uVar19;
  iVar9 = iVar13;
  do {
    pcVar12 = *(code **)(_g_phyFuns + 0x1cc);
    *param_4 = (short)uVar10;
    param_4[1] = (short)iVar9;
    (*pcVar12)(2,cVar16,uVar10 & 0xffff,pcVar12);
    (**(code **)(_g_phyFuns + 0x1cc))(3,cVar16,param_4[1],*(code **)(_g_phyFuns + 0x1cc));
    if (param_2 == 0) {
      ets_delay_us(10);
      rxdc_est_min(param_3,1,param_5,&uStack_5a);
      uStack_59 = 0;
      uVar14 = uVar18 & 0xff;
      if (uVar17 == 0) {
        uVar14 = 1;
      }
      uVar14 = uVar14 - 1 & 0xff;
    }
    else {
      uVar14 = 3;
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
        uVar14 = 0;
      }
    }
    iVar15 = 0;
    iVar7 = (**(code **)(_g_phyFuns + 0x100))(*param_5,*(code **)(_g_phyFuns + 0x100));
    if ((int)uVar6 <= iVar7) {
      iVar15 = (int)(short)(*param_5 >> (uVar14 & 0x1f));
    }
    iVar7 = (**(code **)(_g_phyFuns + 0x100))(param_5[1],*(code **)(_g_phyFuns + 0x100));
    if (iVar7 < (int)uVar6) {
      if (iVar15 == 0) {
        iVar7 = 0;
        goto _L183;
      }
_L184:
      iVar7 = 1;
      if (param_5[1] < 1) {
        iVar7 = -1;
      }
    }
    else {
      iVar7 = (int)(short)(param_5[1] >> (uVar14 & 0x1f));
      if (iVar15 == 0) {
_L183:
        iVar15 = 1;
        if (*param_5 < 1) {
          iVar15 = -1;
        }
      }
      if (iVar7 == 0) goto _L184;
    }
    if (param_2 == 2) {
      sVar4 = (**(code **)(_g_phyFuns + 0x28))(iVar15,5,0xfffffffb,*(code **)(_g_phyFuns + 0x28));
      sVar5 = (**(code **)(_g_phyFuns + 0x28))(iVar7,5,0xfffffffb,*(code **)(_g_phyFuns + 0x28));
      iVar15 = (int)sVar4;
      iVar7 = (int)sVar5;
    }
    iVar8 = (**(code **)(_g_phyFuns + 0x100))(*param_5,*(code **)(_g_phyFuns + 0x100));
    if ((iVar8 <= (int)uVar6) &&
       (iVar8 = (**(code **)(_g_phyFuns + 0x100))(param_5[1],*(code **)(_g_phyFuns + 0x100)),
       iVar8 <= (int)uVar6)) {
      if (param_1 == 0) {
        *param_4 = *param_4 - (short)iStack_58;
        param_4[1] = param_4[1] - (short)iStack_54;
        goto _L168;
      }
      *param_4 = *param_4 + (short)(iStack_58 / -6);
      param_4[1] = param_4[1] + (short)(iStack_54 / -6);
      goto _L167;
    }
    iVar8 = (**(code **)(_g_phyFuns + 0x100))(*param_5,*(code **)(_g_phyFuns + 0x100));
    if ((int)uVar6 < iVar8) {
      uVar10 = (int)(((uVar10 & 0xffff) - iVar15) * 0x10000) >> 0x10;
    }
    iVar15 = (**(code **)(_g_phyFuns + 0x100))(param_5[1],*(code **)(_g_phyFuns + 0x100));
    if ((int)uVar6 < iVar15) {
      iVar9 = (iVar9 - iVar7) * 0x10000 >> 0x10;
    }
    if (0x1ff < (int)uVar10) {
      uVar10 = 0x1ff;
    }
    sVar4 = (short)uVar10;
    if ((int)(uVar10 << 0x10) < 0) {
      sVar4 = 0;
    }
    uVar10 = (uint)sVar4;
    if (0x1ff < iVar9) {
      iVar9 = 0x1ff;
    }
    sVar4 = (short)iVar9;
    if (iVar9 << 0x10 < 0) {
      sVar4 = 0;
    }
    iVar9 = (int)sVar4;
    cVar11 = cVar11 + '\x01';
    if (cVar3 == cVar11) {
      if (param_1 == 0) {
_L168:
        if ((param_2 != 0) && ((uVar19 != 0x100 || (iVar13 != 0x100)))) {
          iVar9 = (**(code **)(_g_phyFuns + 0x100))(iStack_58,*(code **)(_g_phyFuns + 0x100));
          if ((0x14 < iVar9) ||
             (((iVar9 = (**(code **)(_g_phyFuns + 0x100))(iStack_4c,*(code **)(_g_phyFuns + 0x100)),
               0x14 < iVar9 ||
               (iVar9 = (**(code **)(_g_phyFuns + 0x100))(*param_5,*(code **)(_g_phyFuns + 0x100)),
               5 < iVar9)) ||
              (iVar9 = (**(code **)(_g_phyFuns + 0x100))
                                 ((int)*param_4 - uVar19,*(code **)(_g_phyFuns + 0x100)),
              0x28 < iVar9)))) {
            *param_4 = sVar2;
          }
          iVar9 = (**(code **)(_g_phyFuns + 0x100))(iStack_54,*(code **)(_g_phyFuns + 0x100));
          if (((0x14 < iVar9) ||
              (iVar9 = (**(code **)(_g_phyFuns + 0x100))(iStack_48,*(code **)(_g_phyFuns + 0x100)),
              0x14 < iVar9)) ||
             ((iVar9 = (**(code **)(_g_phyFuns + 0x100))(param_5[1],*(code **)(_g_phyFuns + 0x100)),
              5 < iVar9 ||
              (iVar13 = (**(code **)(_g_phyFuns + 0x100))
                                  (param_4[1] - iVar13,*(code **)(_g_phyFuns + 0x100)),
              0x28 < iVar13)))) {
            param_4[1] = sVar1;
          }
        }
      }
_L167:
      (**(code **)(_g_phyFuns + 0x1cc))(2,cVar16,*param_4,*(code **)(_g_phyFuns + 0x1cc));
      (**(code **)(_g_phyFuns + 0x1cc))(3,cVar16,param_4[1],*(code **)(_g_phyFuns + 0x1cc));
      return;
    }
  } while( true );
}

