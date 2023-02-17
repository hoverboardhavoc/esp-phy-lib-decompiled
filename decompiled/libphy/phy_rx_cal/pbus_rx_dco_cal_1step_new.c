/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_rx_cal.o -> pbus_rx_dco_cal_1step_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_rx_dco_cal_1step_new
               (int param_1,int param_2,undefined4 param_3,short *param_4,int *param_5)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  char cVar15;
  int iVar16;
  code *pcVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iStack_94;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  uVar3 = _phy_param >> 3;
  sVar1 = param_4[1];
  iVar16 = (int)sVar1;
  iStack_58 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  iStack_4c = 0;
  iStack_48 = 0;
  uStack_44 = 0;
  sVar2 = *param_4;
  uVar23 = (uint)sVar2;
  uVar6 = (**(code **)(_g_phyFuns + 0x78))(1,2,*(code **)(_g_phyFuns + 0x78));
  uVar14 = 0;
  uVar22 = 0;
  do {
    uVar20 = uVar14 & 0x1f;
    uVar14 = uVar14 + 1;
    uVar22 = uVar22 + ((int)(uVar6 & 0xff) >> uVar20 & 1U) & 0xff;
  } while (uVar14 != 6);
  if (param_2 == 0) {
    uVar14 = uVar22;
    if (uVar22 < 2) {
      uVar14 = 2;
    }
    uVar14 = uVar14 - 1 & 0xff;
  }
  else {
    uVar14 = 6;
    if (param_1 == 0) {
      uVar14 = 2;
    }
  }
  cVar15 = (param_2 == 0) + '\x01';
  iStack_94 = 0;
  uVar20 = uVar23;
  iVar21 = iVar16;
  do {
    pcVar17 = *(code **)(_g_phyFuns + 0x74);
    *param_4 = (short)uVar20;
    param_4[1] = (short)iVar21;
    (*pcVar17)(2,cVar15,uVar20 & 0xffff,pcVar17);
    (**(code **)(_g_phyFuns + 0x74))(3,cVar15,param_4[1],*(code **)(_g_phyFuns + 0x74));
    if (param_2 == 0) {
      ets_delay_us(10);
      if ((uVar6 & 0x3f) < 0x38) {
        rxdc_est_min(param_3,1,param_5,&uStack_5a);
        uStack_59 = 0;
      }
      else {
        (**(code **)(_g_phyFuns + 0x74))(1,2,uVar6 & 0x30,*(code **)(_g_phyFuns + 0x74));
        ets_delay_us(10);
        rxdc_est_min(param_3,1,&iStack_58,&uStack_5a);
        (**(code **)(_g_phyFuns + 0x74))(1,2,uVar6 & 0xff | 0x38,*(code **)(_g_phyFuns + 0x74));
        ets_delay_us(10);
        rxdc_est_min(param_3,1,&iStack_4c,&uStack_59);
        *param_5 = iStack_4c - iStack_58;
        param_5[1] = iStack_48 - iStack_54;
      }
      uVar18 = uVar22;
      if (uVar22 < 2) {
        uVar18 = 2;
      }
      uVar18 = uVar18 - 2 & 0xff;
    }
    else {
      uVar18 = 3;
      (**(code **)(_g_phyFuns + 0x74))(1,2,0,*(code **)(_g_phyFuns + 0x74));
      ets_delay_us(10);
      rxdc_est_min(param_3,1,&iStack_58,&uStack_5a);
      (**(code **)(_g_phyFuns + 0x74))(1,2,0x20,*(code **)(_g_phyFuns + 0x74));
      ets_delay_us(10);
      rxdc_est_min(param_3,1,&iStack_4c,&uStack_59);
      *param_5 = iStack_4c - iStack_58;
      param_5[1] = iStack_48 - iStack_54;
      abs_temp();
      abs_temp(param_5[1]);
      if (param_1 == 0) {
        uVar18 = 0;
      }
    }
    iVar19 = 0;
    iVar7 = abs_temp(*param_5);
    if ((int)uVar14 <= iVar7) {
      iVar19 = (int)(short)(*param_5 >> (uVar18 & 0x1f));
    }
    iVar7 = abs_temp(param_5[1]);
    if (iVar7 < (int)uVar14) {
      if (iVar19 == 0) {
        iVar7 = 0;
        goto _L106;
      }
_L107:
      iVar7 = 1;
      if (param_5[1] < 1) {
        iVar7 = -1;
      }
    }
    else {
      iVar7 = (int)(short)(param_5[1] >> (uVar18 & 0x1f));
      if (iVar19 == 0) {
_L106:
        iVar19 = 1;
        if (*param_5 < 1) {
          iVar19 = -1;
        }
      }
      if (iVar7 == 0) goto _L107;
    }
    if (param_2 == 2) {
      sVar4 = get_data_sat(iVar19,5,0xfffffffb);
      sVar5 = get_data_sat(iVar7,5,0xfffffffb);
      iVar19 = (int)sVar4;
      iVar7 = (int)sVar5;
    }
    if ((uVar3 & 1) != 0) {
      uVar8 = (**(code **)(_g_phyFuns + 0x78))(0,1,*(code **)(_g_phyFuns + 0x78));
      uVar9 = (**(code **)(_g_phyFuns + 0x78))(1,2,*(code **)(_g_phyFuns + 0x78));
      uVar10 = (**(code **)(_g_phyFuns + 0x78))(2,1,*(code **)(_g_phyFuns + 0x78));
      uVar11 = (**(code **)(_g_phyFuns + 0x78))(3,1,*(code **)(_g_phyFuns + 0x78));
      uVar12 = (**(code **)(_g_phyFuns + 0x78))(2,2,*(code **)(_g_phyFuns + 0x78));
      (**(code **)(_g_phyFuns + 0x78))(3,2,*(code **)(_g_phyFuns + 0x78));
      phy_printf("stage=%d,rfrx=0x%x,bb2=0x%x; i=%d, dco: %d,%d,%d,%d; res dc: %d,%d; %d,%d; %d,%d;,scale=%d,%d,num=%d,%d\n"
                 ,param_2 == 0,uVar8,uVar9,iStack_94,uVar10,uVar11,uVar12);
    }
    iVar13 = abs_temp(*param_5);
    if ((iVar13 <= (int)uVar14) && (iVar13 = abs_temp(param_5[1]), iVar13 <= (int)uVar14)) break;
    iVar13 = abs_temp(*param_5);
    if ((int)uVar14 < iVar13) {
      uVar20 = (int)(((uVar20 & 0xffff) - iVar19) * 0x10000) >> 0x10;
    }
    iVar19 = abs_temp(param_5[1]);
    if ((int)uVar14 < iVar19) {
      iVar21 = (iVar21 - iVar7) * 0x10000 >> 0x10;
    }
    if (0x1ff < (int)uVar20) {
      uVar20 = 0x1ff;
    }
    sVar4 = (short)uVar20;
    if ((int)(uVar20 << 0x10) < 0) {
      sVar4 = 0;
    }
    uVar20 = (uint)sVar4;
    if (0x1ff < iVar21) {
      iVar21 = 0x1ff;
    }
    sVar4 = (short)iVar21;
    if (iVar21 << 0x10 < 0) {
      sVar4 = 0;
    }
    iVar21 = (int)sVar4;
    iStack_94 = iStack_94 + 1;
  } while (iStack_94 != 8);
  if (((param_1 == 0) && (param_2 != 0)) && ((uVar23 != 0x100 || (iVar16 != 0x100)))) {
    iVar21 = abs_temp(iStack_58);
    if ((((0x14 < iVar21) || (iVar21 = abs_temp(iStack_4c), 0x14 < iVar21)) ||
        (iVar21 = abs_temp(*param_5), 5 < iVar21)) ||
       (iVar21 = abs_temp((int)*param_4 - uVar23), 0x28 < iVar21)) {
      *param_4 = sVar2;
    }
    iVar21 = abs_temp(iStack_54);
    if (((0x14 < iVar21) || (iVar21 = abs_temp(iStack_48), 0x14 < iVar21)) ||
       ((iVar21 = abs_temp(param_5[1]), 5 < iVar21 ||
        (iVar16 = abs_temp(param_4[1] - iVar16), 0x28 < iVar16)))) {
      param_4[1] = sVar1;
    }
  }
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
  (**(code **)(_g_phyFuns + 0x74))(2,cVar15,*param_4,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(3,cVar15,param_4[1],*(code **)(_g_phyFuns + 0x74));
  return;
}

