/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_rx_cal.o -> pbus_rx_dco_cal_1step_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_rx_dco_cal_1step_new
               (int param_1,int param_2,undefined4 param_3,short *param_4,undefined1 *param_5)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
  int iStack_a0;
  int iStack_64;
  int iStack_60;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  uVar1 = _phy_param >> 3;
  iStack_58 = 0;
  iStack_54 = 0;
  iStack_50 = 0;
  iStack_4c = 0;
  iStack_48 = 0;
  iStack_44 = 0;
  uVar16 = (uint)*param_4;
  iVar15 = (int)param_4[1];
  uVar4 = (**(code **)(_g_phyFuns + 0x78))(1,2,*(code **)(_g_phyFuns + 0x78));
  uVar12 = 0;
  uVar17 = 0;
  do {
    uVar14 = uVar12 & 0x1f;
    uVar12 = uVar12 + 1;
    uVar17 = uVar17 + ((int)(uVar4 & 0xff) >> uVar14 & 1U) & 0xff;
  } while (uVar12 != 6);
  if (param_2 == 0) {
    uVar12 = uVar17;
    if (uVar17 < 2) {
      uVar12 = 2;
    }
    uVar12 = uVar12 - 1 & 0xff;
  }
  else {
    uVar12 = 6;
    if (param_1 == 0) {
      uVar12 = 2;
    }
  }
  iStack_a0 = 0;
  *param_5 = 0;
  cVar18 = (param_2 == 0) + '\x01';
  do {
    pcVar13 = *(code **)(_g_phyFuns + 0x74);
    *param_4 = (short)uVar16;
    param_4[1] = (short)iVar15;
    (*pcVar13)(2,cVar18,uVar16 & 0xffff,pcVar13);
    (**(code **)(_g_phyFuns + 0x74))(3,cVar18,param_4[1],*(code **)(_g_phyFuns + 0x74));
    if (param_2 == 0) {
      ets_delay_us(10);
      if ((uVar4 & 0x3f) < 0x30) {
        rxdc_est_min_new(param_3,1,&iStack_64);
        uVar14 = uVar17;
        if (uVar17 < 2) {
          uVar14 = 2;
        }
        uVar14 = uVar14 - 2 & 0xff;
      }
      else {
        uVar14 = 1;
        (**(code **)(_g_phyFuns + 0x74))(1,2,0x30,*(code **)(_g_phyFuns + 0x74));
        ets_delay_us(10);
        rxdc_est_min_new(param_3,1,&iStack_58);
        (**(code **)(_g_phyFuns + 0x74))(1,2,0x38,*(code **)(_g_phyFuns + 0x74));
        ets_delay_us(10);
        rxdc_est_min_new(param_3,1,&iStack_4c);
        iStack_64 = iStack_4c - iStack_58;
        iStack_60 = iStack_48 - iStack_54;
      }
    }
    else {
      uVar14 = 3;
      (**(code **)(_g_phyFuns + 0x74))(1,2,0,*(code **)(_g_phyFuns + 0x74));
      ets_delay_us(10);
      rxdc_est_min_new(param_3,1,&iStack_58);
      (**(code **)(_g_phyFuns + 0x74))(1,2,0x20,*(code **)(_g_phyFuns + 0x74));
      ets_delay_us(10);
      rxdc_est_min_new(param_3,1,&iStack_4c);
      iStack_64 = iStack_4c - iStack_58;
      iStack_60 = iStack_48 - iStack_54;
      if (param_1 == 0) {
        uVar14 = 0;
      }
    }
    iVar3 = 0;
    iVar5 = abs_temp(iStack_64);
    if ((int)uVar12 <= iVar5) {
      iVar3 = (int)(short)(iStack_64 >> (uVar14 & 0x1f));
    }
    iVar5 = abs_temp(iStack_60);
    if (iVar5 < (int)uVar12) {
      if (iVar3 == 0) {
        iVar5 = 0;
        goto _L103;
      }
_L104:
      iVar5 = abs_temp(iStack_54);
      if (iVar5 < 0x32) {
        iVar5 = 1;
        if (0 < iStack_60) goto _L87;
        sVar2 = -(ushort)(iStack_60 != 0);
      }
      else {
        sVar2 = (short)(iStack_54 >> (uVar14 & 0x1f));
      }
      iVar5 = (int)sVar2;
    }
    else {
      iVar5 = (int)(short)(iStack_60 >> (uVar14 & 0x1f));
      if (iVar3 == 0) {
_L103:
        iVar3 = abs_temp(iStack_58);
        if (iVar3 < 0x32) {
          iVar3 = 1;
          if (0 < iStack_64) goto _L85;
          sVar2 = -(ushort)(iStack_64 != 0);
        }
        else {
          sVar2 = (short)(iStack_58 >> (uVar14 & 0x1f));
        }
        iVar3 = (int)sVar2;
      }
_L85:
      if (iVar5 == 0) goto _L104;
    }
_L87:
    if ((param_2 != 0) && ((0x33 < iStack_50 || (0x33 < iStack_44)))) {
      iVar5 = 0;
      iVar3 = 0;
    }
    if ((uVar1 & 1) != 0) {
      uVar6 = (**(code **)(_g_phyFuns + 0x78))(0,1,*(code **)(_g_phyFuns + 0x78));
      uVar7 = (**(code **)(_g_phyFuns + 0x78))(1,2,*(code **)(_g_phyFuns + 0x78));
      uVar8 = (**(code **)(_g_phyFuns + 0x78))(2,1,*(code **)(_g_phyFuns + 0x78));
      uVar9 = (**(code **)(_g_phyFuns + 0x78))(3,1,*(code **)(_g_phyFuns + 0x78));
      uVar10 = (**(code **)(_g_phyFuns + 0x78))(2,2,*(code **)(_g_phyFuns + 0x78));
      (**(code **)(_g_phyFuns + 0x78))(3,2,*(code **)(_g_phyFuns + 0x78));
      phy_printf("stage=%d,rfrx=0x%x,bb2=0x%x; i=%d, dco: %d,%d,%d,%d; res dc: %d,%d,%d; %d,%d,%d; %d,%d;,scale=%d,%d\n"
                 ,param_2 == 0,uVar6,uVar7,iStack_a0,uVar8,uVar9,uVar10);
    }
    iVar11 = abs_temp(iStack_64);
    if ((((iVar11 <= (int)uVar12) && (iVar11 = abs_temp(iStack_60), iVar11 <= (int)uVar12)) &&
        (iVar11 = abs_temp(iStack_58), iVar11 < 0x32)) &&
       ((iVar11 = abs_temp(iStack_54), iVar11 < 0x32 && ((iStack_50 < 0x30 || (iStack_44 < 0x30)))))
       ) {
      *param_5 = 1;
      goto _L93;
    }
    iVar3 = (uVar16 & 0xffff) - iVar3;
    uVar14 = iVar15 - iVar5 & 0xffff;
    if (0x1ff < iVar3 * 0x10000 >> 0x10) {
      iVar3 = 0x1ff;
    }
    sVar2 = (short)iVar3;
    if (iVar3 << 0x10 < 0) {
      sVar2 = 0;
    }
    uVar16 = (uint)sVar2;
    if (0x1ff < (short)(iVar15 - iVar5)) {
      uVar14 = 0x1ff;
    }
    sVar2 = (short)uVar14;
    if ((int)(uVar14 << 0x10) < 0) {
      sVar2 = 0;
    }
    iVar15 = (int)sVar2;
    iStack_a0 = iStack_a0 + 1;
    if (iStack_a0 == 8) {
_L93:
      *param_4 = (short)uVar16;
      param_4[1] = (short)iVar15;
      if ((int)uVar16 < 0) {
        *param_4 = 0;
      }
      else if (0x1ff < (int)uVar16) {
        *param_4 = 0x1ff;
      }
      if (iVar15 < 0) {
        param_4[1] = 0;
      }
      else if (0x1ff < iVar15) {
        param_4[1] = 0x1ff;
      }
      (**(code **)(_g_phyFuns + 0x74))(2,cVar18,*param_4,*(code **)(_g_phyFuns + 0x74));
      (**(code **)(_g_phyFuns + 0x74))(3,cVar18,param_4[1],*(code **)(_g_phyFuns + 0x74));
      return;
    }
  } while( true );
}

