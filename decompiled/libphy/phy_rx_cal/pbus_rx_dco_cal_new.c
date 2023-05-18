/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
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
  uint uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  short *psVar14;
  short *psVar15;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  uVar5 = (**(code **)(_g_phyFuns + 0x78))(1,2,*(code **)(_g_phyFuns + 0x78));
  uVar7 = uVar5 >> 6 & 0xff;
  uVar2 = 0;
  for (uVar9 = uVar5 & 0x3f; uVar9 != 0; uVar9 = uVar9 >> 1) {
    uVar2 = uVar2 + (uVar9 & 1) & 0xff;
  }
  (**(code **)(_g_phyFuns + 0x74))(2,1,*param_2,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(3,1,param_2[1],*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(2,2,0x100,*(code **)(_g_phyFuns + 0x74));
  (**(code **)(_g_phyFuns + 0x74))(3,2,0x100,*(code **)(_g_phyFuns + 0x74));
  uVar9 = param_6;
  if (param_4 == 0) {
    uVar1 = uVar2 << 1;
    if (2 < uVar2) {
      uVar1 = (uVar2 + 1) * 2;
    }
  }
  else {
    uVar1 = 10;
    if (uVar2 == 0) goto _L48;
    uVar1 = uVar2 * 0x14;
  }
  uVar1 = uVar1 & 0xff;
_L48:
  do {
    uVar9 = uVar9 + 1 & 0xff;
    uVar12 = uVar9 - 1 & 0xff;
    if (uVar12 == 0) {
      sVar3 = *param_2;
      sVar4 = param_2[1];
      cVar8 = '\f';
    }
    else {
      sVar3 = param_2[2];
      sVar4 = param_2[3];
      cVar8 = '\b';
    }
    iVar11 = (int)sVar3;
    iVar10 = (int)sVar4;
    psVar15 = param_2 + uVar12 * 2;
    psVar14 = param_2 + uVar12 * 2 + 1;
    cVar13 = '\0';
    do {
      iVar6 = _g_phyFuns;
      *psVar15 = (short)iVar11;
      *psVar14 = (short)iVar10;
      (**(code **)(iVar6 + 0x74))(2,uVar9,*psVar15,*(code **)(iVar6 + 0x74));
      (**(code **)(_g_phyFuns + 0x74))(3,uVar9,*psVar14,*(code **)(_g_phyFuns + 0x74));
      ets_delay_us(param_3);
      dc_iq_est(1,param_1,&uStack_4c);
      if (param_5 != 0) {
        phy_printf(" (%d,%d) ",(int)*psVar15,(int)*psVar14);
        phy_printf("%d,%d ",uStack_4c,uStack_48);
      }
      iVar6 = abs_temp(uStack_4c);
      if ((iVar6 <= (int)uVar1) && (iVar6 = abs_temp(uStack_48), iVar6 <= (int)uVar1)) break;
      if (cVar13 == '\0') {
        uStack_70._0_2_ = (short)uStack_4c;
        uStack_6c._0_2_ = (short)uStack_48;
      }
      iVar6 = abs_temp();
      if ((int)uVar1 < iVar6) {
        iVar6 = get_dco_comp(uVar12 == 0,param_4,(int)(short)uStack_4c,(int)(short)uStack_70,uVar2,
                             uVar7);
        iVar11 = (iVar11 - iVar6) * 0x10000 >> 0x10;
      }
      iVar6 = abs_temp(uStack_48);
      if ((int)uVar1 < iVar6) {
        iVar6 = get_dco_comp(uVar12 == 0,param_4,(int)(short)uStack_48,(int)(short)uStack_6c,uVar2,
                             uVar7);
        iVar10 = (iVar10 - iVar6) * 0x10000 >> 0x10;
      }
      sVar3 = get_data_sat(iVar11,500,0x14);
      sVar4 = get_data_sat(iVar10,500,0x14);
      uStack_70 = uStack_4c;
      cVar13 = cVar13 + '\x01';
      uStack_6c = uStack_48;
      iVar11 = (int)sVar3;
      iVar10 = (int)sVar4;
    } while (cVar8 != cVar13);
    *psVar15 = (short)iVar11;
    *psVar14 = (short)iVar10;
    if (param_5 != 0) {
      phy_printf("stage %d: bb=0x%x (%d,%d) %d; ",uVar12 + 1,uVar5,uStack_4c,uStack_48,cVar13);
      phy_printf(&_LC10);
    }
    if (param_6 < uVar9) {
      if (param_5 != 0) {
        phy_printf(&_LC10);
      }
      return;
    }
  } while( true );
}

