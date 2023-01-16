/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_rfpll.o -> rfpll_cap_correct_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rfpll_cap_correct_new(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (**(code **)(_g_phyFuns + 0x50))(0x62,1,0xc,*(code **)(_g_phyFuns + 0x50));
  uVar2 = uVar2 >> 2 & 3;
  if (uVar2 == 1) {
    iVar1 = 2;
  }
  else {
    iVar1 = -2;
    if (uVar2 != 2) {
      iVar1 = 0;
      iVar4 = 0;
      iVar3 = 0;
      goto _L3;
    }
  }
  iVar3 = read_pll_cap();
  iVar4 = (iVar3 + iVar1) * 0x10000 >> 0x10;
  iVar3 = (int)(short)iVar3;
  write_pll_cap(iVar4);
  pll_cap_mem_update_new(iVar1);
_L3:
  if (param_1 != 0) {
    phy_printf("%d,%d,%d\n",iVar1,iVar3,iVar4);
  }
  return iVar1;
}

