/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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

