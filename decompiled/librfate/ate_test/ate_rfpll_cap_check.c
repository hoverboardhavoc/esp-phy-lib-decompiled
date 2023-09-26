/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librfate -> ate_test.o -> ate_rfpll_cap_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ate_rfpll_cap_check(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [28];
  
  uVar1 = 0;
  do {
    uVar6 = uVar1 + 1;
    chip_v7_set_chan(uVar6 & 0xffff,0);
    uVar4 = read_pll_cap();
    local_60[uVar1] = (char)(uVar4 >> 1);
    uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x62,1,5,*(code **)(_g_phyFuns + 0x50));
    local_50[uVar1] = uVar3;
    uVar3 = (**(code **)(_g_phyFuns + 0x5c))(0x62,1,2,3,0,*(code **)(_g_phyFuns + 0x5c));
    local_40[uVar1] = uVar3;
    uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x62,1,6,*(code **)(_g_phyFuns + 0x50));
    local_30[uVar1] = uVar3;
    uVar1 = uVar6;
  } while (uVar6 != 0xe);
  if (param_1 != 0) {
    phy_printf("ir_cap_ext:");
    iVar2 = 0;
    do {
      puVar5 = local_60 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC11,*puVar5);
    } while (iVar2 != 0xe);
    phy_printf(&_LC9);
    phy_printf("oc_pll_cap:");
    iVar2 = 0;
    do {
      puVar5 = local_50 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC11,*puVar5);
    } while (iVar2 != 0xe);
    phy_printf(&_LC9);
    phy_printf("ir_dac_ext:");
    iVar2 = 0;
    do {
      puVar5 = local_40 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC11,*puVar5);
    } while (iVar2 != 0xe);
    phy_printf(&_LC9);
    phy_printf("or_pll_dac:");
    iVar2 = 0;
    do {
      puVar5 = local_30 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC11,*puVar5);
    } while (iVar2 != 0xe);
    phy_printf(&_LC9);
    return;
  }
  return;
}

