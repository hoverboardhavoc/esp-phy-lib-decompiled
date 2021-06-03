/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> get_rfrx_sat
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
    cVar1 = cVar1 + ((_DAT_6001c08c >> 0xc & 0x7f) == 0x31);
  } while (cVar2 != '\0');
  return cVar1;
}

