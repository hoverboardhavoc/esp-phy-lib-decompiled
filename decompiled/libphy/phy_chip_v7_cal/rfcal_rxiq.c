/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> rfcal_rxiq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfcal_rxiq(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  _DAT_6000607c = _DAT_6000607c & 0xefffffff | 0x8000000;
  start_tx_tone_step(1,0,0,0);
  rxiq_cover_mg_mp(param_1,&uStack_12,&uStack_11,param_3);
  stop_tx_tone(1);
  *param_2 = uStack_12;
  param_2[1] = uStack_11;
  return;
}

