/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> pbus_tx_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_tx_test(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  (**(code **)(_g_phyFuns + 0x78))(*(code **)(_g_phyFuns + 0x78));
  (**(code **)(_g_phyFuns + 0x70))(0,1,0x80,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(0,2,0,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(4,2,0,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(1,1,0x7c,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(1,2,0,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(4,1,0x83,*(code **)(_g_phyFuns + 0x70));
  do {
    (**(code **)(_g_phyFuns + 0x70))(4,1,param_1,*(code **)(_g_phyFuns + 0x70));
    (**(code **)(_g_phyFuns + 0x70))(5,1,param_3,*(code **)(_g_phyFuns + 0x70));
    ets_delay_us(2000);
    (**(code **)(_g_phyFuns + 0x70))(4,1,param_2,*(code **)(_g_phyFuns + 0x70));
    (**(code **)(_g_phyFuns + 0x70))(5,1,param_4,*(code **)(_g_phyFuns + 0x70));
    ets_delay_us(100);
    iVar1 = GetStopCmd();
  } while (iVar1 != 0);
  (**(code **)(_g_phyFuns + 0x70))(4,1,param_1,*(code **)(_g_phyFuns + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000114a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x70))(5,1,param_3);
  return;
}

