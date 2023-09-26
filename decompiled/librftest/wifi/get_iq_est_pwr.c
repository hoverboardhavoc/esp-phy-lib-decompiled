/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> get_iq_est_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int get_iq_est_pwr(void)

{
  (**(code **)(_g_phyFuns + 0xa4))(*(code **)(_g_phyFuns + 0xa4));
  (**(code **)(_g_phyFuns + 0xa0))(1,0x1fff,*(code **)(_g_phyFuns + 0xa0));
  return _DAT_600a0490 >> 10;
}

