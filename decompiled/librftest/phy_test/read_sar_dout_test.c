/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> read_sar_dout_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void read_sar_dout_test(undefined4 param_1,undefined2 param_2)

{
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  
  pwdet_tone_test();
  (**(code **)(_g_phyFuns + 0x2c))(&uStack_30,*(code **)(_g_phyFuns + 0x2c));
  ets_delay_us(param_2);
  pwdet_tone_test(param_1);
  (**(code **)(_g_phyFuns + 0x2c))(&uStack_20,*(code **)(_g_phyFuns + 0x2c));
  phy_printf("sar:%d,%d,%d,%d,%d,%d,%d,%d\n",uStack_30,uStack_2e,uStack_2c,uStack_2a,uStack_20,
             uStack_1e,uStack_1c);
  return;
}

