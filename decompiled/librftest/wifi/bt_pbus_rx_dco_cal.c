/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> bt_pbus_rx_dco_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_pbus_rx_dco_cal(undefined4 param_1,ushort *param_2,undefined4 param_3,int param_4,
                       int param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int unaff_s11;
  int local_70;
  int iStack_4c;
  int iStack_48;
  
  uVar4 = (**(code **)(_g_phyFuns + 0x78))(1,2,*(code **)(_g_phyFuns + 0x78));
  uVar9 = 0;
  for (uVar2 = uVar4 & 0x3f; uVar2 != 0; uVar2 = uVar2 >> 1) {
    uVar9 = uVar9 + (uVar2 & 1) & 0xff;
  }
  uVar2 = uVar4 >> 6 & 0xff;
  (**(code **)(_g_phyFuns + 0x74))(2,2,0x100,*(code **)(_g_phyFuns + 0x74));
  iVar12 = 3;
  (**(code **)(_g_phyFuns + 0x74))(3,2,0x100,*(code **)(_g_phyFuns + 0x74));
  if (2 < uVar9) {
    iVar12 = 5;
  }
  uVar4 = uVar9 + 7 & 0xff;
  uVar6 = *param_2;
  uVar7 = param_2[1];
  cVar1 = '\0';
  do {
    iVar11 = (int)(short)uVar6;
    iVar10 = (int)(short)uVar7;
    pcVar8 = *(code **)(_g_phyFuns + 0x74);
    *param_2 = uVar6;
    (*pcVar8)(2,1,(uint)uVar6,pcVar8);
    pcVar8 = *(code **)(_g_phyFuns + 0x74);
    param_2[1] = uVar7;
    (*pcVar8)(3,1,(uint)uVar7,pcVar8);
    ets_delay_us(param_3);
    dc_iq_est(1,param_1,&iStack_4c);
    if (param_5 != 0) {
      phy_printf("(%d,%d) ",(int)(short)*param_2,(int)(short)param_2[1]);
      phy_printf("%d,%d ",iStack_4c,iStack_48);
    }
    iVar5 = abs_temp(iStack_4c);
    if ((iVar5 <= iVar12) && (iVar5 = abs_temp(iStack_48), iVar5 <= iVar12)) break;
    if (cVar1 == '\0') {
      local_70 = iStack_4c;
      unaff_s11 = iStack_48;
    }
    iVar5 = abs_temp();
    uVar3 = uVar4;
    if (iVar12 < iVar5) {
      iVar11 = abs_temp(iStack_4c - local_70);
      iVar5 = abs_temp((iStack_4c * 3) / 2);
      if (iVar5 < iVar11) {
        uVar3 = uVar9 + 8 & 0xff;
      }
      iVar11 = (int)(short)((int)((uint)(byte)(&_LANCHOR8)[uVar2] * iStack_4c * 6) >>
                           (uVar3 + 2 & 0x1f));
      if ((iVar11 == 0) && (iVar11 = 1, iStack_4c < 1)) {
        iVar11 = -1;
      }
      iVar11 = (int)(((uint)uVar6 - iVar11) * 0x10000) >> 0x10;
    }
    iVar5 = abs_temp(iStack_48);
    if (iVar12 < iVar5) {
      iVar10 = abs_temp(iStack_48 - unaff_s11);
      iVar5 = abs_temp((iStack_48 * 3) / 2);
      if (iVar5 < iVar10) {
        uVar3 = uVar3 + 1 & 0xff;
      }
      iVar10 = (int)(short)((int)((uint)(byte)(&_LANCHOR8)[uVar2] * iStack_48 * 6) >>
                           (uVar3 + 2 & 0x1f));
      if ((iVar10 == 0) && (iVar10 = 1, iStack_48 < 1)) {
        iVar10 = -1;
      }
      iVar10 = (int)(((uint)uVar7 - iVar10) * 0x10000) >> 0x10;
    }
    if (0x3fe < iVar11) {
      iVar11 = 0x3fe;
    }
    uVar6 = (ushort)iVar11;
    if (iVar11 << 0x10 < 0) {
      uVar6 = 0;
    }
    if (0x3fe < iVar10) {
      iVar10 = 0x3fe;
    }
    uVar7 = (ushort)iVar10;
    if (iVar10 << 0x10 < 0) {
      uVar7 = 0;
    }
    local_70 = iStack_4c;
    cVar1 = cVar1 + '\x01';
    unaff_s11 = iStack_48;
  } while (cVar1 != '\f');
  if (param_4 == 0) {
    if (param_5 == 0) {
      return;
    }
  }
  else {
    phy_printf("stage %d: CGAIN=%d FGAIN=%d, (%d,%d) %d; ",1,uVar9,uVar2,iStack_4c,iStack_48,cVar1);
    if (param_5 == 0) goto _L260;
  }
  phy_printf(&_LC11);
  if (param_4 == 0) {
    return;
  }
_L260:
  phy_printf(&_LC11);
  return;
}

