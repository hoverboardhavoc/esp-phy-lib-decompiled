/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_track.o -> phy_param_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_param_track(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = enter_critical_phy();
  if (DAT_0001101f == '\0') {
    tsens_temp_read();
    if (bt_set_tx_gain != (code)0x0) {
      rfpll_cap_track(DAT_0001101b);
    }
    bt_track_tx_power(param_1,param_2);
  }
  exit_critical_phy(uVar1);
  return;
}

