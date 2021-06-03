/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> phy_param_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_param_track(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = phy_enter_critical();
  rom_tsens_temp_read();
  rom_wifi_track_tx_power(param_1,param_2);
  rom_bt_track_tx_power(param_1,param_2);
  phy_exit_critical(uVar1);
  return;
}

