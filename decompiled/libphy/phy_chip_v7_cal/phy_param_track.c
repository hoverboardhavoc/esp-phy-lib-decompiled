/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
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
  tsens_temp_read();
  wifi_track_tx_power(param_1,param_2);
  bt_track_tx_power(param_1,param_2);
  phy_exit_critical(uVar1);
  return;
}

