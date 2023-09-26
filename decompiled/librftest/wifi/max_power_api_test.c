/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> max_power_api_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void max_power_api_test(void)

{
  byte abStack_14 [16];
  
  phy_get_max_pwr(abStack_14);
  _DAT_600a54ac = (abStack_14[0] & 0x3f) << 8 | _DAT_600a54ac & 0xffffc0c0 | abStack_14[0] & 0x3f;
  return;
}

