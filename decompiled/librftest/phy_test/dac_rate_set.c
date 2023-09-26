/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> dac_rate_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dac_rate_set(uint param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(_g_phyFuns + 0x54))(0x66,0,4,1,1,*(code **)(_g_phyFuns + 0x54));
  if (iVar1 == 0) {
    _DAT_6004408c = (param_1 & 1) << 0x1b | _DAT_6004408c & 0xf7ffffff;
    (**(code **)(_g_phyFuns + 0x58))(0x66,0,4,4,4,param_1,*(code **)(_g_phyFuns + 0x58));
                    /* WARNING: Could not recover jumptable at 0x000100a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,2,4,4,param_1);
    return;
  }
  return;
}

