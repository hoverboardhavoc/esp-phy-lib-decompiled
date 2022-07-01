/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_rx_cal.o -> pbus_rx_dco_cal_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_rx_dco_cal_new(undefined4 param_1,short *param_2,undefined4 param_3,int param_4,
                        int param_5)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  uVar5 = (**(code **)(_g_phyFuns + 0x74))(1,2,*(code **)(_g_phyFuns + 0x74));
  uVar7 = uVar5 >> 6 & 0xff;
  uVar10 = 0;
  for (uVar2 = uVar5 & 0x3f; uVar2 != 0; uVar2 = uVar2 >> 1) {
    uVar10 = uVar10 + (uVar2 & 1) & 0xff;
  }
  (**(code **)(_g_phyFuns + 0x70))(2,1,*param_2,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(3,1,param_2[1],*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(2,2,0x100,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(3,2,0x100,*(code **)(_g_phyFuns + 0x70));
  if (param_4 == 0) {
    uVar2 = 2;
    if ((1 < uVar10) && (uVar2 = 4, 3 < uVar10)) {
      uVar2 = 10;
    }
  }
  else {
    uVar2 = 10;
    if (uVar10 != 0) {
      uVar2 = uVar10 * 0x14 & 0xff;
    }
  }
  uVar11 = (uint)*param_2;
  iVar9 = (int)param_2[1];
  cVar1 = '\0';
  do {
    pcVar8 = *(code **)(_g_phyFuns + 0x70);
    *param_2 = (short)uVar11;
    param_2[1] = (short)iVar9;
    (*pcVar8)(2,1,uVar11 & 0xffff,pcVar8);
    (**(code **)(_g_phyFuns + 0x70))(3,1,param_2[1],*(code **)(_g_phyFuns + 0x70));
    ets_delay_us(param_3);
    dc_iq_est(1,param_1,&uStack_4c);
    if (param_5 != 0) {
      phy_printf(" (%d,%d) ",(int)*param_2,(int)param_2[1]);
      phy_printf("%d,%d ",uStack_4c,uStack_48);
    }
    iVar6 = abs_temp(uStack_4c);
    if ((iVar6 <= (int)uVar2) && (iVar6 = abs_temp(uStack_48), iVar6 <= (int)uVar2)) break;
    if (cVar1 == '\0') {
      unaff_s10 = uStack_48;
      unaff_s11 = uStack_4c;
    }
    iVar6 = abs_temp();
    if ((int)uVar2 < iVar6) {
      iVar6 = get_dco_comp(1,param_4,(int)(short)uStack_4c,(int)(short)unaff_s11,uVar10,uVar7);
      uVar11 = (int)(((uVar11 & 0xffff) - iVar6) * 0x10000) >> 0x10;
    }
    iVar6 = abs_temp(uStack_48);
    if ((int)uVar2 < iVar6) {
      iVar6 = get_dco_comp(1,param_4,(int)(short)uStack_48,(int)(short)unaff_s10,uVar10,uVar7);
      iVar9 = (iVar9 - iVar6) * 0x10000 >> 0x10;
    }
    sVar3 = get_data_sat(uVar11,500,0x14);
    sVar4 = get_data_sat(iVar9,500,0x14);
    cVar1 = cVar1 + '\x01';
    uVar11 = (uint)sVar3;
    iVar9 = (int)sVar4;
    unaff_s10 = uStack_48;
    unaff_s11 = uStack_4c;
  } while (cVar1 != '\f');
  *param_2 = (short)uVar11;
  param_2[1] = (short)iVar9;
  if (param_5 != 0) {
    phy_printf("stage %d: bb=0x%x (%d,%d) %d; ",1,uVar5,uStack_4c,uStack_48,cVar1);
    phy_printf(&_LC3);
    phy_printf(&_LC3);
  }
  return;
}

