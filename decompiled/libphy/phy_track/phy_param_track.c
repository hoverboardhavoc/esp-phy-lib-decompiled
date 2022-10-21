/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_track.o -> phy_param_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_param_track(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = phy_enter_critical();
  ram_tsens_temp_read();
  rom_wifi_track_tx_power(param_1,param_2);
  rom_bt_track_tx_power(param_1,param_2);
  phy_exit_critical(uVar1);
  return;
}

