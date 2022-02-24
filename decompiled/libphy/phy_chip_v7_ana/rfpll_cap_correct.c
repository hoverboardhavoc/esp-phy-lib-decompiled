/*
 * Last changed at upstream commit 449b432d94b968a75ffabffae91fe15796de7644
 * https://github.com/espressif/esp-phy-lib/commit/449b432d94b968a75ffabffae91fe15796de7644
 * Upstream date: 2022-02-24 11:32:38 +0800
 * Upstream subject: Update phy lib: S3_20220128_fbd66bc :  for high/low temperature performance C3_20220119_908_049c04c : for high/low temperature performance
 * Source: libphy -> phy_chip_v7_ana.o -> rfpll_cap_correct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rfpll_cap_correct(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = (**(code **)(_g_phyFuns + 0x1ac))(0x62,1,0xc,*(code **)(_g_phyFuns + 0x1ac));
  uVar3 = uVar3 >> 2 & 3;
  if (uVar3 == 1) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0xfffffffc;
    if (uVar3 != 2) {
      uVar1 = 0;
      iVar5 = 0;
      iVar4 = 0;
      goto _L10;
    }
  }
  sVar2 = read_pll_cap();
  iVar4 = (int)sVar2;
  iVar5 = (int)(short)(sVar2 + (short)uVar1);
  ram_write_pll_cap();
  pll_cap_mem_update(uVar1);
_L10:
  if (param_1 != 0) {
    phy_printf("%d,%d,%d\n",uVar1,iVar4,iVar5);
  }
  return uVar1;
}

