/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> bbpll_set_freq_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bbpll_set_freq_test(undefined1 param_1,undefined1 param_2,int param_3)

{
  (**(code **)(_g_phyFuns + 0x144))(1,*(code **)(_g_phyFuns + 0x144));
  rtc_clk_xtal_freq_get();
  rtc_clk_cpu_freq_to_xtal(1);
  (**(code **)(_g_phyFuns + 0x58))(0x66,0,2,3,0,param_2,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x50))(0x66,0,3,param_1,*(code **)(_g_phyFuns + 0x50));
  _DAT_600c0058 = _DAT_600c0058 & 0xfffff3ff | 0x400;
  ets_update_cpu_frequency(param_3);
  rtc_clk_apb_freq_update(param_3 * 1000000);
  ets_delay_us(0x32);
  return;
}

