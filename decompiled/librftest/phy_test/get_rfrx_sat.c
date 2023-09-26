/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> get_rfrx_sat
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char get_rfrx_sat(void)

{
  char cVar1;
  char cVar2;
  
  cVar2 = 'd';
  cVar1 = '\0';
  do {
    cVar2 = cVar2 + -1;
    cVar1 = cVar1 + ((_DAT_600a708c >> 0xc & 0x7f) == 0x31);
  } while (cVar2 != '\0');
  return cVar1;
}

