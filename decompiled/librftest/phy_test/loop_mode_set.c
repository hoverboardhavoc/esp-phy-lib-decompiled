/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> loop_mode_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void loop_mode_set(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = 0x1000100;
  uStack_28 = 0x1000100;
  (**(code **)(_g_phyFuns + 0xc))(1,*(code **)(_g_phyFuns + 0xc));
  force_iq_set(1,1,0,0);
  force_iq_set(1,0,0,0);
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x90))(param_1,param_2,param_3,*(code **)(_g_phyFuns + 0x90));
  ets_delay_us(10);
  pbus_rx_dco_cal(0x800,&uStack_28,1,10,0);
  return;
}

