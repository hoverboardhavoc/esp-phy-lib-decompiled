/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> phy_corr_pwr_sum
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint phy_corr_pwr_sum(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  uint unaff_s2;
  
  (**(code **)(_g_phyFuns + 0x98))(1,param_1,0,0,0,0,*(code **)(_g_phyFuns + 0x98));
  cVar1 = '\0';
  do {
    (**(code **)(_g_phyFuns + 0xa4))(*(code **)(_g_phyFuns + 0xa4));
    (**(code **)(_g_phyFuns + 0xa0))(1,0xfff,*(code **)(_g_phyFuns + 0xa0));
    uVar2 = phy_corr_get_pwr();
    if ((cVar1 == '\0') || (uVar2 < unaff_s2)) {
      unaff_s2 = uVar2;
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar1 != '\b');
  (**(code **)(_g_phyFuns + 0x98))(0,param_1,0,0,0,0,*(code **)(_g_phyFuns + 0x98));
  return unaff_s2 >> 2;
}

