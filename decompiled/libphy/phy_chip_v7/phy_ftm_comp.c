/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> phy_ftm_comp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

short phy_ftm_comp(void)

{
  short sVar1;
  short sVar2;
  
  sVar1 = phy_internal_delay();
  sVar2 = 0xfd;
  if ((phy_param != '\0') && (sVar2 = 199, phy_param != '\x01')) {
    sVar2 = 0x97;
  }
  return sVar1 + sVar2;
}

