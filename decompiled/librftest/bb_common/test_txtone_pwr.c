/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> test_txtone_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_txtone_pwr(undefined1 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(_g_phyFuns + 0x94))(*(code **)(_g_phyFuns + 0x94));
  if (param_3 == 0) {
    (**(code **)(_g_phyFuns + 0x98))(1,param_4,param_1,0,0,0,*(code **)(_g_phyFuns + 0x98));
    iVar1 = 0;
    for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
      iVar3 = get_power_db(_DAT_0001309e);
      iVar1 = iVar1 + iVar3;
    }
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    if (param_3 == 1) {
      ets_delay_us(200);
      for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
        (**(code **)(_g_phyFuns + 0x98))(1,param_4,param_1,0,0,0,*(code **)(_g_phyFuns + 0x98));
        iVar3 = get_power_db(_DAT_0001309e);
        iVar2 = iVar2 + iVar3;
        (**(code **)(_g_phyFuns + 0x9c))(1,*(code **)(_g_phyFuns + 0x9c));
      }
      txcal_work_mode();
      iVar1 = iVar2;
    }
  }
  phy_printf(&_LC25,iVar1);
  return iVar1;
}

