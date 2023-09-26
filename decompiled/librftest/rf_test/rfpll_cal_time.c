/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> rf_test.o -> rfpll_cal_time
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfpll_cal_time(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 local_a4 [112];
  
  if (param_2 != 0) {
    (**(code **)(_g_phyFuns + 0x14))(0,0,*(code **)(_g_phyFuns + 0x14));
    iVar5 = _DAT_600ad000;
    iVar2 = 0;
    do {
      uVar4 = (**(code **)(_g_phyFuns + 0x5c))(0x62,1,5,7,0,*(code **)(_g_phyFuns + 0x5c));
      iVar8 = _DAT_600ad000;
      local_a4[iVar2] = uVar4;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x32);
    iVar2 = 0;
    phy_printf("chan_freq=%d: ",param_1);
    do {
      puVar7 = local_a4 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC44,*puVar7);
    } while (iVar2 != 0x32);
    phy_printf(&_LC45,iVar8 - iVar5);
    return;
  }
  iVar5 = (**(code **)(_g_phyFuns + 0x5c))(0x62,1,1,7,0,*(code **)(_g_phyFuns + 0x5c));
  uVar3 = iVar5 - 5U & 0xff;
  do {
    (**(code **)(_g_phyFuns + 0x60))(0x62,1,1,7,0,uVar3,*(code **)(_g_phyFuns + 0x60));
    iVar2 = _DAT_600ad000;
    iVar8 = 0;
    do {
      uVar4 = (**(code **)(_g_phyFuns + 0x5c))(0x62,1,5,7,0,*(code **)(_g_phyFuns + 0x5c));
      iVar1 = _DAT_600ad000;
      local_a4[iVar8] = uVar4;
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x32);
    uVar6 = (**(code **)(_g_phyFuns + 0x5c))(0x62,1,1,7,0,*(code **)(_g_phyFuns + 0x5c));
    phy_printf("ir_cap_ext=%d: ",uVar6);
    iVar8 = 0;
    do {
      puVar7 = local_a4 + iVar8;
      iVar8 = iVar8 + 1;
      phy_printf(&_LC44,*puVar7);
    } while (iVar8 != 0x32);
    uVar3 = uVar3 + 1 & 0xff;
    phy_printf(&_LC45,iVar1 - iVar2);
  } while ((iVar5 + 5U & 0xff) != uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x60))(0x62,1,1,7,0,iVar5);
  return;
}

