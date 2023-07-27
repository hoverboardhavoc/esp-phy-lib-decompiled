/*
 * Last changed at upstream commit 7bdaf7da843d762451b59947318cd2c6cf733855
 * https://github.com/espressif/esp-phy-lib/commit/7bdaf7da843d762451b59947318cd2c6cf733855
 * Upstream date: 2023-07-27 11:33:55 +0800
 * Upstream subject: fix c3 ble tx bug
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
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int unaff_s11;
  int local_70;
  int iStack_4c;
  int iStack_48;
  
  uVar3 = (**(code **)(_g_phyFuns + 0x1d0))(1,2,*(code **)(_g_phyFuns + 0x1d0));
  uVar9 = 0;
  for (uVar2 = uVar3 & 0x3f; uVar2 != 0; uVar2 = uVar2 >> 1) {
    uVar9 = uVar9 + (uVar2 & 1) & 0xff;
  }
  uVar2 = uVar3 >> 6 & 0xff;
  (**(code **)(_g_phyFuns + 0x1cc))(2,2,0x100,*(code **)(_g_phyFuns + 0x1cc));
  iVar12 = 3;
  (**(code **)(_g_phyFuns + 0x1cc))(3,2,0x100,*(code **)(_g_phyFuns + 0x1cc));
  if (2 < uVar9) {
    iVar12 = 5;
  }
  uVar3 = uVar9 + 7 & 0xff;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  cVar1 = '\0';
  do {
    iVar11 = (int)(short)uVar5;
    iVar10 = (int)(short)uVar6;
    pcVar7 = *(code **)(_g_phyFuns + 0x1cc);
    *param_2 = uVar5;
    (*pcVar7)(2,1,(uint)uVar5,pcVar7);
    pcVar7 = *(code **)(_g_phyFuns + 0x1cc);
    param_2[1] = uVar6;
    (*pcVar7)(3,1,(uint)uVar6,pcVar7);
    ets_delay_us(param_3);
    (**(code **)(_g_phyFuns + 0x10c))(1,param_1,&iStack_4c,*(code **)(_g_phyFuns + 0x10c));
    if (param_5 != 0) {
      phy_printf("(%d,%d) ",(int)(short)*param_2,(int)(short)param_2[1]);
      phy_printf("%d,%d ",iStack_4c,iStack_48);
    }
    iVar4 = (**(code **)(_g_phyFuns + 0x100))(iStack_4c,*(code **)(_g_phyFuns + 0x100));
    if ((iVar4 <= iVar12) &&
       (iVar4 = (**(code **)(_g_phyFuns + 0x100))(iStack_48,*(code **)(_g_phyFuns + 0x100)),
       iVar4 <= iVar12)) break;
    if (cVar1 == '\0') {
      local_70 = iStack_4c;
      unaff_s11 = iStack_48;
    }
    iVar4 = (**(code **)(_g_phyFuns + 0x100))(*(code **)(_g_phyFuns + 0x100));
    uVar8 = uVar3;
    if (iVar12 < iVar4) {
      iVar11 = (**(code **)(_g_phyFuns + 0x100))
                         (iStack_4c - local_70,*(code **)(_g_phyFuns + 0x100));
      iVar4 = (**(code **)(_g_phyFuns + 0x100))((iStack_4c * 3) / 2,*(code **)(_g_phyFuns + 0x100));
      if (iVar4 < iVar11) {
        uVar8 = uVar9 + 8 & 0xff;
      }
      iVar11 = (int)(short)((int)((uint)(byte)(&_LANCHOR16)[uVar2] * iStack_4c * 6) >>
                           (uVar8 + 2 & 0x1f));
      if ((iVar11 == 0) && (iVar11 = 1, iStack_4c < 1)) {
        iVar11 = -1;
      }
      iVar11 = (int)(((uint)uVar5 - iVar11) * 0x10000) >> 0x10;
    }
    iVar4 = (**(code **)(_g_phyFuns + 0x100))(iStack_48,*(code **)(_g_phyFuns + 0x100));
    if (iVar12 < iVar4) {
      iVar10 = (**(code **)(_g_phyFuns + 0x100))
                         (iStack_48 - unaff_s11,*(code **)(_g_phyFuns + 0x100));
      iVar4 = (**(code **)(_g_phyFuns + 0x100))((iStack_48 * 3) / 2,*(code **)(_g_phyFuns + 0x100));
      if (iVar4 < iVar10) {
        uVar8 = uVar8 + 1 & 0xff;
      }
      iVar10 = (int)(short)((int)((uint)(byte)(&_LANCHOR16)[uVar2] * iStack_48 * 6) >>
                           (uVar8 + 2 & 0x1f));
      if ((iVar10 == 0) && (iVar10 = 1, iStack_48 < 1)) {
        iVar10 = -1;
      }
      iVar10 = (int)(((uint)uVar6 - iVar10) * 0x10000) >> 0x10;
    }
    if (0x3fe < iVar11) {
      iVar11 = 0x3fe;
    }
    uVar5 = (ushort)iVar11;
    if (iVar11 << 0x10 < 0) {
      uVar5 = 0;
    }
    if (0x3fe < iVar10) {
      iVar10 = 0x3fe;
    }
    uVar6 = (ushort)iVar10;
    if (iVar10 << 0x10 < 0) {
      uVar6 = 0;
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
    if (param_5 == 0) goto _L424;
  }
  phy_printf(&_LC12);
  if (param_4 == 0) {
    return;
  }
_L424:
  phy_printf(&_LC12);
  return;
}

