/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_track.o -> txpwr_correct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txpwr_correct(int param_1,char *param_2,short *param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_2;
  if ((param_3[1] < param_4) || (param_4 < *param_3)) {
    cVar2 = temp_to_power(param_5);
    *param_2 = cVar2;
  }
  else {
    *param_2 = phy_param;
  }
  if ((*param_2 != cVar1) && (param_1 != 0)) {
    bt_set_tx_gain(0);
    return;
  }
  return;
}

