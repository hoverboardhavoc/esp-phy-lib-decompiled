/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> meas_tone_pwr_db
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int meas_tone_pwr_db(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 4;
  start_tx_tone_step(1,param_1,0,0,0);
  iVar1 = 0;
  do {
    iVar3 = get_power_db(param_2);
    iVar2 = iVar2 + -1;
    iVar1 = (iVar1 + iVar3) * 0x10000 >> 0x10;
  } while (iVar2 != 0);
  stop_tx_tone(1);
  return (int)(short)((iVar1 + 4) / 8);
}

