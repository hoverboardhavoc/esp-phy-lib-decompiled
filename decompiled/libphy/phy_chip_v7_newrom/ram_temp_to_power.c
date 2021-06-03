/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_temp_to_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int ram_temp_to_power(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1 - param_2) * 0x10000 >> 0x10;
  iVar2 = 5;
  if (iVar1 < 1) {
    iVar2 = 3;
  }
  return (int)(char)(iVar1 / iVar2);
}

