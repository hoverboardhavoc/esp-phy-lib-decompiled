/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> freq_stable_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void freq_stable_test(void)

{
  int iVar1;
  
  do {
    force_txon_mode(1,0,10);
    (**(code **)(_g_phyFuns + 0x98))(1,0x80,0x3c,0,0,0,*(code **)(_g_phyFuns + 0x98));
    ram_set_chan_freq_sw_start(0xc,0,0);
    ets_delay_us(0x3c);
    (**(code **)(_g_phyFuns + 0x98))(0,0x80,0x3c,0,0,0,*(code **)(_g_phyFuns + 0x98));
    force_txon_mode(0,0,10);
    ram_set_chan_freq_sw_start(0x54,0,0);
    ets_delay_us(0x3c);
    iVar1 = GetStopCmd();
  } while (iVar1 != 0);
  return;
}

