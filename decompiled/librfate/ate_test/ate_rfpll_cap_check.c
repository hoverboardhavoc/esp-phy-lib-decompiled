/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librfate -> ate_test.o -> ate_rfpll_cap_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ate_rfpll_cap_check(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [28];
  
  iVar1 = 0;
  do {
    iVar5 = iVar1 + 1;
    chip_v7_set_chan(iVar5 * 0x1000000 >> 0x18,0);
    uVar3 = rom2_read_pll_cap();
    local_60[iVar1] = (char)(uVar3 >> 1);
    uVar2 = (**(code **)(_g_phyFuns + 0x1ac))(0x62,1,5,*(code **)(_g_phyFuns + 0x1ac));
    local_50[iVar1] = uVar2;
    uVar2 = (**(code **)(_g_phyFuns + 0x1ac))(0x62,1,2,*(code **)(_g_phyFuns + 0x1ac));
    local_40[iVar1] = uVar2;
    uVar2 = (**(code **)(_g_phyFuns + 0x1ac))(0x62,1,6,*(code **)(_g_phyFuns + 0x1ac));
    local_30[iVar1] = uVar2;
    iVar1 = iVar5;
  } while (iVar5 != 0xe);
  if (param_1 != 0) {
    phy_printf("ir_cap_ext:");
    iVar1 = 0;
    do {
      puVar4 = local_60 + iVar1;
      iVar1 = iVar1 + 1;
      phy_printf(&_LC11,*puVar4);
    } while (iVar1 != 0xe);
    phy_printf(&_LC9);
    phy_printf("or_pll_cap:");
    iVar1 = 0;
    do {
      puVar4 = local_50 + iVar1;
      iVar1 = iVar1 + 1;
      phy_printf(&_LC11,*puVar4);
    } while (iVar1 != 0xe);
    phy_printf(&_LC9);
    phy_printf("ir_dac_ext:");
    iVar1 = 0;
    do {
      puVar4 = local_40 + iVar1;
      iVar1 = iVar1 + 1;
      phy_printf(&_LC11,*puVar4);
    } while (iVar1 != 0xe);
    phy_printf(&_LC9);
    phy_printf("or_pll_dac:");
    iVar1 = 0;
    do {
      puVar4 = local_30 + iVar1;
      iVar1 = iVar1 + 1;
      phy_printf(&_LC11,*puVar4);
    } while (iVar1 != 0xe);
    phy_printf(&_LC9);
    return;
  }
  return;
}

