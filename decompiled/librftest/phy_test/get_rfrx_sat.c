/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> phy_test.o -> get_rfrx_sat
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

char get_rfrx_sat(void)

{
  char cVar1;
  char cVar2;
  
  cVar2 = 'd';
  cVar1 = '\0';
  do {
    cVar2 = cVar2 + -1;
    cVar1 = cVar1 + ((((uint)DAT_600123d2 << 8 | (uint)DAT_600123d3 << 0x10) >> 0xc & 0x7f) == 0x31)
    ;
  } while (cVar2 != '\0');
  return cVar1;
}

