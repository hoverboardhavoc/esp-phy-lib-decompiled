/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> phy_txpwr_backoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_txpwr_backoff(int param_1,char param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)(param_1 + 2);
  do {
    pcVar2 = pcVar1 + 1;
    *pcVar1 = *pcVar1 + param_2;
    pcVar1 = pcVar2;
  } while (pcVar2 != (char *)(param_1 + 0x10));
  return;
}

