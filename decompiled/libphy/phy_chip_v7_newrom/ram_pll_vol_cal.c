/*
 * Last changed at upstream commit 4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * https://github.com/espressif/esp-phy-lib/commit/4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * Upstream date: 2022-01-04 15:41:20 +0800
 * Upstream subject: fix the bug that phy libs still have ets_printf
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_pll_vol_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ram_pll_vol_cal(undefined4 param_1,ushort *param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = (uint)*param_2;
  uVar3 = param_2[3];
  do {
  } while (_DAT_6000e0c4 << 0xd < 0);
  if (param_3 == 0) {
    (**(code **)(_g_phyFuns + 0x1bc))(0x62,1,8,3,0,9,*(code **)(_g_phyFuns + 0x1bc));
  }
  uVar8 = read_pll_cap();
  iVar14 = 0;
  iVar15 = 1;
  bVar5 = false;
  uVar12 = uVar8;
  uVar13 = uVar8;
  bVar11 = false;
  do {
    ets_delay_us(1);
    uVar9 = (**(code **)(_g_phyFuns + 0x154))(0,*(code **)(_g_phyFuns + 0x154));
    bVar4 = uVar9 < uVar7;
    uVar10 = uVar13;
    if (((param_3 != 0) && (uVar9 < uVar7)) && (uVar3 < uVar9)) break;
    if (param_4 != 0) {
      phy_printf("i=%d,freq=%d,cap_step=%d,cap_ext=%d,vol_code=%d,flagl=%d\n",iVar14,param_1,iVar15,
                 uVar13,uVar9,bVar4);
    }
    if ((iVar14 == 0) || (bVar4 == bVar11)) {
      if ((!bVar5) && ((uVar1 < uVar9 || (uVar9 < uVar2)))) {
        iVar15 = 3;
      }
    }
    else {
      if (iVar15 == 1) {
        if (uVar7 <= uVar9) {
          uVar10 = uVar12;
        }
        break;
      }
      iVar15 = 1;
      bVar5 = true;
    }
    iVar6 = iVar15;
    if (uVar7 <= uVar9) {
      iVar6 = -iVar15;
    }
    uVar10 = iVar6 + uVar13 & 0xffff;
    if (uVar10 < 10) {
      phy_printf("pll_cap_ext %d\n",10);
      uVar10 = 10;
      break;
    }
    if (500 < uVar10) {
      phy_printf("pll_cap_ext %d\n",500);
      uVar10 = 500;
      break;
    }
    ram_write_pll_cap(uVar10);
    iVar14 = iVar14 + 1;
    uVar12 = uVar13;
    uVar13 = uVar10;
    bVar11 = bVar4;
  } while (iVar14 != 100);
  ram_write_pll_cap(uVar10);
  if (param_3 == 0) {
    (**(code **)(_g_phyFuns + 0x1bc))(0x62,1,8,3,0,0,*(code **)(_g_phyFuns + 0x1bc));
  }
  return (int)((uVar10 - uVar8) * 0x1000000) >> 0x18;
}

