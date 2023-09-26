/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> mac_common.o -> pbus_debug1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_debug1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  (**(code **)(_g_phyFuns + 0x70))(0,1,param_1,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(0,2,param_2,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(1,2,param_3,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(2,1,param_4,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(3,1,param_5,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(2,2,param_6,*(code **)(_g_phyFuns + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000109a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x70))(3,2,param_7);
  return;
}

