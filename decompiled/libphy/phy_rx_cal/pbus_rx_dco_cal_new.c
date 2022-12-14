/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_rx_cal.o -> pbus_rx_dco_cal_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_rx_dco_cal_new(undefined4 param_1,short *param_2,undefined4 param_3,int param_4,
                        int param_5,uint param_6)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  short *psVar14;
  short *psVar15;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  uVar4 = (**(code **)(_g_phyFuns + 0x78))(1,2,*(code **)(_g_phyFuns + 0x78));
  uVar6 = uVar4 >> 6 & 0xff;
  uVar11 = 0;
  for (uVar8 = uVar4 & 0x3f; uVar8 != 0; uVar8 = uVar8 >> 1) {
    uVar11 = uVar11 + (uVar8 & 1) & 0xff;
  }
  (**(code **)(_g_phyFuns + 0x74))(2,1,*param_2,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(3,1,param_2[1],*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(2,2,0x100,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(3,2,0x100,*(code **)(_g_phyFuns + 0x74));
  uVar8 = param_6;
  if (param_4 == 0) {
    uVar1 = 2;
    if ((1 < uVar11) && (uVar1 = 4, 3 < uVar11)) {
      uVar1 = 10;
    }
  }
  else {
    uVar1 = 10;
    if (uVar11 != 0) {
      uVar1 = uVar11 * 0x14 & 0xff;
    }
  }
  do {
    uVar8 = uVar8 + 1 & 0xff;
    uVar12 = uVar8 - 1 & 0xff;
    if (uVar12 == 0) {
      sVar2 = *param_2;
      sVar3 = param_2[1];
      cVar7 = '\f';
    }
    else {
      sVar2 = param_2[2];
      sVar3 = param_2[3];
      cVar7 = '\b';
    }
    iVar10 = (int)sVar2;
    iVar9 = (int)sVar3;
    psVar15 = param_2 + uVar12 * 2;
    psVar14 = param_2 + uVar12 * 2 + 1;
    cVar13 = '\0';
    do {
      iVar5 = _g_phyFuns;
      *psVar15 = (short)iVar10;
      *psVar14 = (short)iVar9;
      (**(code **)(iVar5 + 0x74))(2,uVar8,*psVar15,*(code **)(iVar5 + 0x74));
      (**(code **)(_g_phyFuns + 0x74))(3,uVar8,*psVar14,*(code **)(_g_phyFuns + 0x74));
      ets_delay_us(param_3);
      dc_iq_est(1,param_1,&uStack_4c);
      if (param_5 != 0) {
        phy_printf(" (%d,%d) ",(int)*psVar15,(int)*psVar14);
        phy_printf("%d,%d ",uStack_4c,uStack_48);
      }
      iVar5 = abs_temp(uStack_4c);
      if ((iVar5 <= (int)uVar1) && (iVar5 = abs_temp(uStack_48), iVar5 <= (int)uVar1)) break;
      if (cVar13 == '\0') {
        uStack_70._0_2_ = (short)uStack_4c;
        uStack_6c._0_2_ = (short)uStack_48;
      }
      iVar5 = abs_temp();
      if ((int)uVar1 < iVar5) {
        iVar5 = get_dco_comp(uVar12 == 0,param_4,(int)(short)uStack_4c,(int)(short)uStack_70,uVar11,
                             uVar6);
        iVar10 = (iVar10 - iVar5) * 0x10000 >> 0x10;
      }
      iVar5 = abs_temp(uStack_48);
      if ((int)uVar1 < iVar5) {
        iVar5 = get_dco_comp(uVar12 == 0,param_4,(int)(short)uStack_48,(int)(short)uStack_6c,uVar11,
                             uVar6);
        iVar9 = (iVar9 - iVar5) * 0x10000 >> 0x10;
      }
      sVar2 = get_data_sat(iVar10,500,0x14);
      sVar3 = get_data_sat(iVar9,500,0x14);
      uStack_70 = uStack_4c;
      cVar13 = cVar13 + '\x01';
      uStack_6c = uStack_48;
      iVar10 = (int)sVar2;
      iVar9 = (int)sVar3;
    } while (cVar7 != cVar13);
    *psVar15 = (short)iVar10;
    *psVar14 = (short)iVar9;
    if (param_5 != 0) {
      phy_printf("stage %d: bb=0x%x (%d,%d) %d; ",uVar12 + 1,uVar4,uStack_4c,uStack_48,cVar13);
      phy_printf(&_LC10);
    }
    if (param_6 < uVar8) {
      if (param_5 != 0) {
        phy_printf(&_LC10);
      }
      return;
    }
  } while( true );
}

