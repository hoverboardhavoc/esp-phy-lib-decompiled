/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> txrx_on_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txrx_on_test(void)

{
  (**(code **)(_g_phyFuns + 0x78))(*(code **)(_g_phyFuns + 0x78));
  (**(code **)(_g_phyFuns + 0x70))(4,1,0,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(4,2,0,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(5,1,0,*(code **)(_g_phyFuns + 0x70));
  (**(code **)(_g_phyFuns + 0x70))(1,1,0,*(code **)(_g_phyFuns + 0x70));
  do {
    (**(code **)(_g_phyFuns + 0x70))(0,1,0x40,*(code **)(_g_phyFuns + 0x70));
    ets_delay_us(100);
    (**(code **)(_g_phyFuns + 0x70))(0,1,0x7f,*(code **)(_g_phyFuns + 0x70));
    ets_delay_us(100);
    (**(code **)(_g_phyFuns + 0x70))(0,1,0,*(code **)(_g_phyFuns + 0x70));
    ets_delay_us(100);
  } while( true );
}

